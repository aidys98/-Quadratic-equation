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
if (a!=0 && b!=0 && c==0) { 
x1=0; 
x2=-(b/a); 
cout << "x1=" << x1 << endl; 
cout << "x2=" << x2 << endl; 
} 
if (a!=0 && b==0 && c!=0) { 
x1=sqrt(c/a); 
x2=-sqrt(c/a); 
cout << "x1=" << x1 << endl; 
cout << "x2=" << x2 << endl; 
}
if (D<0) cout << "Net resheniy" << endl; {
}
system("pause"); 
return 0; }
