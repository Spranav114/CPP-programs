#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        const int j;

        Demo() : j(20)      //Member initialization
        {
            i = 10;
            // j = 20;
        }

        Demo(int a, int b) : j(b)
        {
            i = a;
        }
};

int main()
{
    Demo obj;
    cout<<obj.i<<"\n";
    cout<<obj.j<<"\n";

    return 0;
}