#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, AddTwelve) {
	Op* four = new Op(4);
	Op* eight = new Op(8);
	Add* test = new Add(four, eight);
	EXPECT_EQ(test->evaluate(), 12);
}

TEST(StringTest, AddTwelve) {
	Base* four = new Op(4);
	Base* eight = new Op(8);
	Add* test = new Add(four, eight);
	EXPECT_EQ(test->stringify(), "(4.000000 + 8.000000)");
}

TEST(AddNegative, AddTwo) {
	Op* four = new Op(4);
	Op* six = new Op(-6);
	Add* test = new Add(four, six);
	EXPECT_EQ(test->evaluate(), -2);
}

TEST(StringNegative, AddTwo) {
	Op* four = new Op(4);
	Op* six = new Op(-6);
	Add* test = new Add(four, six);
	EXPECT_EQ(test->stringify(), "(4.000000 + -6.000000)");
}


#endif //__OP_TEST_HPP__
