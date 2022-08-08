#include <iostream>

using namespace std;

int main()
{
    cout << "A code calculating the mean of Prime numbers from 1 to any given number." << endl << endl;

    int n;
    cout << "Enter the nth value: " << endl;
    cin >> n;

    double sumPrime;
    int PrimeCount = 0;

    int v;
    for(int u=2; u<n; u++){
        for(v=2; v<u; v++){
            if(u%v == 0){
                break;
            }
        }
        if(v == u){
            sumPrime = sumPrime + u;
            PrimeCount++;
        }
    }

    cout << "The number of prime numbers in our given range is: " << PrimeCount << endl << endl;
    cout << "The sum of all the prime numbers is: " << sumPrime << endl << endl;

    double mean;
    mean = sumPrime/PrimeCount;
    cout << "The mean is therefore calculated as: " << mean << endl;
    return 0;
}
