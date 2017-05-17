#include "deposit.h"
#include "ctest.h"
 
 CTEST(PenaltyTest, penaltyAppliedTenPercentOK)
 {
     const int result = Cash(0,20, 10);
     const int expected = 18.000000;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(LessBlockTests, goodDataPass102)
 {
     const int result = Cash(0,60, 100);
     const int expected = 61.200001;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(LessBlockTests, goodDataPass106)
 {
     const int result = Cash(0,200, 150);
     const int expected = 216.000000;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(LessBlockTests, goodDataPass112)
 {
     const int result = Cash(0,300, 90);
     const int expected = 309.000000;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(MoreBlockTests, goodDataPass103)
 {
     const int result = Cash(0,100, 20);
     const int expected = 90.000000;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(MoreBlockTests, goodDataPass108)
 {
     const int result = Cash(0,210, 300);
     const int expected = 241.500000;
     ASSERT_EQUAL(expected, result);
 }
 
 CTEST(MoreBlockTests, goodDataPass115)
 {
     const int result = Cash(0,60, 60);
     const int expected = 61.200001;
     ASSERT_EQUAL(expected, result);
 }
/*CTEST(Test_Faild, Failtest01)
{
  const int result = Cash(0,137,317);
  const int expected =0;
  ASSERT_EQUAL(expected, result);
}*/
