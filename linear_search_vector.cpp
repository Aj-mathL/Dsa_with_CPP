#include<iostream>
#include<vector>
using namespace std; 

int linearSearch(vector <int> & num, int target){
    int temp ;
    int cout=0;  
    for(int val: num){
        cout++; 
        if(val == target){
            temp = cout; 
            break; 
        }
             
    }
    return temp ; 
}

int main(){

    vector <int> vec = { 2, 3, 4, 5, 7 , 8 }; 
    int i =0; 
    for(int val: vec){
        i++; 
        cout<<"["<< i<<"]: "<< val <<endl;  
    }

    
    cout<< "The target we found in the "<< linearSearch(vec, 3)<<"th place" <<endl; 
    return 0;
}