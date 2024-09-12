#include<iostream>

using namespace std;
void printArrey(int arr[], int size) 
{
    for(int i =0; i< size; i++){
        cout<<"["<<i<<"]:"<<arr[i]<<endl; 
    }
}

int main(){

    int arr[] = {2, 3, 4, 5, 6, 7, 8, 9}; 
    int size = sizeof(arr)/sizeof(arr[0]); 
    printArrey(arr, size) ; 
    //for loop 
    // for(int i = 0; i<size/2; i++)
    // {
    //     swap(arr[i], arr[(size -1) - i]); 
    // }


    //while loop 
    int start = 0; 
    int end = size -1; 
    
    
    while (start<end)
    {
        swap(arr[start],arr[end]); 


        start++; 
        end--; 
    }
    

    //After swaping arrey
    cout<<"After swaping arrey"<<endl; 
    printArrey(arr, size); 

     


    return 0;
}