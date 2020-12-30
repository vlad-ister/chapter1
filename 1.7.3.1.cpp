#include <iostream>

using namespace std;

int main(void) {
    
float Num1,Num2,Num3,Num4,Num5;

Num1=2.3;
Num2=2.3;
Num3=2.123456;
Num4=2.123456;
Num5=2.123456;

cout.precision(2);
cout << Num1 << endl;

cout << fixed << Num2 << endl;

cout.precision(6);
cout << Num3 << endl;

cout.precision(2);
cout << Num4 << endl;

cout.precision(0);
cout << Num5 << endl;
return 0;
}