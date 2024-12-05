#include<iostream>
#include<vector>
#include<string> 
using namespace std; 

class Bird{

    public:

        Bird(){}

        ~Bird(){}

        //Now let see function overloading work or not using polymorphism
        void fly(){
            cout<<"Bird can fly anywhere"<<endl; 
        }

};

class Penguine: public Bird{
    public:
        void fly(){
            cout<<"Penguine can't fly because they have not feather wing"<<endl; 
        }
}; 

int main(){
    Bird bird; 
    Penguine penguine; 
    bird.fly(); 
    penguine.fly(); 

    //output will be different but in same function name and also the second function inherite but since first read own function and clear memory that's all. 
    
    return 0;
}