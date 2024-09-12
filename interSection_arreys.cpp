#include<iostream>

using namespace std; 

int main(){

    int arr1[] = { 2, 3, 6, 8, 9}; 
    int arr2[] = { 1, 3 , 9 }; 
    
    int sz1 = sizeof(arr1)/sizeof(arr1[0]); 
    int sz2 = sizeof(arr2)/sizeof(arr2[0]); 
    for(int i =0; i<sz1; i++)
    {
        cout<<arr1[i]<<" "; 
    }
    cout<<endl; 
    for(int i =0; i<sz2; i++)
    {
        cout<<arr2[i]<<" "; 
    }
    cout<<endl; 
    cout<<"The intersection of two array is : " <<endl; 
    for(int i = 0; i<sz1; i++)
    {
        for(int j =0; j<sz2; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout<<arr1[i]<<" "; 
                break; 
            }
        }
    }
    cout<<endl ;
    return 0;
}