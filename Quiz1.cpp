// Quiz1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//pre-existing temps

#include <iostream>
using namespace std;

int main()
{
    float nyc[31]{ 33, 33, 18, 29, 40, 55, 19, 22, 32, 37, 58, 54, 51, 52, 45, 41, 45, 39, 36, 45, 33, 18, 19, 19, 28, 34, 44, 21, 23, 30, 39 };
    float den[31]{ 39, 48, 61, 39, 14, 37, 43, 38, 46, 39, 55, 46, 46, 39, 54, 45, 52, 52, 62, 45, 62, 40, 25, 57, 60, 57, 20, 32, 50, 48, 28 };
    float sumnyc = 0, sumden = 0, denovrnyc = 0;
    int index;
    int overAvgNyc = 0, overAvgDen = 0, avgden = 0, avgnyc=0;
    for (index = 0; index < 31; index++)
        sumnyc = sumnyc + nyc[index];
    for (index = 0; index < 31; index++)
        sumden = sumden + den[index];
    avgden = sumden / 31;
    avgnyc = sumnyc / 31;
    cout << "The average Jan temperature for NYN is: " << avgnyc << endl;
    cout << "The average Jan temperature for DEN is: " << avgden << endl;

    for (index = 0; index < 31; index++)
    {
        if (avgnyc < nyc[index])
            overAvgNyc++;
        if (avgden < den[index])
            overAvgDen++;
    }
    cout << "the number of days temp was above average in NYC is : " << overAvgNyc << endl;
    cout << "the number of days temp was above average in DEN is : " << overAvgDen << endl;
    for (index = 0; index < 31; index++)
    {
        if (nyc[index] < den[index])
            denovrnyc++;
    }
    cout << "the number of days that the temperature in DEN was higher than NYC is : " << denovrnyc << endl;
    return 0;

}
