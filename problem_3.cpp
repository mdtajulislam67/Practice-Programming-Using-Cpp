#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    string w;
    cin>>w;
    stringstream ss(s);
    string word;
    int cnt=0;
    while(ss>>word)
    {
        if(word == w)
        {
            cnt++;
        }
    }
    
    cout<<cnt<<endl;

}