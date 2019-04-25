//
// Created by Kata on 2019. 04. 25..
//
#include <gtest/gtest.h>
#include "apples.h"

TEST(applePrintCheck, applePrintTest){
ASSERT_EQ(getApples(), "appl");
}