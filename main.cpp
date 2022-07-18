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
    set_marks(int a){
        english_marks = a;
    };
    set_password(string s){
        password = s;
    }
    int get_maks(){
        return english_marks;
    }

};


int main()
{
    int N;
    cin>>N;

    Student students[N];

    for(int i=0;i<N;i++){
        int mark;
        string pass;
        cin>>students[i].name>>students[i].section>>students[i].roll>>mark>>pass;
        students[i].set_marks(mark);
        students[i].set_password(pass);
    }

    return 0;
}
