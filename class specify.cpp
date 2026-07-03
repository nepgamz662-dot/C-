#include <iostream>
using namespace std;
class student
{
    private:
    int roll_no;
    char name[50];
    int age;
    public:
    void get_data()
    {
        cout<<"give the name of the student:";
        cin>>name;
        cout<<"give the roll no of the student:";
        cin>>roll_no;
        cout<<"give the age of the student:";
        cin>>age;
    }
    void show_data()
    {
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
         cout<<"roll no:"<<roll_no<<endl;
    }
};
int main()
{
    student s1,s2;
    s1.get_data();
    s2.get_data();
    cout<<"the information given are:"<<endl;
    s1.show_data();
    s2.show_data();
    return 0;
}
