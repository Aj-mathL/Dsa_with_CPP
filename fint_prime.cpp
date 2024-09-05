#include<iostream>

using namespace std; 

int main(){

    int n; 
    bool isPrime = true; 

    cout<<"Enter a number to check prime or not: "; 
    cin>>n; 
    
    for(int i =2; i*i <= n; i++)
    {
        if(n%i== 0)
        {
            isPrime = false; 
            break; 
        }
    }

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