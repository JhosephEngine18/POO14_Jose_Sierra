/*
Universidad Amerike
Author: José Sierra
Pratice#:14
Date: 18/03/25
Description: This tells you what is your average about 7 numbers
*/

#include <iostream>
#include <vector>
using namespace std;

int Numbers[7];
void list(int numbers[], int size)
{
    cin >> Numbers[size];
    numbers[size];
}

float SumNumbers(int SumNum[], int size, float dividedby )
{
    int counter = 0;
    int R;
    for (int i = 0; i < size; i++)
    {  
        R = R + SumNum[i];
    }
    R = R / dividedby;
    return R;
}

int main()
{   
    
    cout << "Type 7 numbers" <<endl;
    for (int i = 0; i < 7; i++)
    {
        list(Numbers, i);
    }

    cout << "Your average is: " << SumNumbers(Numbers, 7, 7) <<endl;

    return 0;
    
}