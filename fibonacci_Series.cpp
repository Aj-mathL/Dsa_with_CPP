#include<iostream>

using namespace std; 

int fibonacciNumber(int n){
    //first I take an array Her I alocate the size with n*2 but it not necessary just for get enough space ok 

    int arr[2*n], sum = 1; 
    arr[0 ] = 0; 
    //first arr[0 ] = 0 initialize with 0 for the series 
    // then I start the for loop from 1 to the n-1 
    // to get the proper series from 0 
    for(int i =1; i<n; i++)
    {
        arr[i] = sum;
        // firstly geting prev and curr number sum thus I initilize sum as 1 and arr[0 ] as 0 
        //So we get 2nd array as 1 and third array as 1 and then sum will be continue with fibonacci style ....
        //I hope u understand, If have any problem to contact me 
        sum = arr[i-1] + arr[i]; 
    }
    return sum; 
}

int main(){
    int n; 

    cout<<"Enter a number to find Fibonacci series: "; 
    cin>> n; 
    //Here I think no confusion in this code 
    //Because I just use a simple for loop for print the series 
    //Firstly for 0 i make this line before the for loop ... 
    cout<<"The Fibonacci number of 0 is: 0 "<<endl;
    for(int i =1; i< n; i++)
    {
        cout<<"The Fibonacci number of "<<i<< " is: "<< fibonacciNumber(i)<<endl; 
    }
    // Ok thank you if you understand and If have question and suggestion to make better contact me.
    // It will be my pleasure to take suggestion from you. 
    return 0;
}