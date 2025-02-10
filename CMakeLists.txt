cmake_minimum_required(VERSION 3.30)
project(chromium_explore)

set(CMAKE_CXX_STANDARD 20)

add_executable(chromium_explore main.cpp
        renderer/core/loader/resource/css_style_sheet_resource.cpp
        renderer/core/loader/resource/css_style_sheet_resource.h
        renderer/platform/loader/fetch/resource.cpp
        renderer/platform/loader/fetch/resource.h)
