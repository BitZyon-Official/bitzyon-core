/* Copyright (c) 2014, Bitzyon Developers */
/* See LICENSE for licensing information */

/**
 * \file Bitzyon.h
 * \brief Headers for Bitzyon.cpp
 **/

#ifndef TOR_BitZyon_H
#define TOR_BitZyon_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* BitZyon_tor_data_directory(
    );

    char const* BitZyon_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

