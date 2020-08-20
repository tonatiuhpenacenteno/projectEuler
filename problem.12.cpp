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

int choose(int n, int k) {
  if (k == 0) {
	return 1;
	  } else {
	return (n * choose(n - 1, k - 1)) / k;
  }
}

// We generate triangular numbers
int generateTriangular(int n) {
  return choose(n+1,2);
}

// Find divisors of a number
int getDivisors(int n)
{
  int counter=0;
  for (int it=1;it<=n;it++)
	if (n%it==0) {
	  // std::count << it << "\n";
	  counter++;
	}
  return counter;
} 

int main() {
  int tri;
  int lenDivisors = 0;
  int it = 1;
  
  while(lenDivisors <= 500) {
	tri = generateTriangular(it);
	lenDivisors = getDivisors(tri);
	  
	std::cout << it << ":" << tri << "=>" << lenDivisors << "\n";
	it++;
  }
}
