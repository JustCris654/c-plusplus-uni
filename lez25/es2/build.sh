#!/usr/bin/env bash

set -xe

CFLAGS="-Wall"

c++ -std=c++20 $CFLAGS *.cpp -o main
