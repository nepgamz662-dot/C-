#include<iostream>
using namespace std;
class swapper
{
    private:
    int x=10;
    int y=20;
    public:
    void swap()
    {
        int *ptr1,*ptr2;
        ptr1=&x;
        ptr2=&y;
        int temp;
        temp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp;
    }
    void show_data()
    {
        cout<<"the value of the x is"<<x<<" and the value of the y is "<<y<<endl; 
    }
};
int main()
{
    swapper s;
    s.swap();
    cout<<"after swap"<<endl;
    s.show_data();
    return 0;

}