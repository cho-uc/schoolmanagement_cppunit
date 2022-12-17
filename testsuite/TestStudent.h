#ifndef TestStudent_h
#define TestStudent_h

// Always include this header files: in all the header files of the test classes
#include <cppunit/extensions/HelperMacros.h>

class StudentTest : public CPPUNIT_NS::TestFixture // Every test class that you wrote must inherit the class CPPUNIT_NS::TestFixture.
{ 
    CPPUNIT_TEST_SUITE( StudentTest ); 
    CPPUNIT_TEST( testConstructor );
    CPPUNIT_TEST( testAssignAndRetrieveGrades );
    CPPUNIT_TEST_SUITE_END();

    public:
        void setUp();
        void tearDown();

        // method to test the constructor
        void testConstructor();

        // method to test the assigning and retrieval of grades
        void testAssignAndRetrieveGrades();
};
#endif
    