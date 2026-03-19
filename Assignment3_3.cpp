#include<iostream>
using namespace std;
int main()
{
   
    int arr[9]={10,20,7,30,40,9,27,31,50};
    cout<<"even numbers are:";
    for(int i=0;i<5;i++)
    {

        if(arr[i]%2==0)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<"odd numbers are:";
    for(int i=0;i<=5;i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}