#include "deposit.h"
#include "ctest.h"
 
 CTEST(CashCalculationTest , PenaltyMinimumAmountAndTime)
 {
     const int result = Cash(0,10, 0);
     const int expected = 9.000000;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(CashCalculationTest , PenaltyMaximumAmount)
 {
     const int result = Cash(0,101, 0);
     const int expected = 90.900002;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(CashCalculationTest , GoodAmount200AndTime150)
 {
     const int result = Cash(0,200, 150);
     const int expected = 216.000000;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(CashCalculationTest , GoodAmount300AndTime90)
 {
     const int result = Cash(0,300, 90);
     const int expected = 309.000000;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(CashCalculationTest , GoodAmount100AndTime20)
 {
     const int result = Cash(0,100, 20);
     const int expected = 90.000000;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(CashCalculationTest , GoodAmount210AndTime300)
 {
     const int result = Cash(0,210, 300);
     const int expected = 241.500000;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(CashCalculationTest , GoodAmount60AndTime60)
 {
     const int result = Cash(0,60, 60);
     const int expected = 61.200001;
     ASSERT_EQUAL(expected, result);
 }
/*CTEST(CashCalculationTest_Faild, Faildtest)
{
  const int result = Cash(0,137,317);
  const int expected =0;
  ASSERT_EQUAL(expected, result);
}*/
