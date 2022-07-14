cmake_minimum_required(VERSION 3.7)

project(SDL2Test)

find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIRS})

add_executable(SDL2Test Main.cpp)
target_link_libraries(SDL2Test ${SDL2_LIBRARIES})

# set(SDL2_INCLUDE_DIRS "C:\\git\\SDL2-devel-2.0.5-VC\\SDL2-2.0.5\\include")
# set(SDL2_DIR "C:\\git\\SDL2-devel-2.0.5-VC\\SDL2-2.0.5")

# # Support both 32 and 64 bit builds
# if (${CMAKE_SIZEOF_VOID_P} MATCHES 8)
#   set(SDL2_LIBRARIES "${SDL2_DIR}/lib/x64/SDL2.lib;${SDL2_DIR}/lib/x64/SDL2main.lib")
# else ()
#   set(SDL2_LIBRARIES "${SDL2_DIR}/lib/x86/SDL2.lib;${SDL2_DIR}/lib/x86/SDL2main.lib")
# endif ()

# string(STRIP "${SDL2_LIBRARIES}" SDL2_LIBRARIES)
