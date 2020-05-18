// tests.cpp
#include "whatToTest.cpp"
#include <gtest/gtest.h>
 

TEST(isTwo, Two) { 
    ASSERT_EQ(2, isTwo(2));
}


TEST(isTwo, notTwo) { 
    ASSERT_EQ(3, isTwo(2));
}


 
TEST(isTwo, NegativeNos) {
    ASSERT_EQ(-1, isTwo(-15));
    ASSERT_EQ(-1, isTwo(-2));
}

TEST(isTwo, Zero) {
    ASSERT_EQ(-1, isTwo(0));
}
 
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}