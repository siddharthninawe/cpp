#include<iostream>
#include<math.h>
#include<chrono>
#include<ctime>
using namespace std;

int main() {
    int limit, prime, counter;

    cout<<"Introduce a limit: "; cin>>limit;
    cout<<"Prime numbers from 1 to "<<limit<<" are: \n";

    prime = 1; //because 1 is not prime
    counter = 0;

    chrono::time_point<chrono::system_clock> start, end;
    start = chrono::system_clock::now();
    for(int i = 1; i <= limit; i++) {
        prime++;

        for(int j = 2; j <= sqrt(prime);j++) {
            if(prime % j == 0) counter++;
        }

        if(counter == 0) {}// cout<< prime <<endl;
        else {counter = 0;} //If no prime was found, reinitialize counter.
    }
    end = chrono::system_clock::now();

    chrono::duration<double> elapsed_second = end - start;
    time_t start_time = chrono::system_clock::to_time_t(start);
    time_t end_time = chrono::system_clock::to_time_t(end);
    cout << endl << "Started computation at : " << ctime(&start_time);
    cout << endl << "Finished computation at : " << ctime(&end_time);
    cout << endl << "Elapsed time : " << elapsed_second.count() << "s\n";

    return 0;
}

/*
int isPrime(long long number) 
{

  // negative numbers, 0 and 1 are 
  // not a prime number
  if( number <= 1 ) return 0;

  // 2 and 3 are prime numbers
  if( number <= 3 ) return 1;

  // numbers divisible by 2 and 3
  // are not prime number
  if(number%2==0 || number%3==0) return 0;

  // logic for remaining numbers
  for(long long i=5; i <= sqrt(number); i=i+6) {
      // 6k+1 => number%i
      // 6k-1 => number % (i+2)
      if(number%i == 0 || number%(i+2) == 0) return 0;
  }

  // if all above conditions are not satisfied
  return 1;
}
*/