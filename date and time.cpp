//Mahdi khademi
//predator.m.khademi
//PTuFR
#include<bits/stdc++.h>
#include<sstream>
#include<conio.h>
#include<cmath>
#include<string>
#include<stdio.h>
#include<ctime>
#include<windows.h>
using namespace std;
int main(){
	SYSTEMTIME TimeData;
    GetLocalTime(&TimeData);
    cout << "Year : "<<  TimeData.wYear<<endl
    << "Month : " << TimeData.wMonth<<endl
    << "Week : " << TimeData.wDayOfWeek<<endl
    << "Day : " << TimeData.wDay<<endl
    << "Hour : " << TimeData.wHour<<endl
    << "Minute : " << TimeData.wMinute<<endl
    << "Second : " << TimeData.wSecond<<endl
    << "Milliseconds : " << TimeData.wMilliseconds<<endl;
	getch();
}
