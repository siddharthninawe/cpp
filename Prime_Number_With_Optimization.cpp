#include<iostream>
#include<math.h>
using namespace std;
// function declaration
int isPrime(int number) ;
// main function
int main()
{
    // declare variable
    int num;
    int prime = 1;
    
    // take input
    cout << "Enter an Integer number: ";
    cin >> num;
    
    // check prime 
    for (int n = 0; n < num; n++) {
        prime = isPrime(n);
    
        // display result
        if(prime != 0) 
            cout << n << ", ";
    }

    return 0;
}

// function to check prime number
int isPrime(int number) 
{

  // negative numbers, 0 and 1 are 
  // not a prime number
  if( number <= 1 ) return 0;

  // 2 and 3 are prime numbers
  if( number <= 3 ) return 1;

  // numbers divisible by 2 and 3
  // are not prime number
  if(number%2==0 || number%3==0)
  return 0;

  // logic for remaining numbers
  for(int i=5; i <= sqrt(number); i=i+6) 
  {
      // 6k+1 => number%i
      // 6k-1 => number % (i+2)
      if(number%i == 0 || number%(i+2) == 0) 
      return 0;
  }

  // if all above conditions are not satisfied
  return 1;
}