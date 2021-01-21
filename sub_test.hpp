#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "sub.hpp"

TEST(SubTest, SubTwelve) {
        Op* num1 = new Op(4);
        Op* num2 = new Op(8);
        Sub* test = new Sub(num1, num2);
        EXPECT_EQ(test->evaluate(), -4);
}

TEST(StringTest, SubTwelve) {
        Op* num1 = new Op(4);
        Op* num2 = new Op(8);
        Sub* test = new Sub(num1, num2);
        EXPECT_EQ(test->stringify(), "(4.000000 - 8.000000)");
}

TEST(SubNegative, SubTen) {
        Op* num1 = new Op(4);
        Op* num2 = new Op(-6);
        Sub* test = new Sub(num1, num2);
        EXPECT_EQ(test->evaluate(), 10);
}

TEST(StringNegative, SubTen) {
        Op* num1 = new Op(4);
        Op* num2 = new Op(-6);
        Sub* test = new Sub(num1, num2);
        EXPECT_EQ(test->stringify(), "(4.000000 - -6.000000)");
}


#endif //__SUB_TEST_HPP__

