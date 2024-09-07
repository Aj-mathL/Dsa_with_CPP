#include<iostream>

using namespace std; 


int factorial(int n){
    int d=1; 
    //Here we take d as a intial value for multiplication 
    for(int i=1; i<=n; i++)
    {
        //Here this loop run from 1 to given number and we multiple each number and get the result 
        d *= i;
    }
    return d; 
}
//nCr = n!/(r!(n-r)!)
//8C2 = 8!/ 2!(8 - 2)! = 28 
//6C3 = 20

int nCr(int n, int r){
    return (factorial(n))/(factorial(r) * factorial(n - r )); 

}

int main(){

    cout<<"factorial is "<<factorial(5)<<endl;

    cout<<"Binomial coefficent 8 or 2 is "<<nCr(6 ,3)<<endl;  
    return 0;
}