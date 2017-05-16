#include "deposit.h"
#include "ctest.h"

CTEST(InputValidation, BordersCheckPassedLeft)
{
    const int result = Check(0, 0);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputValidation, BordersCheckPassedRight)
{
    const int result = Check(20, 100);
    const int expected = 0;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputValidation, durationLessZeroFail)
{
    const int result = Check(-5, 0);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputValidation, amountLessZeroFail)
{
    const int result = Check(5, -100);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputValidation, durationAndAmountRangeTestPass)
{
    const int result = Check(30, 1000);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
