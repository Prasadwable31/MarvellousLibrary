//////////////////////////////////////////////////////////////////////////////
//                                                                          //
//  File Name     : Main.c                                                  //
//  Description   : Entry point function whichs gets data & display result  //
//  Author        : Prasad Wable                                            //
//  Date          : 27/4/2025                                               //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int main()
{
    // Variables that store the data
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;
    float fRet = 0.0f;
    bool bRet = false;

    while (true)
    {
        printf("\n===== Calculator Menu =====\n");
        printf(" 1. Addition\n");
        printf(" 2. Subtraction\n");
        printf(" 3. Multiplication\n");
        printf(" 4. Division\n");
        printf(" 5. Modulus\n");
        printf(" 6. Power\n");
        printf(" 7. Percentage\n");
        printf(" 8. Sum Range\n");
        printf(" 9. Check Divisibility\n");
        printf("10. Factorial\n");
        printf("11. Display Factors\n");
        printf("12. Check Perfect Number\n");
        printf("13. Check Prime Number\n");
        printf("14. Count Digits\n");
        printf("15. Sum of Digits\n");
        printf("16. Reverse Number\n");
        printf("17. Exit\n");
        printf("============================\n");

        int iChoice = 0;
        int iNum = 0;

        printf("Select the Option form Menu : ");
        scanf("%d", &iChoice);

        if(iChoice >= 1 && iChoice <= 9)
        {
            // user input for value 1
            printf("\nEnter the first Value : ");
            scanf("%d",&iValue1);

            // user input for value 2
            printf("\nEnter the second Value : ");
            scanf("%d",&iValue2);
        }

        switch(iChoice)
        {
            case 1:
                iRet = Addition(iValue1, iValue2);
                printf("\nAddition is : %d\n",iRet);
                break;
            
            case 2:
                iRet = Substraction(iValue1, iValue2);
                printf("Substraction is : %d\n",iRet);
                break;
            
            case 3:
                iRet = Multiplication(iValue1, iValue2);
                printf("Multiplication is : %d\n",iRet);
                break;

            case 4:
                fRet = Division(iValue1, iValue2);
                printf("Division is : %f\n",fRet);
                break;

            case 5:
                iRet = Modulo(iValue1, iValue2);
                printf("Modulus is : %d\n",iRet);
                break;

            case 6:
                iRet = Power(iValue1, iValue2);
                printf("Power is : %d\n",iRet);
                break;
            
            case 7:
                fRet = CalculatePercentage(iValue1, iValue2);
                printf("Percentage is : %f\n", fRet);
                break;

            case 8:
                iRet = SumRange(iValue1, iValue2);
                printf("Range Summation is : %d\n", iRet);
                break;

            case 9:
                bRet = CheckDivisible(iValue1, iValue2);
                if(bRet == true)
                    printf("%d Number is Divisible by %d",iValue1, iValue2);
                else
                    printf("%d Number is not Divisible by %d",iValue1, iValue2);
                break;

            case 10:
                printf("\nEnter the Value : ");
                scanf("%d",&iValue1);
                
                iRet = Factorial(iValue1);
                if(iRet == -1)
                    printf("Invalid Input");
                else
                    printf("Factorial is : %d",iRet);
                break;

            case 11:
                printf("\nEnter the Value : ");
                scanf("%d",&iValue1);
                
                DisplayFactors(iValue1);
                break;

            case 12:
                printf("\nEnter the Value : ");
                scanf("%d",&iValue1);
                
                bRet = CheckPerfect(iValue1);

                if(bRet == true)
                    printf("%d is perfect number",iValue1);
                else
                    printf("%d is non a perfect number",iValue1);
                break;

            case 13:
                printf("\nEnter the Value : ");
                scanf("%d",&iValue1);
                
                bRet = CheckPrime(iValue1);

                if(bRet == true)
                    printf("%d is prime number",iValue1);
                else
                    printf("%d is non a prime number",iValue1);
                break;

            case 14:
                printf("\nEnter the Value : ");
                scanf("%d",&iValue1);
                
                iRet = CountDigits(iValue1);
                printf("Number of digits are : %d",iRet);
                break;

            case 15:
                printf("\nEnter the Value : ");
                scanf("%d",&iValue1);
                
                iRet = SumDigits(iValue1);
                printf("Summation of digits are : %d",iRet);
                break;

            case 16:
                printf("\nEnter the Value : ");
                scanf("%d",&iValue1);
                
                iRet = Reverse(iValue1);
                printf("Reverse number is : %d",iRet);
                break;

            case 17:
                printf("Thank you for using the calculator!\n");
                return 0;                                                                   // Exit from main()

            default:
                printf("Invalid choice. Please try again.\n");

        }
    }
        
        return 0;
}