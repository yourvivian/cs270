#include "gtest/gtest.h"
#include "calculator.h" 

TEST(AddTest, HandlesPositiveInput) {
    EXPECT_EQ(addition(1, 1), 2);
    EXPECT_EQ(addition(2, 2), 4);
}

TEST(AddTest, HandlesNegativeInput) {
    EXPECT_EQ(addition(-10, -12), -22);
    EXPECT_EQ(addition(-2, -8), -10);
}

TEST(SubstractionTest, HandlesPositiveInput) {
    EXPECT_EQ(substraction(5, 3), 2);
    EXPECT_EQ(substraction(10, 2), 8);
}

TEST(SubstractionTest, HandlesNegativeInput) {
    EXPECT_EQ(substraction(2, -13), 15);
    EXPECT_EQ(substraction(-12, -15), 3);
}

TEST(MultiplyTest, HandlesPositiveInput) {
    // Create assertions to test multiplication
    EXPECT_EQ(multiplication(2, 3), 6);
    EXPECT_EQ(multiplication(10, 15), 150);
}

TEST(MultiplyTest, HandlesNegativeInput) {
    // Create assertions to test multiplication
    EXPECT_EQ(multiplication(-3, -4), 12);
    EXPECT_EQ(multiplication(-5, 7), -35);
}

TEST(DivisionTest, HandlesPositiveInput) {
    // Create assertions to test division
    EXPECT_EQ(division(15, 3), 5);
}

TEST(DivisionTest, HandlesNegativeInput) {
    // Create assertions to test division
    EXPECT_EQ(division(-20, 2), -10);
    EXPECT_EQ(division(-15, -2), 7.5);
}

TEST(DivisionTest, HandlesBoundaryInput) {
    // Create assertions to test division
    EXPECT_EQ(division(10, 0), -1);
    EXPECT_EQ(division(100, 0), -1);
}


TEST(SquareRootTest, HandlesNonNegativeInput) {
    // Create assertions to test square root
    EXPECT_EQ(squareroot(49), 7);
    EXPECT_EQ(squareroot(9), 3);
}

TEST(SquareRootTest, HandlesBoundaryInput) {
    // Create assertions to test square root
    EXPECT_EQ(squareroot(-5), -1);
    EXPECT_EQ(squareroot(-25), -1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}