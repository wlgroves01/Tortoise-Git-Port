cmake_minimum_required(VERSION 3.16)

set(LIBRARY_NAME git-wrapper)

file(GLOB SOURCES "*.cpp")
file(GLOB HEADERS "*.h")

add_library(${LIBRARY_NAME} SHARED ${SOURCES} ${HEADERS})
target_precompile_headers(${LIBRARY_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../../ext/gitdll/stdafx.h")
target_include_directories(${LIBRARY_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_include_directories(${LIBRARY_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../../ext/gitdll")
target_include_directories(${LIBRARY_NAME} PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/../Utils")