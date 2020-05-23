/* 
PROBLEM 7

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?

Tonatiuh Pena-Centeno
21-Mai-2020
*/

#include <iostream>
#include <math.h>

using namespace std;

// Function that checks whether n is prime or not
int isPrimeNumber(int n) {
  bool isPrime = true;

  for(int i = 2; i <= n/2; i++) {
	if (n%i == 0) {
	  isPrime = false;
	  break;
	}
  }
  return isPrime;
}

int main()
{
  int location = 10001;
  int n = 2;
  int iter = 0;
  bool stop = false;
  int prime;
  
  while (iter < location) {
	
	if (isPrimeNumber(n) == true) {
	  iter++;
	  // std::cout << n << " : is prime ";
	  // std::cout << " (iter=" << iter << ")" << "\n";
	  prime = n;
	}

	n++;

  }
  std::cout << prime << " : is prime ";
  std::cout << " (iter=" << iter << ")" << "\n"; 

  
  return 0;
}
