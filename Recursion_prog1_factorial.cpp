#include<iostream>
#include<vector>
#include<string> 
using namespace std; 
class Recursion{
    

    public: 
        int factorial(int n){
            if(n==1 || n== 0 ){
                return 1; 
            }

            return n * factorial(n-1); 
        }
}; 

int main(){
    Recursion factorial; 
    int n = 3; 
    int result = factorial.factorial(n); 
    cout<<result <<endl; 

    
    return 0;
}