#include<iostream>
using namespace std;
class vector2D
{
    private:
    float x,y;
    public:
    vector2D(float x_val,float y_val)
    {
        x=x_val;
        y=y_val;
    }
    vector2D add(const vector2D &v)//defn ma two component ma div and then add then return ni 
                           //vector2D kae form ma not any datatype like int float void //
    {
     float newX=x +v.x;
     float newY=y +v.y;
    return vector2D(newX,newY);
    }
    void display()
    {
        cout<<"the value of x:"<<x<<"and the value of y:"<<y<<endl;
    }
};
int main()
{
    vector2D v1(2.5,3.5);
    vector2D v2(1.5,3.5);
    vector2D v3=v1.add(v2);//ya chae v2 vector lae argument jasari pass garne tyo ln 13 ma jada
                           //refference variable ma store hunxw
    v3.display();
    return 0;

}