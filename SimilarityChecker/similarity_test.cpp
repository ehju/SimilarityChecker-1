#include "gmock/gmock.h"
#include "similarity.cpp"


TEST(LengthTest, SameSizeTest) {
	Similarity s;
	int actual = s.getLengthScore("ASD", "DSA");
	EXPECT_EQ(60, actual);
}
TEST(LengthTest, OverTwiceSizeTest1) {
	Similarity s;
	int actual = s.getLengthScore("A", "BB");
	EXPECT_EQ(0, actual);
}
TEST(LengthTest, OverTwiceSizeTest2) {
	Similarity s;
	int actual = s.getLengthScore("BB","A");
	EXPECT_EQ(0, actual);
}
TEST(LengthText, PartialPointTest) {
	Similarity s;
	string input1 = "AAABB";
	string input2 = "BAA";
	int actual = s.getLengthScore(input1, input2);
	EXPECT_EQ(20, actual);
}
TEST(LengthText, PartialPointTest2) {
	Similarity s;
	string input1 = "AA";
	string input2 = "AAE";
	int actual = s.getLengthScore(input1, input2);
	EXPECT_EQ(30, actual);
}


int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}