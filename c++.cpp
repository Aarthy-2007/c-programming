/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Greatest among three numbers"<<endl;
    cout<<"*****************************"<<endl;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    cout<<"Enter c:";
    cin>>c;
    
    if(a>=b && a>=c){
        cout<<"Largest number is:"<<a;
    }
    else if(b>=a && b>=c){
        cout<<"Largest number is:"<<b;
    }
    else{
        cout<<"Largest number is:"<<c;
    }
    
    return 0;
}