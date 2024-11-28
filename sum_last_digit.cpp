#include<iostream>
#include<vector>
#include<string> 
using namespace std; 

class LastDigit
{
private:
    /* data */
public:

    int sumOfDigit(int num){
        int d;
        int sum = 0; 
        while(num>0){
            
            sum += num%10;
            num /= 10;  
        }
        return sum; 
    }
    LastDigit(/* args */){}
    ~LastDigit(){}
};



int main(){
    LastDigit lastdigit; 
    
    cout<<lastdigit.sumOfDigit(1577578)<<endl; 
    
    return 0;
}