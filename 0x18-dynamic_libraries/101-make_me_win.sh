#!/bin/bash
wget -P .. https://raw.githubusercontent.com/monoprosito/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
