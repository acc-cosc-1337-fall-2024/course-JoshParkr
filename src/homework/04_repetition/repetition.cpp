//add include statements
#include "repetition.h"
//add function(s) code here

int factorial(int num)
{
    int sum;
    if(num > 0){
        sum = 1;
    }
    else{
        sum = 0;
    }
    
    while(num > 0)
    {
        sum = num * sum;
        num--;
    }
    return sum;
}

int gcd(int num1, int num2)
{
    while(num1 != num2)
    {
        if(num1 < num2)
        {
            int temp_num = num1;
            num1 = num2;
            num2 = temp_num;
        }
        if(num1 > num2)
        {
            num1 = num1 - num2;
        }
    }
    return num1;
}