#include<iostream>
#include<vector>
using namespace std; 


int majorityElement(vector<int> & nums)
{
    int freq = 0, ans  = 0; 
    for(int val : nums){

        if(freq==0)
        {
            ans = val; 
        }
        if(ans == val){
            freq++; 
        }
        else{
            freq--; 
        }
        if(freq>= nums.size()/2)
        {
            return ans; 
        }
    }
    return -1; 
}

int main(){

    //Moore's voting algorithm 
    vector <int> vec = { 1, 2, 2, 2, 2,2, 2,2, 2,2 ,1 , 1,1 }; 
    cout<<"The majority element is "<<majorityElement(vec) <<endl; 
    
    return 0;
}