#!/bin/bash

{
    cmake --build ./build
    ./build/idolmaster
} || {
    ./build.sh
    cmake --build ./build
    ./build/idolmaster
}
