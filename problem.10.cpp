/* 
PROBLEM 7

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?

Tonatiuh Pena-Centeno
30-Juli-2020
*/

#include <iostream>
#include <math.h>
#include <iomanip>
#include <bits/stdc++.h>

using namespace std;

// Function that checks whether n is prime or not
// https://www.geeksforgeeks.org/prime-numbers/
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

// Function to check 'long int' overflow
bool checkLONG(long num1) {
  if (num1 > LONG_MAX) {
	return true;
  } else {
	return false;
  }
} 

int main() {
  int it=0;
  long total=0;
  int limit = 2000000;
  
  for (it=2;it<limit;it++) {
	if (isPrimeNumber(it)) {
	  total+=it;
	  if (checkLONG(total) == true) {
	  	std::cout << "Overflow occurred at prime: " << it << "\n";
	  	break;
	  };
	  //	  std::cout << total << "\n";
	}	
  }
	
  std::cout << std::setprecision(13) << "total = " << total << "\n";
  
  return 0;
}
