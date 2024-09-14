#include<iostream>
#include<vector>


using namespace std; 

int main(){
    vector <int> vec= { 1, 3, 4}; //vector ka memory dynamically allocate 
    //Static memory allocate in stack memory and dynamical things are allocate in heap memory
    vec.push_back(5); 
    vec.push_back(8); 
    vec.push_back(9); 
    vec.push_back(6); 
    cout<< vec.size()<<endl; 
    cout<<vec.capacity()<<endl; 
    
    
    
    return 0;
}