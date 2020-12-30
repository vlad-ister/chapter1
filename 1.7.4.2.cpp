#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
float x,y;

cout<<"Enter the first number: ";
cin>>x;
cout<<"Enter the second number: ";
cin>>y;

if (1/y==1/x){
    cout<<"The numbers: "<<x<<" and "<<y<<" are equal (by 0.000001 epsilon)";
}
else{
    cout<<"The numbers: "<<x<<" and "<<y<<" are not equal (by 0.000001 epsilon)";
    
}
}