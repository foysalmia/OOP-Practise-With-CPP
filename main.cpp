#include<bits/stdc++.h>

using namespace std;

class Student
{
private:
    string password;
protected:
    int english_marks;
public:
    string name;
    char section;
    int roll;
    set_marks(int a)
    {
        english_marks = a;
    };
    set_password(string s)
    {
        password = s;
    };
    int get_maks()
    {
        return english_marks;
    };
    update_marks(string pass,int mark)
    {
        if(pass == password)
        {
            english_marks = mark;
        }
        else
        {
            cout<<"Sorry, Password doesn't matched !!"<<endl;
        }
    };
    get_student(int r,string pass,int mark)
    {
        if(r==roll)
        {
            update_marks(pass,mark);
        }
        else
        {
            cout<<"Not found !!"<<endl;
        }
    }


};


int main()
{
    int N;
    cin>>N;

    Student students[N];

    cout<<"Input Name Section Roll Mark Password"<<endl;
    for(int i=0; i<N; i++)
    {
        int mark;
        string pass;
        cin>>students[i].name>>students[i].section>>students[i].roll>>mark>>pass;
        students[i].set_marks(mark);
        students[i].set_password(pass);
    }

    cout<<"Update Students Data with {Std No. Roll mark Password} "<<endl;
    int n,r,mark;
    string p;
    cin>>n>>r>>mark>>p;
    students[n-1].get_student(r,p,mark);



    cout<<"*********************************************"<<endl;
    for(int i=0;i<N;i++){
        cout<<students[i].name<<" "<<students[i].section<<" "<<students[i].roll<<" "<<students[i].get_maks()<<endl;
    }

    return 0;
}
