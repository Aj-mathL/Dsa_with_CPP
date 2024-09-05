#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    //we take n for input 
    int n;
    int i = 0;
    //Here I initialize i as 0 for while loop and take arr[32] because in binarry maximum length of an integer must be 32 
    //Since you know the computers are 32bits mean 4 bytes now in computer are advance so 64 bite are available 
    int arr[32];
    cout << "Enter a number to convert in binary: ";
    cin >> n;
    //Here this codition for if anyone put negative values for converting binary 
    //This program is not for convert negative numbers to binary we only work with positive integer
    //We can make this program for also negative number just changing the negative to positive number and lastly use - and print the array
    if (n < 0)
    {
        cout << "Invalid input";
    }


    // Here we divide the number by 2 and store the remainder in array 
    while (n > 0)
    {
        arr[i] = n % 2;
        i++;
        n = n/  2;
        //Here decrement n by half in each iteration
    }
    //Since you know the result must reverse, So we print the reverse the array. 
    for (int j = i-1; j>=0; j--)
    {
        cout<<arr[j] ; 
    }

    cout<<endl; 
    cout<<endl; 
    cout<<endl; 


    //Now we convert this binary number to digit 
    int decimal = 0; 
    //Take as initial value to sum of 2's power to it. 
    // Now just take the array again to show better output 
    for (int j = i-1; j>=0; j--)
    {
        cout<<arr[j] ; 
    }
    //Here take sizeof function which count byte of integer and one integer equal 4 byte
    // So each array take 4 byte so if 5 array then 5*4  = 20 that's why we divide 20/4 = 5 the actual size of this array
    //Get the array's value when 1 then put 2 to the power the interation value add to decimal to get the original number
    for(int p = (sizeof(arr)/sizeof(arr[0])) -1; p>=0; p--){
        if(arr[p] == 1)
        {
            decimal += pow(2, p); 
        }
        else
        {
            // it not necessary just for looking code good and code get much line 
            decimal += 0; 
        }

    }

    cout<<" covert to decimal number is: "<<decimal<<endl; 


    //One of the reason of this code for some tell you that give me a binary calculator
    //Then we just make binary number digit then just make simple digit calcultor show them ....

    
    cout<<endl; 
    return 0;
}