///////////////////////////////////////////////////////////////////////////
//                                                                       //
//  File Name     : Testing_Calculator.c                                //
//  Description   : Test our Applications with different test cases      //
//  Author        : Prasad Wable                                         //
//  Date          : 27/4/2025                                            //
//                                                                       //
///////////////////////////////////////////////////////////////////////////


#include "unity.h"
#include "../include/Marvellous.h"


// Dummy Setup and Teardown functions (must be there!)
void setUp(void)
{ }

void tearDown(void)
{ }

// ========================== Basic Operations ==========================

void Test_Addition(void)                                // Testing Done for Addition Function of Helper.c
{
    TEST_ASSERT_EQUAL(7, Addition(3, 4));
    TEST_ASSERT_EQUAL(0, Addition(-2, 2));
}

void Test_Subtraction(void)                             // Testing Done for Substraction Function of Helper.c
{
    TEST_ASSERT_EQUAL(1, Substraction(5, 4));
    TEST_ASSERT_EQUAL(-1, Substraction(4, 5));
}

void Test_Multiplication(void)                          // Testing Done for Multiplication Function of Helper.c
{
    TEST_ASSERT_EQUAL(20, Multiplication(4, 5));
    TEST_ASSERT_EQUAL(0, Multiplication(0, 5));
}

void Test_Division(void)                                // Testing Done for Division Function of Helper.c
{
    TEST_ASSERT_EQUAL(2.0, Division(10, 5));
    TEST_ASSERT_EQUAL(0.0, Division(14, 0));
    TEST_ASSERT_EQUAL(1.5, Division(3, 2));
}

void Test_Modulo(void)
{
    TEST_ASSERT_EQUAL(1, Modulo(10, 3));
    TEST_ASSERT_EQUAL(0, Modulo(15, 5));
    TEST_ASSERT_EQUAL(-1, Modulo(-10, 3));   // Behavior depends on C standard
}

// ========================== Power & Percentage ==========================
void Test_Power(void)
{
    TEST_ASSERT_EQUAL(8, Power(2, 3));
    TEST_ASSERT_EQUAL(1, Power(5, 0));
    TEST_ASSERT_EQUAL(0, Power(0, 5));
}

void Test_Percentage(void)
{
    TEST_ASSERT_EQUAL_FLOAT(0.0, CalculatePercentage(0, 100));
    TEST_ASSERT_EQUAL_FLOAT(0.0, CalculatePercentage(50, 0)); // Divide by zero
}

// ========================== Ranges & Divisibility ==========================
void Test_SumRange(void)
{
    TEST_ASSERT_EQUAL(55, SumRange(1, 10));    // 1+2+...+10
    TEST_ASSERT_EQUAL(0, SumRange(5, 4));      // invalid range
}

void Test_CheckDivisible(void)
{
    TEST_ASSERT_TRUE(CheckDivisible(10, 2));
    TEST_ASSERT_FALSE(CheckDivisible(10, 3));
}

// ========================== Factorial & Factors ==========================
void Test_Factorial(void)
{
    TEST_ASSERT_EQUAL(120, Factorial(5));
    TEST_ASSERT_EQUAL(1, Factorial(0));
    TEST_ASSERT_EQUAL(1, Factorial(1));
}

void Test_DisplayFactors(void)
{
    // Just call, no assert (prints output)
    DisplayFactors(6);  // Expected output: 1,2,3
}

// ========================== Number Checks ==========================
void Test_CheckPerfect(void)
{
    TEST_ASSERT_TRUE(CheckPerfect(28));  // Perfect number
    TEST_ASSERT_FALSE(CheckPerfect(12));
}

void Test_CheckPrime(void)
{
    TEST_ASSERT_TRUE(CheckPrime(7));
    TEST_ASSERT_FALSE(CheckPrime(10));
}

// ========================== Digit Operations ==========================
void Test_CountDigits(void)
{
    TEST_ASSERT_EQUAL(3, CountDigits(123));
    TEST_ASSERT_EQUAL(1, CountDigits(0));
}

void Test_SumDigits(void)
{
    TEST_ASSERT_EQUAL(6, SumDigits(123));
    TEST_ASSERT_EQUAL(15, SumDigits(555));
}

void Test_Reverse(void)
{
    TEST_ASSERT_EQUAL(321, Reverse(123));
    TEST_ASSERT_EQUAL(0, Reverse(0));
}

// ========================== MAIN ==========================
int main(void)
{
    UNITY_BEGIN();

    // Basic operations
    RUN_TEST(Test_Addition);
    RUN_TEST(Test_Subtraction);
    RUN_TEST(Test_Multiplication);
    RUN_TEST(Test_Division);
    RUN_TEST(Test_Modulo);

    // Power & percentage
    RUN_TEST(Test_Power);
    RUN_TEST(Test_Percentage);

    // Ranges & divisibility
    RUN_TEST(Test_SumRange);
    RUN_TEST(Test_CheckDivisible);

    // Factorial & factors
    RUN_TEST(Test_Factorial);
    RUN_TEST(Test_DisplayFactors);

    // Number checks
    RUN_TEST(Test_CheckPerfect);
    RUN_TEST(Test_CheckPrime);

    // Digit operations
    RUN_TEST(Test_CountDigits);
    RUN_TEST(Test_SumDigits);
    RUN_TEST(Test_Reverse);

    return UNITY_END();
}