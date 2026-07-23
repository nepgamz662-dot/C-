#include<iostream>
using namespace std;
class  secretvault
{
    private:
    int pincode=1234;
    public:
    display()
    {
        cout<<"the pincode of the secretvault is:"<<pincode<<endl;

    }
    friend void override_pin(secretvault &v, int newpin);
};
 void override_pin(secretvault &v, int newpin)// refference variable line 
 {
    v.pincode=newpin;//v.pincode le private ma vaeko pincode lae access garyo through friend function outside of the class but access garnw chae refference variable
 }
 int main()
 {
    secretvault val;
    override_pin(val,9999);
    val.display();
    return 0;
 }
