#ifndef QUAD_TEST_H
#define QUAD_TEST_H

#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

extern "C" {
#include "quad.h"
}

TEST(quadTest, pair) {
    ASSERT_EQ(quad(2, -6, 1), 2);
    ASSERT_EQ(quad(3, 1, -2), 2);
    ASSERT_EQ(quad(1, 2, -5), 2);
}

TEST(quadTest, single) {
    ASSERT_EQ(quad(1, 2, 1), 1);
    ASSERT_EQ(quad(1, 6, 9), 1);
    ASSERT_EQ(quad(-1, 3, -2.25), 1);
}

TEST(quadTest, none) {
    ASSERT_EQ(quad(3, 2, 1), 0);
    ASSERT_EQ(quad(13, 3, 5), 0);
    ASSERT_EQ(quad(1, 2, 7), 0);
}

#endif // QUAD_TEST_H
