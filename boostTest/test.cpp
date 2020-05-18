#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/unit_test.hpp>
 
int isTwo(int i)
{
    if(i!=2){
        return -1;
    }
    else{    
        return i;
    }
}

BOOST_AUTO_TEST_SUITE(Passing)
 
BOOST_AUTO_TEST_CASE(checkingTwo)
{
    BOOST_CHECK(isTwo(2) == 2);
    BOOST_CHECK(isTwo(4) == -1);
    BOOST_CHECK(isTwo(5) == -1);
}
 
BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(Failing)
 
BOOST_AUTO_TEST_CASE(FailingTwo)
{
    BOOST_CHECK(isTwo(2) == -1);
    BOOST_CHECK(isTwo(4) == 2);
    BOOST_CHECK(isTwo(5) == 2);
}
 
BOOST_AUTO_TEST_SUITE_END()

