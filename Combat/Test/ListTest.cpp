#include "lista.hpp"

#include <gtest/gtest.h>



using namespace ::testing;



TEST(ListTest, ItShouldWork)

{

    list<int> testList;



    testList.pushBack(8);

    testList.pushBack(12);

    testList.pushBack(24);

    testList.size();

    ASSERT_EQ(testList.size(), 3);

}
