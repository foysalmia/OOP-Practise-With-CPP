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

    return 0;
}
