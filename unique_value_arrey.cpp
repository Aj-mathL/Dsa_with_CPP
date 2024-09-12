#include<iostream>

using namespace std; 

int main(){

    int arr[] = {2 , 3, 4, 3, 7, 7 , 9, 2, 9 };
    int sz = sizeof(arr)/sizeof(arr[0]); 
    for(int i = 0; i<sz; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
    cout<<"List of unique value in the arrey"<<endl; 
    for(int i=0; i<sz; i++){
        bool isUnique= true; 
        for(int j =0; j<i; j++)
        {
            if(arr[i]== arr[j]){
                isUnique = false; 
                break;
            }
        }

        if(isUnique)
        {
            cout<<arr[i]<<" "; 
        }
    }
    cout<<endl; 
    return 0;
}