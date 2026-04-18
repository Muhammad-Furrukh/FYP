#!/bin/bash

BUILD_DIR=../build

rm -rf $BUILD_DIR
mkdir -p $BUILD_DIR

cd $BUILD_DIR

vlib work
vmap work work

vlog -sv -lint -suppress 13314 -f ../sim/files.f