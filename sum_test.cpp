#include "gtest/gtest.h"
#include "sum.cpp" 

TEST(AddTest, HandlesPosiveInput) {
    EXPECT_EQ(add(1, 1), 2);
    EXPECT_EQ(add(2, 2), 4);
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
