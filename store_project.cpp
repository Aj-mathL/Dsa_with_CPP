#include<iostream>
#include<vector>
#include<string> 
#include<iomanip>

using namespace std; 

struct  Item
{
    /* data */
    string name; 
    double price; 
    int quantity; 
};

class BillingSystem{
    private: 
        vector<Item> items; 
    
    public: 
        void addItem(const string & name, double price, int quantity){
            items.push_back({name, price, quantity}); 
        }

        void displayBill(){
            double total = 0; 
            cout<<"\n=========== Store Bill ==============="<<endl; 
            cout<<left << setw(15) <<"Item"<<setw(10)<<" Price" <<setw(10) <<" Quantity" << setw(10) << " Total"<<endl; 
            cout<<"-------------------------------------------"<<endl; 
            for(const auto & item: items){
                double itemTotal = item.price * item.quantity; 
                total += itemTotal; 
                cout<<left<<setw(15)<< item.name <<setw(10) << item.price <<setw(10)<< item.quantity<< setw(10)<< itemTotal <<endl; 
            }
                cout<<"------------------------------------------"<<endl; 
                cout<<" Grand Total: "<<total<<endl; 
        }
}; 


int main(){
    BillingSystem store; 
    int choice; 
    do{
        cout<<"1. Add Item \n2. Display Bill \n3. Exit \n Enter your choice: "; 
        cin>>choice; 
        if(choice == 1){
            string name; 
            double price;
            int quantity; 
            cout<<"Enter item name: ";
            cin>>name;  
            cout<<"Enter item price: "; 
            cin>>price; 
            cout<<"Enter item quantity: "; 
            cin>>quantity; 
            store.addItem(name, price , quantity); 
        }else if( choice == 2){
            store.displayBill(); 
        }
        else{
            cout<<"Thank you for using our application"<<endl; 
        }
    }while(choice != 3); 


    
    return 0;
}