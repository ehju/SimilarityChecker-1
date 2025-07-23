#include "gmock/gmock.h"
#include "similarity.cpp"

TEST(LengthTest, SameSizeTest) {
	Similarity s;
	int actual = s.getLengthScore("ASD", "DSA");
	EXPECT_EQ(60, actual);
}

int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}