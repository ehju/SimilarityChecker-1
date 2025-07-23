#include "gmock/gmock.h"
#include "similarity.cpp"

using namespace testing;

class LengthTestFixture : public Test{
public:
	Similarity s;
	void validateLengthTest(int expected, const string& input1, const string& input2) {
		EXPECT_EQ(expected, s.getLengthScore(input1, input2));
	}
};


TEST_F(LengthTestFixture, SameSizeTest) {
	validateLengthTest(60, "ASD", "DSA");
}
TEST_F(LengthTestFixture, OverTwiceSizeTest1) {
	validateLengthTest(0, "A", "BB");
}
TEST_F(LengthTestFixture, OverTwiceSizeTest2) {
	validateLengthTest(0, "BB", "A");
}
TEST_F(LengthTestFixture, PartialPointTest) {
	validateLengthTest(20, "AAABB", "BAA");
}
TEST_F(LengthTestFixture, PartialPointTest2) {
	validateLengthTest(30, "AA", "AAE");
}


int main() {
	::testing::InitGoogleMock();
	return RUN_ALL_TESTS();
}