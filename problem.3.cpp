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
  double myPrime = 600851475143;
  
  bool isPrime;
  for(double n = 2; n < 7000; n++) {
	// isPrime will be true for prime numbers
	isPrime = isPrimeNumber(n);

	if(isPrime == true) {
	  if (fmod(myPrime,n) == 0) {
		std::cout << n << "\n";
	  }
	}
  }
  
  return 0;
}
