#!/bin/sh

set -e
set -x

cc $1 -Wall -Wextra
./a.out
