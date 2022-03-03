#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include <MockHelperInterface.h>

#include "StringOperator.h"


using namespace ::testing;

class TestStringOperator: public Test
{
public:

StrictMock<MockHelperInterface> mockHelperInterface;
StringOperator testObject;
InSequence sequence;

TestStringOperator():
mockHelperInterface(),
testObject(mockHelperInterface){}

void SetUp() override
{

}

void TearDown() override
{

}
};

TEST_F(TestStringOperator, basicTest)
{
    std::string s = "initialString";
    EXPECT_CALL(mockHelperInterface, readTheString(s));
    EXPECT_CALL(mockHelperInterface, readTheCharArray(StrEq(s)));
    EXPECT_CALL(mockHelperInterface, modifyTheString(s)).WillOnce(SetArgReferee<0>("modifiedString"));

    testObject.doTheFlow(s);

    EXPECT_EQ("modifiedString", s);
}
