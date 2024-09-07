#include <iostream>

using namespace std;

int prime(int n)
{

    int isPrime = true;
    if (n == 1 || n == 0)
    {
        isPrime = false;
    }
    else
    {
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
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