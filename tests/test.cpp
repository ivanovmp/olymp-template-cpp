#include "template.h"
#include <gtest/gtest.h>

TEST(factorizator_test, primality_test) {
	ASSERT_TRUE(is_prime(1));
	ASSERT_TRUE(is_prime(2));
	ASSERT_TRUE(is_prime(3));
	ASSERT_FALSE(is_prime(4));
	ASSERT_TRUE(is_prime(5));
	ASSERT_FALSE(is_prime(6));
	ASSERT_TRUE(is_prime(7));
	ASSERT_FALSE(is_prime(8));
	ASSERT_FALSE(is_prime(9));
	ASSERT_FALSE(is_prime(10));
	ASSERT_TRUE(is_prime(11));
	ASSERT_FALSE(is_prime(12));
	ASSERT_TRUE(is_prime(13));
	ASSERT_FALSE(is_prime(14));
	ASSERT_FALSE(is_prime(15));
	ASSERT_FALSE(is_prime(16));
	ASSERT_TRUE(is_prime(17));
	ASSERT_FALSE(is_prime(18));
	ASSERT_TRUE(is_prime(19));
	ASSERT_FALSE(is_prime(20));
	ASSERT_FALSE(is_prime(21));
	ASSERT_FALSE(is_prime(22));
	ASSERT_TRUE(is_prime(23));
	ASSERT_FALSE(is_prime(24));
	ASSERT_FALSE(is_prime(25));
	ASSERT_FALSE(is_prime(26));
	ASSERT_FALSE(is_prime(27));
	ASSERT_FALSE(is_prime(28));
	ASSERT_TRUE(is_prime(29));
	ASSERT_FALSE(is_prime(30));
	ASSERT_TRUE(is_prime(31));
	ASSERT_FALSE(is_prime(32));
}

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

