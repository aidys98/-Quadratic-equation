#include <iostream> 
#include <stdlib.h> 
#include <stdio.h> 
#include <math.h> 
using namespace std; 

int main() 
{ int a,b,c; 
float D,x1,x2; 
cout << "Vvedite koeficienty uravneniya " << endl; 
cin >> a; 
cin >> b; 
cin >> c; 
if (a!=0 && b!=0 && c!=0) { 
D=b*b-4*a*c; 
if (D>0) { 
x1=-(b+sqrt(D))/(2*a); 
x2=-(b-sqrt(D))/(2*a); 
cout << "D="<< D << endl; 
cout << "x1=" << x1 << endl; 
cout << "x2=" << x2 << endl; 
} 
if (D == 0) { 
x1=-b/(2*a); 
cout << "D=0" << endl; 
cout << "x=" << x1 << endl; 
} 
if (D<0) cout << "Net resheniy" << endl; 
}
system("pause"); 
return 0; }
