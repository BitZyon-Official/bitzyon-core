/* Copyright (c) 2009-2010 Satoshi Nakamoto
   Copyright (c) 2009-2012 The Bitcoin developers
   Copyright (c) 2013-2014 The Bitzyon developers */
/* See LICENSE for licensing information */

#include "Bitzyon.h"
#include "util.h"

#include <boost/filesystem.hpp>
#include <boost/thread/thread.hpp>
#include <boost/thread/mutex.hpp>
#include <string>
#include <cstring>

char const* BitZyon_tor_data_directory(
) {
    static std::string const retrieved = (
        GetDefaultDataDir(
        ) / "tor"
    ).string(
    );
    return retrieved.c_str(
    );
}

char const* BitZyon_service_directory(
) {
    static std::string const retrieved = (
        GetDefaultDataDir(
        ) / "onion"
    ).string(
    );
    return retrieved.c_str(
    );
}

int check_interrupted(
) {
    return boost::this_thread::interruption_requested(
    ) ? 1 : 0;
}

static boost::mutex initializing;

static std::auto_ptr<boost::unique_lock<boost::mutex> > uninitialized(
    new boost::unique_lock<boost::mutex>(
        initializing
    )
);

void set_initialized(
) {
    uninitialized.reset();
}

void wait_initialized(
) {
    boost::unique_lock<boost::mutex> checking(initializing);
}
