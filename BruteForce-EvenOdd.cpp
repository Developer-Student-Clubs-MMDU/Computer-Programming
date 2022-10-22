//if weight divided by 2 is an even number print YES
#include <iostream>
 
using namespace std;
 
int main()
{
    int weight;
 
    cin>>weight;
    if (weight!=2){
            if (weight%2 == 0) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"No"<<endl;
    }
 
    }
    else {
        cout<<"No"<<endl;
    }
 
    return 0;
}