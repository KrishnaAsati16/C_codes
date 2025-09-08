#include<iostream>
using namespace std;
class outer
{
    public :
    class Inner
    {
        public :
        void display ()
        {
            std :: cout<<"Inner class\n";
        }
    } ;
};