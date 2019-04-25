//
// Created by Kata on 2019. 04. 25..
//
#include <gtest/gtest.h>
#include "apples.h"

TEST(AppleCheckTest, ApplePrintTest)
{
    ASSERT_EQ(getApples(), "appl");
}

TEST(AppleCheckTest, VectorAppleSumTest)
{
    // Arrange
    std::vector<int> vectorTestSum = {2, 5, 4, 3};

    // Act
    int sum = sumApples(vectorTestSum);

    // Assert
    ASSERT_EQ(sum, 14);
}

TEST(AppleCheckTest, EmptyVectorAppleSumTest)
{
    std::vector<int> vectorTestSum = {};

    int sum = sumApples(vectorTestSum);

    ASSERT_EQ(sum, 0);
}

TEST(AppleCheckTest, OneElementVectorAppleSumTest)
{
    std::vector<int> vectorTestSum = {4};

    int sum = sumApples(vectorTestSum);

    ASSERT_EQ(sum, 4);
}

TEST(AppleCheckTest, NegativElementVectorAppleSumTest)
{
    std::vector<int> vectorTestSum = {-2, -6};

    int sum = sumApples(vectorTestSum);

    ASSERT_EQ(sum, -8);
}