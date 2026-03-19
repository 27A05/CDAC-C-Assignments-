#include<iostream>
using namespace std;
int main()
{
    int largest=0;
    int arr[5]={10,20,30,40,50};

    for(int i=0;i<5;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }

    cout<<"largest element is:"<<largest;
    
    return 0;
}