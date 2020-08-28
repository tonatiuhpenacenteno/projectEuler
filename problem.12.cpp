/* 
PROBLEM 12

By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?

Tonatiuh Pena-Centeno
2-August-2020
*/

#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

// Generates triangular numbers: choose(n+1,2)
int choose(int n, int k) {
  if (k == 0) {
	return 1;
	  } else {
	return (n * choose(n - 1, k - 1)) / k;
  }
}


//Find divisors of a number
int getDivisors(int n) {
  int counter = 0;
  
  for (int i=1; i<=sqrt(n); i++) {
	if (n%i == 0) {
	  if (n/i == i) { // If divisors are equal, print only one
		counter=counter+1;
		// std::cout << i << ",";
	  }  else { // Otherwise print both
		counter=counter+2;
		// std::cout << i << "," << n/i << ",";
	  }
	}
  }
  // std::cout << "\n";

  return counter;
}

int main() {
  int triangular;
  int lenDivisors = 0;
  int it = 1;
  int limit = 500;

  while (lenDivisors < limit) {
	triangular = choose(it+1,2);
  	lenDivisors = getDivisors(triangular);
	it++;
  }
  std::cout << "it=" << it << " Number of divisors: " << lenDivisors << " triangular = " << triangular << "\n";
}
