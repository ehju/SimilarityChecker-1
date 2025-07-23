#include "gmock/gmock.h"
#include "similarity.cpp"

TEST(SimilarityTest, TryTest) {
	EXPECT_EQ(1, 1);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}