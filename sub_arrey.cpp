#include<iostream>
#include<vector>
using namespace std; 

int main(){

    // sub arrey = (n*(n+1))/2 || 
    vector <int> vec = { 3, -4, 5, 4, -1, 7, -8}; 
    int n= vec.size(); 
    // int maxSum = INT8_MIN; 
    // for(int st = 0; st<n; st++)
    // {
    //     int currSum = 0; 
    //     for(int end = st; end<n; end++)
    //     {
    //         currSum += vec[end]; 
    //         maxSum = max(currSum, maxSum); 
    //         // for(int i = st; i<=end; i++)
    //         // {
    //         //     cout<< vec[i]; 
    //         // }
    //         // cout<<" "; 
    //     }
    //     // cout<<endl ;
    // }

    // cout<<"max subarray sum = "<<maxSum<<endl; 


    //Kadan sum|| 

    int currSum = 0 , maxSum = INT8_MIN; 

    for(int st = 0; st<n; st++)
    {
        currSum += vec[st]; 
        maxSum = max(currSum, maxSum); 
        if(currSum<0)
        {
            currSum = 0; 
        }
    }

    cout<<"The maximum of the sum is "<<maxSum<<endl; 


    



    return 0;
}