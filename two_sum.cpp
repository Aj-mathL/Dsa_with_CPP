#include<iostream>
#include<vector> 

using namespace std; 


int  sum(vector <int> & nums, int target){
    vector <int> vec ; 


    for(int i = 0; i<((nums.size() - 1)); i++ )
    {
        for(int j = i+1; j< (nums.size()); j++)
        {
            if(nums[i] + nums[j] == target )
            {
                return (i*10+j); 
            }
        }
    }
    return -1; 
}
int main(){
    vector <int> vec = { 2, 7, 11, 15}; 
    int target = 18;
    
    cout << "Index of element's  " << sum(vec, target) <<endl; 
    
    return 0;
}