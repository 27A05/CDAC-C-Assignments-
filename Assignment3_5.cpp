#include<iostream>
using namespace std;

void add(int=1,int=2,int=3,int=5); //default args

int main()
{
    add(); //parametrs r passed
    add(10);
    add(10,69);
    add(30,45,345);
    add(15,23,45,57);
    return 0;
}
void add(int a,int b,int c,int d) //add function is been called
{
    cout<<a+b+c+d<<endl;
}