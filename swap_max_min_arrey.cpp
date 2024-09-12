#include<iostream>

using namespace std; 

void printArrey(int arr[], int sz)
{
    for(int i=0; i<sz; i++)
    {
        cout<<"["<<i<<"]:"<<arr[i]<<"\t"; 
    }
    cout<<endl; 
}

int main(){

    int arr[] = {2 , 3,  4, 8, 99}; 
    int sz = 5;
    int small = INT8_MAX;
    int big = INT8_MIN; 
    int smallIdx, bigIdx; 
    printArrey(arr, sz); 
    for(int i=0; i<sz; i++)
    {
        if(arr[i]<small)
        {
            small = arr[i]; 
            smallIdx = i; 
        }
        if(arr[i]>big)
        {
            bigIdx = i; 
            big = arr[i]; 
        }
    }

    cout<<small<<endl; 
    cout<<big<<endl; 
    //Using swap function to swap small int to big int 
    swap(arr[smallIdx],arr[bigIdx]); 
    printArrey(arr, sz); 
    return 0;
}