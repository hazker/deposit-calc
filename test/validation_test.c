#include "deposit.h"
#include "ctest.h"

CTEST(InputDataCheck, CheckTimeLeftBorder)
{
    const int result = Check(0, 0);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputDataCheck, CheckTimeRightBorder)
{
    const int result = Check(0, 365);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputDataCheck, CheckAmountLessThanZero)
{
    const int result = Check(-5, 0);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputDataCheck, CheckTimeLessThanZero)
{
    const int result = Check(5, -100);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}

CTEST(InputDataCheck, CheckNormalAmountAndTime)
{
    const int result = Check(30, 1000);
    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
