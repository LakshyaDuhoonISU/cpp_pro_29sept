#include<iostream>
using namespace std;
class Student
{
    private:
        int rollno;
        string name;
        int Class;
        char division;
        float marks;
    
    public:
        void getStudentData()
        {
            cout<<"Enter roll no: ";
            cin>>rollno;
            cin.ignore();
            cout<<"Enter name: ";
            getline(cin,name);
            cout<<"Enter year: ";
            cin>>Class;
            cout<<"Enter division: ";
            cin>>division;
            cout<<"Enter total marks: ";
            cin>>marks;
        }
        void DisplayStudentData()
        {
            cout<<endl<<"Roll No: "<<rollno<<endl;
            cout<<"Student Name: "<<name<<endl;
            cout<<"Student Year:  "<<Class<<"Year"<<endl;
            cout<<"Student Division: "<<division<<endl;
            cout<<"Student Total Makrs: "<<marks<<endl;
        }
};

int main()
{
    Student s1,s2;
    s1.getStudentData();
    s1.DisplayStudentData();
    s2.getStudentData();
    s2.DisplayStudentData();
    return 0;
}
