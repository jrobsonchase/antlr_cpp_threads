#!/bin/bash

set -e

mkdir -p myparser/build && cd myparser/build

cmake -DBUILD_BINARY=True ..
make
