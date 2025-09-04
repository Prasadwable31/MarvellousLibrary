////////////////////////////////////////////////////////////////
//                                                            //
//  File Name     : Helper.c                                  //
//  Description   : Use to do the Arithematic Operations      //
//  Author        : Prasad Wable                              //
//  Date          : 27/4/2025                                 //
//                                                            //
////////////////////////////////////////////////////////////////

#include<math.h> 
#include<stdbool.h> 
#include "../include/Marvellous.h"

#define ERR_INVALID -1

///////////////////////////////////////////////////////////////
//                                                           //
//  Function Name : Addition                                 //
//  Description   : Addition of two Integer Numbers          //
//  Input         : Integer, Integer                         //
//  Output        : Integer                                  //
//  Author        : Prasad Wable                             //
//  Date          : 27/4/2025                                //
//                                                           //
///////////////////////////////////////////////////////////////

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 + iNo2;
    return iAns;
}

//////////////////////////////////////////////////////////////
//                                                          //
//  Function Name : Substraction                            //
//  Description   : Substraction of two Integer Numbers     //
//  Input         : Integer, Integer                        //
//  Output        : Integer                                 // 
//  Author        : Prasad Wable                            //
//  Date          : 27/4/2025                               //
//                                                          //
//////////////////////////////////////////////////////////////

int Substraction(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 - iNo2;
    return iAns;
}

////////////////////////////////////////////////////////////////
//                                                            //
//  Function Name : Multiplication                            //
//  Description   : Multiplication of two Integer Numbers     //
//  Input         : Integer, Integer                          //
//  Output        : Integer                                   //
//  Author        : Prasad Wable                              //
//  Date          : 27/4/2025                                 //
//                                                            //
////////////////////////////////////////////////////////////////

int Multiplication(int iNo1, int iNo2)
{
    int iAns = 0;
    iAns = iNo1 * iNo2;
    return iAns;
}

//////////////////////////////////////////////////////////////////
//                                                              //
//  Function Name : Division                                    //
//  Description   : Division of two Integer Numbers             //
//  Input         : Integer, Integer                            //
//  Output        : float                                       //
//  Author        : Prasad Wable                                //
//  Date          : 27/4/2025                                   //
//                                                              //
//////////////////////////////////////////////////////////////////

float Division(int iNo1, int iNo2)
{
    float fAns = 0.0f;

    if(iNo2 == 0)
        return 0.0;                            // Divide By Zero Condition

    fAns = (float)iNo1 / (float)iNo2;
    return fAns;
}

//////////////////////////////////////////////////////////////////
//                                                              //
//  Function Name : Modulo                                      //
//  Description   : Modulus of two Integer Numbers              //
//  Input         : Integer, Integer                            //
//  Output        : Integer                                     //
//  Author        : Prasad Wable                                //
//  Date          : 29/4/2025                                   //
//                                                              //
//////////////////////////////////////////////////////////////////

int Modulo(int iNo1, int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
        return ERR_INVALID;                            // Divide By Zero for modulo

    iAns = iNo1 % iNo2;
    return iAns;
}

//////////////////////////////////////////////////////////////////
//                                                              //
//  Function Name : Power                                       //
//  Description   : Calculate power raised of 2 integer         //
//  Input         : Integer, Integer                            //
//  Output        : Integer                                     //
//  Author        : Prasad Wable                                //
//  Date          : 29/4/2025                                   //
//                                                              //
//////////////////////////////////////////////////////////////////

int Power(int iBase, int iExp)
{
    int iAns = 1;
    int iCnt = 0;

    for(iCnt = 0; iCnt < iExp; iCnt++)
    {
        iAns = iAns * iBase;
    }

    return iAns;
}

//////////////////////////////////////////////////////////////////
//                                                              //
//  Function Name : CalculatePercentage                         //
//  Description   : Calculate the percentage of Total Marks     //
//  Input         : Integer                                     //
//  Output        : Integer                                     //
//  Author        : Prasad Wable                                //
//  Date          : 29/4/2025                                   //
//                                                              //
//////////////////////////////////////////////////////////////////

float CalculatePercentage(int iNo1, int iNo2)                                   
{
    if (iNo1 == 0)
    {
        return 0.0;
    }
    

    float fPercentageValue = 0.0f;
    fPercentageValue = ((float)iNo2 / (float)iNo1) * 100.0f;                       
    return fPercentageValue;
}

//////////////////////////////////////////////////////////////////
//                                                              //
//  Function Name : SumRange                                    //
//  Description   : Calculate Sum between the ranges            //
//  Input         : Integer                                     //
//  Output        : Integer                                     //
//  Author        : Prasad Wable                                //
//  Date          : 29/4/2025                                   //
//                                                              //
//////////////////////////////////////////////////////////////////

int SumRange(int iNo1, int iNo2)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = iNo1; iCnt <= iNo2; iCnt++)
    {
        iSum = iSum + iCnt;                                       
    }
    return iSum;
}

//////////////////////////////////////////////////////////////////
//                                                              //
//  Function Name : CheckDivisible                              //
//  Description   : Check whether the No1 is divisible by No2   //
//  Input         : Integer                                     //
//  Output        : Integer                                     //
//  Author        : Prasad Wable                                //
//  Date          : 29/4/2025                                   //
//                                                              //
//////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo1, int iNo2)
{
    bool bResult  = false;

    if((iNo1 % iNo2 == 0))
    {
        bResult = true;
    }
    else
    {
        bResult = false;
    }

    return bResult;
}

//////////////////////////////////////////////////////////////////
//                                                              //
//  Function Name : Factorial                                   //
//  Description   : Calculate Factorial of the number           //
//  Input         : Integer                                     //
//  Output        : Integer                                     //
//  Author        : Prasad Wable                                //
//  Date          : 29/4/2025                                   //
//                                                              //
//////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    if(iNo < 0)
    {
        return ERR_INVALID;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

//////////////////////////////////////////////////////////////////
//                                                              //
//  Function Name : DisplayFactors                              //
//  Description   : Calculate Factors of the given number       //
//  Input         : Integer                                     //
//  Output        : None                                        //
//  Author        : Prasad Wable                                //
//  Date          : 29/4/2025                                   //
//                                                              //
//////////////////////////////////////////////////////////////////

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;             
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d ",iCnt);
        }
    }
}

//////////////////////////////////////////////////////////////////
//                                                              //
//  Function Name : CheckPerfect                                //
//  Description   : Check whether the Number is Perfect or not  //
//  Input         : Integer                                     //
//  Output        : Integer                                     //
//  Author        : Prasad Wable                                //
//  Date          : 29/4/2025                                   //
//                                                              //
//////////////////////////////////////////////////////////////////

bool CheckPerfect(int iNo)
{
    int iCnt = 0, iSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;           
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return (iSum == iNo);
}

//////////////////////////////////////////////////////////////////
//                                                              //
//  Function Name : CheckPrime                                  //
//  Description   : Check whether the Number is Prime or not    //
//  Input         : Integer                                     //
//  Output        : Integer                                     //
//  Author        : Prasad Wable                                //
//  Date          : 29/4/2025                                   //
//                                                              //
//////////////////////////////////////////////////////////////////

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;

    if(iNo < 0)
    {
        iNo = -iNo;             
    }

    for(iCnt = 2; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }

    return bFlag;
}

//////////////////////////////////////////////////////////////////
//                                                              //
//  Function Name : CountDigits                                 //
//  Description   : Count the digits in the given number        //
//  Input         : Integer                                     //
//  Output        : Integer                                     //
//  Author        : Prasad Wable                                //
//  Date          : 29/4/2025                                   //
//                                                              //
//////////////////////////////////////////////////////////////////

int CountDigits(int iNo)
{
    if(iNo == 0)
    {
        return 1;
    }

    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;             
    }

    while(iNo != 0)
    {
        iNo = iNo / 10;
        
        iCnt++;
    }

    return iCnt;
}

//////////////////////////////////////////////////////////////////
//                                                              //
//  Function Name : SumDigits                                   //
//  Description   : Calculate the Sum of the digits             //
//  Input         : Integer                                     //
//  Output        : Integer                                     //
//  Author        : Prasad Wable                                //
//  Date          : 29/4/2025                                   //
//                                                              //
//////////////////////////////////////////////////////////////////

int SumDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10; 
    }

    return iSum;
}

//////////////////////////////////////////////////////////////////
//                                                              //
//  Function Name : Reverse                                     //
//  Description   : Reverse the given number                    //
//  Input         : Integer                                     //
//  Output        : Integer                                     //
//  Author        : Prasad Wable                                //
//  Date          : 29/4/2025                                   //
//                                                              //
//////////////////////////////////////////////////////////////////

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
    }

    return iRev;
}