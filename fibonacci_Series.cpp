#include<iostream>

using namespace std; 

int fibonacciNumber(int n){
    int arr[2*n], sum = 1; 
    arr[0 ] = 0; 
    for(int i =1; i<n; i++)
    {
        arr[i] = sum;
        sum = arr[i-1] + arr[i]; 
    }
    return sum; 
}

int main(){
    int n; 
    cout<<"Enter a number to find Fibonacci series: "; 
    cin>> n; 
    cout<<"The Fibonacci number of 0 is: 0 "<<endl;
    for(int i =1; i< n; i++)
    {
        cout<<"The Fibonacci number of "<<i<< " is: "<< fibonacciNumber(i)<<endl; 
    }
    return 0;
}