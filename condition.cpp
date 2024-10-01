#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    
    int x;
    cin>>x;
    // if(x%2==0) cout<<"Even"<<endl;
    // else cout<<"Odd"<<endl;

    // ternary Operator
    (x%2==0)? cout<<"Even"<<endl : cout<<"Odd"<<endl;
    return 0;
}