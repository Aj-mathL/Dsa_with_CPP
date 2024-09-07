#include <iostream>

using namespace std;

int prime(int n)
{

    bool isPrime = true;
    //First I take a boolean value as a flag
    if (n == 1 || n == 0)
    {
        isPrime = false;
        // I check here if any one give the value 0 or 1 then it not be prime 
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            //Here I run the function from 2 to sqrt of the given number 
            if (n % i == 0)
            {
                //Here I use module operator to get the remainder 
                //% use to find remainder , Here n%i get the divisor 
                //Like 5 %2 the remainder will be 1 5/2 get the value 2 and remainder is 1 
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // As I return 0 or 1 when prime 1 and non prime is 0 
    //That's why I use if to get prime or not prime 
    //If you have a better option write this things you're welcome and also suggest me 
    for (int i = 2; i <= n; i++)
    {
        if (prime(i) == 1)
        {
            cout << i << " is Prime" << endl;
        }
        else
        {
            cout << i << " is Not Prime" << endl;
        }
    }
    return 0;
}