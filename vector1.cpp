#include<iostream>
#include<vector> 
// When we use vector, then use g++ -std=c++11 prog_name.cpp && ./a.out


using namespace std; 

int main(){
    // vector is basically arrey but it can change dynamically when we need. 
    vector <int> vec ;//taking vector as a integer
    // vector <char> vec = { 'a', 'b' , 'c' , 'd', 'e'};//taking vector as char 
    // cout<<vec[3]<<endl; 

    // Now a new loop called "For Each Loop "
    //for(char val : vec){ //for each loop syntex 
      //  cout<< val <<endl; 
    //}


    //using function "push_back" to add a element in vector
    vec.push_back(25); 
    //Adding more element using same syntex; 
    vec.push_back(55); 
    vec.push_back(50); 
    vec.push_back(75); 
    vec.push_back(95); 

    //using function "pop_back" to delete a element in vector 
    vec.pop_back(); 

    //now using "size()" function to print the size of the vector
    cout<< "size of char vector is "<< vec.size()<<endl; 


    //this is use for print the vector, It is a for each loop 
    // for(int val : vec){ //for each loop syntex 
    //    cout<< val <<endl; 
    // }

    cout<< vec.front() <<endl;//print of first in vector 
    cout<< vec.back() <<endl;//print the last element in vector 
    

    cout<< vec.at(2)<<endl; 





    
    return 0;
}