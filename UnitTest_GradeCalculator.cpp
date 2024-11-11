#include <gtest/gtest.h>
#include "GradeCalculator.cpp"

// Test for valid score ranges
TEST(GradeCalculatorTest, ValidScoreRanges) {
    EXPECT_EQ(getGrade(100), "A+");
    EXPECT_EQ(getGrade(85), "A+");
    EXPECT_EQ(getGrade(75), "A");
    EXPECT_EQ(getGrade(65), "B");
    EXPECT_EQ(getGrade(55), "C");
    EXPECT_EQ(getGrade(45), "D");
    EXPECT_EQ(getGrade(35), "F");
}

// Test for boundary cases
TEST(GradeCalculatorTest, BoundaryCases) {
    EXPECT_EQ(getGrade(80), "A+");
    EXPECT_EQ(getGrade(70), "A");
    EXPECT_EQ(getGrade(60), "B");
    EXPECT_EQ(getGrade(50), "C");
    EXPECT_EQ(getGrade(40), "D");
}

// Test for invalid inputs
TEST(GradeCalculatorTest, InvalidInput) {
    EXPECT_EQ(getGrade(-1), "Invalid");
    EXPECT_EQ(getGrade(101), "Invalid");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
