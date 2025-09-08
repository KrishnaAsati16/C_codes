#include<iostream>
using namespace std;
class test
{
    public :
             int val;
             
             void show()
             {
                cout<<"\nasd"<<val;
             }
};

int main()
{
    test t1,a2;
    t1.val=9;
    a2.val=10;

    t1.show();
    a2.show();
    return 0;
}