cmake_minimum_required(VERSION 3.20)
project(design_patterns)

add_executable(strategy_pattern main.cpp
        fly_behaviour.h
        quack_behaviour.h)
