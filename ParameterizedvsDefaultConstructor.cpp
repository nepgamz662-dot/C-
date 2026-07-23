#include<iostream>
using namespace std;
class time
{
    private:
    int hours,minutes;
    public:
    time()
    {
        hours=0;
        minutes=0;
    }
    time(int h,int m)
    {
        hours=h;
        minutes=m;
    }
    void display()
        {
           cout<<"the value of the time is hours:"<<hours<<" and the second is:"<<minutes<<endl;
        }
};
int main()
{
    time t1, t2(5,6);
    t1.display();
    t2.display();
    return 0;
}