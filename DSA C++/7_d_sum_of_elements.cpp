#include<iostream>
using namespace std;
int SumArray(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;

}


int main()
{
    int size;
    cin>>size;
    
    int num[100];
    //taking input in an array
    for(int i=0; i<size;i++)
    {
        cin>>num[i];
    }

    //calculating sum
    cout<<"Sum of the elements of the array are: "<<SumArray(num, size);


}