#include<iostream>
#include<vector>
#include<string> 
using namespace std; 

class Recursion{
    public: 
        int sumOfN(int n){
            if(n==0 ){
                return 0; 
            }

            return n + sumOfN(n-1); 
        }
}; 

int main(){
    Recursion sum; 
    int n = 10; 
    int result = sum.sumOfN(n); 
    cout<<result <<endl; 

    
    return 0;
}