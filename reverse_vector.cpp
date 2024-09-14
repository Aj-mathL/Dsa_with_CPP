#include<iostream>
#include<vector>

using namespace std; 

void reverse_vector(vector <int> & num){
    int sz = num.size(); 
    for(int i = 0; i<(sz/2); i++)
    {
        swap(num[i], num[(sz-1) - i]); 
    }
}

int main(){
    vector <int> vec = { 1, 2, 3, 4, 5, 6, 7}; 
    int sz = vec.size(); 
    reverse_vector(vec); 
    for(int val: vec){
        cout<<val<<endl; 
    }
    return 0;
}