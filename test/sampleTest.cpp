#include "gtest/gtest.h"

class sampleTest : public ::testing::Test {
protected:
	void SetUp() override {

	}

	void TearDown() override {

	}

};

TEST_F(sampleTest, TestZeroInput) {
	EXPECT_FALSE( false );
}
