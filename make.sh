#! /bin/bash

set -e
set -x

# TODO: make configurable
AFL_PATH="./AFL-2.57b"

python rules2code.py < rules/cxx.txt > rules/cxx.hh
g++ -std=c++11 -I"${AFL_PATH}" -Wall -g -o main main.cc

mkdir -p output
