
SET(TEST_EXE schoolmanagementtest)

# get all files ending with .cpp, .h or .hpp
FILE(GLOB_RECURSE TEST_SRCFILES *.cpp *.h *.hpp)
# Do not compile other cpp files than main to separate lib
# as TestSuite will be searching for CPPUNIT_TEST_SUITE_REGISTRATION
add_executable(${TEST_EXE} ${TEST_SRCFILES})

target_include_directories (${TEST_EXE} PUBLIC ../src)

target_link_libraries(${TEST_EXE} 
    LINK_PUBLIC 
        schoolmanagement
        cppunit)
