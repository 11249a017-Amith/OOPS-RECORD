#include<iostream>
using namespace std;
class student
{
public:
string name;
int roll no;
float marks;
void display()
{
    cout<<"name:"<<name<<",roll no:"<<roll<<",marks:"<<marks<<end; 
}
};
int main() {

    student s1,s2,s3;
    s1.name = "Bruce";
    s1.rollno = 110;
    s1.marks = 79;
    s2.name = "vamsi";
    s2.rollno = 100;
    s2.marks = 99;
    s1.display;
    s2.display;
    return 0;
}