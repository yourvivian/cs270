#include "gtest/gtest.h"
#include "operation.h"

// g++ -o operation operation.cpp operation_test.cpp -L/usr/local/lib -lgtest -lpthread


TEST(AddTest, HandlesPosiveInput) {
    // Add assertions to check that the function is adding two integers
    // Integers can be positive, negative, or zero
    EXPECT_EQ(add(2,3),5);
    EXPECT_EQ(add(0,10000),10000);
}

TEST(AddTest, HandlesNegativeInput) {
    // Add assertions to check that the function is adding two integers
    // Integers can be positive, negative, or zero
    EXPECT_EQ(add(-2,-3),-5);
    EXPECT_EQ(add(-100,50),-50);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
