#include<iostream>

using namespace std; 

int main(){
    //first I take an integer for getting input
    int n; 
    //Now I take boolean operator as a flag you can try another
    bool isPrime = true; 

    cout<<"Enter a number to check prime or not: "; 
    cin>>n; 
    

    //Here you see I run the for loop since 2 to i*i, becuase I want to run the program 2 to sqrt(n)
    //It helps the program run faster and light weight 
    //You can use i =2 to i<n then it also run but the program take more number iteration 
    for(int i =2; i*i <= n; i++)
    {
        if(n%i== 0)
        {
            // here when number is divide by any number we just break the loop or destory the loop using break 
            isPrime = false; 
            break; 
        }
    }

    // Here I first check for 0 and 1 than checking for boolean expresion for getting true or false 
    if(n ==0 || n==1)
    {
        cout<<"Not prime"<<endl; 
    }
    else if(isPrime == true)
    {
        cout<<"Prime"<<endl; 
    }
    else{
        cout<<"Not Prime"<<endl; 
    }
    return 0;
}