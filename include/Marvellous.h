//////////////////////////////////////////////////////////////
//                                                          //
//  File Name     : Marvellous.h                            //
//  Description   : Written each function Prototype here    //
//  Author        : Prasad Wable                            //
//  Date          : 27/4/2025                               //
//                                                          //
//////////////////////////////////////////////////////////////


#ifndef MARVELLOUS_H
#define MARVELLOUS_H

#include <stdbool.h>

// Function prototype

// Basic operations
int Addition(int ,int);
int Substraction(int ,int);
int Multiplication(int ,int);
float Division(int ,int);
int Modulo(int, int);

// Power & percentage
int Power(int, int);
float CalculatePercentage(int, int);

// Ranges and divisibility
int SumRange(int, int);
bool CheckDivisible(int, int);

// Factorial & factors
int Factorial(int);
void DisplayFactors(int);

// Number checks
bool CheckPerfect(int);
bool CheckPrime(int);

// Digit operations
int CountDigits(int);
int SumDigits(int);
int Reverse(int);

#endif