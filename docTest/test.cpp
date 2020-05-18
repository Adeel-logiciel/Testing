#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int isTwo(const int a) {
    if(a != 2) { 
        return -1;
    }else{
        return (a);
    }
}

TEST_CASE("Passing") {
    CHECK(isTwo(1) == -1);
    CHECK(isTwo(2) == 2);
    CHECK(isTwo(3) == -1);
    CHECK(isTwo(10) == -1);
}

TEST_CASE("Failing") {
    CHECK(isTwo(1) == 2);
    CHECK(isTwo(2) == -1);
}