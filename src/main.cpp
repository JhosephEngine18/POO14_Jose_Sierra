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

float Sum(int SumNum[], float dividedby, int R)
{
    int counter = 0;
    for (int i = 0; i < 7; i++)
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

    cout << "Your average is: " << Sum(Numbers, 7, 0) <<endl;

    return 0;
    
}