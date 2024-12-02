#include <iostream>
using namespace std;

int swap_V(int x ,int y){  
    x = x + y;
    y = x - y;
    x = x - y;
 cout<<"After Swap Value : \t a ="<< a <<", b ="<<b<<endl;
}

int swap_A(int * x ,int * y){  
    *x = *x + *y;
    *y = *x -*y;
    *x = *x - *y;

}

int swap_R(int &x ,int  &y){  
    x = x + y;
    y = x - y;
    x = x - y;

}



int main(){  
 int a = 10;
 int b = 5;

cout<<"Before Swap Value :\t a = "<<a<<", b = "<<b<<endl;
swap_V()
cout<<"After Swap Value : \t a ="<< a <<", b ="<<b<<endl;

cout<<"Before Swap Address :\t a = "<<a<<", b = "<<b<<endl;
swap_A()
cout<<"After Swap Address : \t a ="<< a <<", b ="<<b<<endl;

a = 10;
b = 5; 

cout<<"Before Swap Refrence :\t a = "<<a<<", b = "<<b<<endl;
swap_R()
cout<<"After Swap Refrence : \t a ="<< a <<", b ="<<b<<endl;


return 0;
}