#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int Id;
    int bang;
    int eng;
    int math;

    int total_marks;
    double avrg;
    string gpa;
    int roll;

};

bool cmp (Student a,Student b)
{
    if(a.total_marks> b.total_marks)
        return true;
    else if(a.total_marks < a.total_marks)
       return false;

       else 
       {
        if(a.Id<b.Id)
        return true;
        else return false;
       }
}
int main()
{
    int n;
    cin>>n;
    Student st[n];
    for (int i=0;i<n;i++)
    {
        cin>>st[i].Id>>st[i].name>>st[i].bang>>st[i].eng>>st[i].math;
        st[i].total_marks= st[i].bang+st[i].eng+st[i].math;
        st[i].avrg=(double)st[i].total_marks/3;
        if(st[i].avrg>=80)
        {
            st[i].gpa="A+";
        }
        else if(st[i].avrg>=70)
        {
            st[i].gpa="A";
        }
        else if(st[i].avrg>=60)
        {
            st[i].gpa="A-";
        }
        else if(st[i].avrg>=50)
        {
            st[i].gpa="B";
        }
        else if(st[i].avrg>=40)
        {
            st[i].gpa="B-";
        }
        else
        {
            st[i].gpa="F";
        }
    }

    sort(st,st+n,cmp);
    cout<<"Roll ID Name Bang Eng Math Total Avrg GPA"<<endl;
    cout<<"================================================="<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<"\t"<<st[i].Id<<"\t"<<st[i].name<<"\t"<<st[i].bang<<"\t"<<st[i].eng<<"\t"<<st[i].math<<"\t"<<st[i].total_marks<<"\t"<<fixed << setprecision(2)<<st[i].avrg<<"\t"<<st[i].gpa<<endl;
    }

}