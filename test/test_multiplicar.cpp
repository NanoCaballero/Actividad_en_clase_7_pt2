#include <gtest/gtest.h>
#include "multiplicar.h"

TEST(MultTest, HandlesPositiveInput)
{

EXPECT_EQ(mult(5,2), 10);
}
