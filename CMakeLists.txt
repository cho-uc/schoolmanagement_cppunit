CMAKE_MINIMUM_REQUIRED(VERSION 2.8.7)
SET(THIS_PROJECT SCHOOL_MANAGEMENT)
PROJECT(${THIS_PROJECT}
)

# get all files ending with .cpp, .h or .hpp
FILE(GLOB_RECURSE SOURCE_FILES src/*.cpp src/*.h src/*.hpp)

# Compile into one static library
add_library(schoolmanagement STATIC ${SOURCE_FILES})

add_subdirectory(testsuite)
