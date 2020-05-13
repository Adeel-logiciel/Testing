#define CATCH_CONFIG_MAIN

#include "include/catch.hpp"

int ifTwo(int two)
{
    return two == 2 ? two : 0 ;
}

TEST_CASE( "TestCase if Two (pass)", "[single-file]" ) {
    REQUIRE( ifTwo(0) == 0 );
    REQUIRE( ifTwo(2) == 2 );
}

TEST_CASE( "TestCase if Two (fail)", "[single-file]" ) {
    REQUIRE( ifTwo(0) == 2 );
    REQUIRE( ifTwo(2) == 0 );
}