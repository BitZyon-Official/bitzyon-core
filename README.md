[![N|Solid](http://explorer.bitzyon.com/images/logo.png)](https://bitzyon.com/)
# BitZyon - The BitZyon blockchain was designed 100% Staking
# Version: 1.0.0.0 BETA

- Broadcastthe use of cryptocurrencies as a way to transfer financial resources between people, using blockchain technology, from order to provide safe and decentralized economic operations, for social messenger application.

- Serveas a form of payment in the world of online commercial businesses, (virtual stores, sports betting houses and casinos), and in physical stores.

- Use BitZyon for payments through its own platform.

# WebSites:
> :earth_americas: Website:
**https://bitzyon.com**

> :earth_americas: Block Explorer:
**https://explorer.bitzyon.com**


# Contact:
> :speech_balloon: Telegram PT:
**https://t.me/BitzyonPT**

> :speech_balloon: Telegram EN:
**https://t.me/Bitzyon**

> :speech_balloon: Telegram ES:
**https://t.me/BitzyonES**

> :speech_balloon: Twitter:
**https://twitter.com/BitZyon1**

> :speech_balloon: Twitter:
**https://www.instagram.com/bitzyonbrasil**

> :speech_balloon: Twitter:
**https://github.com/BitZyon-Official**

> :speech_balloon: Facebook:
**https://m.facebook.com/bitzyonPT**

> :email: E-mail:
**contact@bitzyon.com**

# Specifications:
  - **ALGORITHM:** x13
  - **BLOCK TIME:** 60 seconds
  - **AWARDS PoW:** 0.05 ZYON's per block after havings
  - **PoS:** After 5min
  - **PoS:** 100% per year after havings
  - **CONFIRMATIONS:** 5 for mining and 3 for transactions
  - **E2M MESSAGE** Send and receive encrypted messages directly into your wallet
  - **TOTAL COINS:** ~ 100000000 ZYON's
  - **LAST BLOCK PoW:** 33331
  - **PRE-MINED COINS:** ~ 28000000 ZYON's
  - **VELOCITY:** Triple verification system in every network transaction, thus preventing the "double spend"
  - **Adaptable Block Size(ABS):** The block holds all transactions sent within 60 seconds, regardless of the number of transactions


# Phases of Bitzyons [POW] (Blocks):
  - **Block:** 0 a 200 = 140000 ZYON's
  - **Block:** 201 a 1000 = 0.05 * ZYON's
  - **Block:** 1001 a 2250004 = 0.025 * ZYON's
  - **Block:** 2250005 a  6650012 =  0.01 * ZYON's
  
# Phases of Bitzyons [POS] (Blocks):
  - **Block:** 201 a 600001 = 50 * ZYON's
  - **Block:** 600002 a 1150002 = 25 * ZYON's
  - **Block:** 1150003 a 2250004 = 13 * ZYON's
  - **Block:** 2250005 a 2800005 = 6 * ZYON's
  - **Block:** 2800006 a 3350006 = 3 * ZYON's
  - **Block:** 3350007 a 6650012 = 2 * ZYON's

# Compile Source<br>
**Download and install the dependencies:**<br>
sudo apt-get install build-essential libboost-all-dev libcurl4-openssl-dev libdb5.3-dev libdb5.3++-dev libminiupnpc-dev qrencode libqrencode-dev git libtool automake autotools-dev autoconf pkg-config libssl-dev libgmp3-dev libevent-dev bsdmainutils
<br><br><br>
**Compile the daemon in the bitzyon-core/src directory:**<br>
cd bitzyon-core/src<br><br>
make -f makefile.unix USE_UPNP=1 USE_IPV6=1<br><br>
strip BitZyond<br>
<br><br>
**Run daemon in the bitzyon-core/src directory:**<br>
./BitZyond<br><br>
<br>
**(OPTIONAL)Compile the QT in the bitzyon-core directory - Ubuntu 16.04:**<br>
sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler libqrencode-dev qt-sdk<br><br>
qmake BitZyon-qt.pro "USE_UPNP=1" "USE_QRCODE=1"<br><br>
make -f Makefile<br><br>
**(OPTIONAL)Compile the QT in the bitzyon-core directory - Ubuntu 18.04:**<br>
sudo apt-get install libqt5gui5 libqt5core5a libqt5dbus5 qttools5-dev qttools5-dev-tools libprotobuf-dev protobuf-compiler libqrencode-dev libqt4-dev<br><br>
qmake BitZyon-qt.pro "USE_UPNP=1" "USE_QRCODE=1"<br><br>
make -f Makefile<br><br>

# BitZyon.conf
```sh
rpcuser=user
rpcpassword=Random_Password
rpcport=44571
port=44570
#(0=off, 1=on) daemon - run in the background as a daemon and accept commands
daemon=1
listen=1
txindex=1
#(0=off, 1=on) server - accept command line and JSON-RPC commands
server=1
rpcallowip=127.0.0.1
testnet=0
addnode=seed1.bitzyon.com:44570
addnode=seed2.bitzyon.com:44570
```

# sperocoin.conf - Testnet
```sh
rpcuser=user
rpcpassword=Random_Password
rpcport=44581
port=44580
#(0=off, 1=on) daemon - run in the background as a daemon and accept commands
daemon=1
listen=1
txindex=1
#(0=off, 1=on) server - accept command line and JSON-RPC commands
server=1
rpcallowip=127.0.0.1
testnet=1
addnode=seed1.bitzyon.com:44570
addnode=seed2.bitzyon.com:44570
```

# Exchanges:
 - 💎 EM BREVE

#  Mining:
- Solo Cpu:
```sh
{
"_comment1" : "Any long-format command line argument ",
"_comment2" : "may be used in this JSON configuration file",

"api-bind" : "127.0.0.1:44571",

"url" : "localhost:44571",
"user" : "user",
"pass" : "password",

"algo" : "x13",
"threads" : 0,
"cpu-priority" : 0,
"cpu-affinity" : -1,

"benchmark" : false,
"debug" : true,
"protocol": false,
"quiet" : false
}
```

```sh
cpuminer -q --algo=x13 -o 127.0.0.1:44571 -u user-p password
```

- Solo GPU:
```sh
ccminer30.exe -q --algo=x13 -o 127.0.0.1:44571 -u user-p password
```
