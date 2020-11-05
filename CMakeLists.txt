cmake_minimum_required(VERSION 3.16)

project(datafun)

add_executable(datafun datafun.cpp)

install(TARGETS datafun)

enable_testing()
add_test(NAME datafun COMMAND datafun)


IF (WIN32 AND CMAKE_CXX_COMPILER_ID STREQUAL "GNU")
	target_link_libraries(datafun -static)
ENDIF()