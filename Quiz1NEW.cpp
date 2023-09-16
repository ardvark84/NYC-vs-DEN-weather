// Quiz1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Ver.2 with user input temperatures. 

#include <iostream>
using namespace std;

int main()
{
    float nyc[31]{};
    float den[31]{};
    float sumnyc = 0.0, sumden = 0.0, denovrnyc = 0.0;
    int index;
    float overAvgNyc = 0.0, overAvgDen = 0.0, avgden = 0.0, avgnyc=0.0;

    cout << "enter the temperature for every day in JAN in NYC: " << endl;
    for (index = 0; index < 31; index++)
    {
        cout << endl << "Day " << index + 1 << ": ";
        cin >> nyc[index];
    }
    cout << "Thank you for entering NYC temperatures" << endl;
    cout << "enter the temperature for every day in JAN in DEC: " << endl;
    for (index = 0; index < 31; index++)
    {
        cout << endl << "Day " << index + 1 << ": ";
        cin >> den[index];
    }
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