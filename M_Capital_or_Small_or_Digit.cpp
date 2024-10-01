#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>='0' && x<='9') 
    {
        cout << "IS DIGIT"<<endl;
    }
    else{
        cout << "ALPHA"<<endl;
        if(x>='A' && x<='Z')
        {
            cout<<"IS CAPITAL"<<endl;
        }
        else{
            cout << "IS SMALL"<<endl;
        }
    }
    
    return 0;
}