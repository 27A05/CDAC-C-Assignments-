#include<iostream>
using namespace std;

void area( int side){
cout<<"area of square is:"<<side*side<<endl;
}

// void area(int lenght,int breadth)
// {
//     cout<<"area of rectangle is:"<<lenght*breadth<<endl;
// }
void area(int lenght,int breadth)
{
    cout<<"area of rectangle is:"<< lenght*breadth<<endl;
}

void area(int side,int height,int base)
{
    cout<<"area of triangle is:"<<side*height*base/2<<endl;
}

int main()
{
     area(20);
    area(10,20);
    area(20,30,1);
   // area(20);
}