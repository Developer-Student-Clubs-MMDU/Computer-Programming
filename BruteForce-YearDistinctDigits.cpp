// given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.
#include <iostream>
 
using namespace std;
 
int main()
{
    int year;
    int a,b,c,d;
 
    cin>>year;
    while(1) {
 
        year+=1;
        a=year/1000;
        b=year/100%10;
        c=year/10%10;
        d=year%10;
 
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
            break;
 
    }
    cout<<year<<endl;
 
    return 0;
}