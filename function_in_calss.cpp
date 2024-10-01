#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    int mark;
    Person(string name,int age,int mark)
    {
       this->name=name;
       this->age=age;
       this->mark=mark;
    }
    void fun()
    {
        cout<<name<< " "<< age<<endl;
    }
};
int main()
{
    Person raju("Raju Ahmed",25,90);
    cout<< raju.name << " "<< raju.age<<" "<< raju.mark <<endl;
    raju.fun();

}