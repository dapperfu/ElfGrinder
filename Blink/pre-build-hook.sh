#!/usr/bin/env bash

echo $1
echo $2
echo $3
clang-format-7 -i -style=LLVM Blink.ino
