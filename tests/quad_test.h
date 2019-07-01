#ifndef QUAD_TEST_H
#define QUAD_TEST_H

#include <gtest/gtest.h>

extern "C" {
#include "quad.h"
}

TEST(quadTest, num0) {
    ASSERT_EQ(quad(1, 4, 4).flag, 2);
    ASSERT_NEAR(quad(1, 4, 4).x1, -2.00, 0.001);
    ASSERT_NEAR(quad(1, 4, 4).x2, -2.00, 0.001);
}

TEST(quadTest, num1) {
    ASSERT_EQ(quad(1, 1, 4).flag, 0);
}

TEST(quadTest, num2) {
    ASSERT_EQ(quad(0, 0, 2).flag, 0);
}

TEST(quadTest, num3) {
    ASSERT_EQ(quad(0, 2, 2).flag, 1);
    ASSERT_NEAR(quad(0, 2, 2).x1, -1.00, 0.001);
}

TEST(quadTest, num4) {
    ASSERT_EQ(quad(0, 0, 1).flag, 0);
}

#endif // QUAD_TEST_H
