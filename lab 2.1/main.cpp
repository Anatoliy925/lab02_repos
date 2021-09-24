// Lab_02.cpp
   // < Шоха Анатолій >
   // Лабораторна робота No 2.
   // Лінійні програми.
   // Варіант 23

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
    double a, z1, z2;
    
    cout << "a = "; cin >>a;
    
    z1 = (sin(2*a)+sin(5*a) - sin(3*a))/(cos(a)+1 - 2*sin(2*a)*sin(2*a));
    z2 = 2*sin(a);
    
    cout << "z1 = " << z1 << endl;
    cout << "z2 = " << z2 << endl;
    
    cin.get();
    
    return 0;
 
    }

