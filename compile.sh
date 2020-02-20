#!/bin/bash

export TZ=EST5EDT4,M4.1.0/02:00:00,M10.5.0/02:00:00

# make tools/install
# make -j4 toolchain/install
# make -j4 target/compile
# PATH=/home/voxel/local/bin:/usr/local/bin:/usr/bin:/bin:/usr/local/games:/usr/games
make V=99 >& report
