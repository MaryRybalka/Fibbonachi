#include "gtest/gtest.h"
#include "lib.h"

TEST(fib, CheckNegativeValue) {
    EXPECT_EQ(-1, fib(-1));
}

TEST(fib, CheckZeroValue) {
    EXPECT_EQ(0, fib(0));
}

TEST(fib, CheckOneValue) {
    EXPECT_EQ(1, fib(1));
}

TEST(fib, CheckTwoValue) {
    EXPECT_EQ(1, fib(2));
}

TEST(fib, CheckPositiveValue) {
    EXPECT_EQ(8, fib(6));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
