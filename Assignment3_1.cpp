#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    int arr[5]={10,20,30,40,50};

    for(int i=0;i<5;i++)
    {
       sum=sum+arr[i];
    }
    cout<<"sum is:"<<sum;
    return 0;
}