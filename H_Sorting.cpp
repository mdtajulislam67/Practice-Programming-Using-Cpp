#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
    {
        cin >>a[i];
    }
    int min=0;
    for (int i=0;i<n;i++)
    {
        for(int j=i+1;i<n;i++)
        {
            if(a[i]>a[j])
            swap(a[j],a[i]);
        }
    }
    for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}