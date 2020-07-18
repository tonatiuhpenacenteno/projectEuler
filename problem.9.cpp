/* 
PROBLEM 9

A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a^2 + b^2 = c^2

For example, 3^2 + 4^2 = 9 + 16 = 25 = 5^2.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.

Tonatiuh Pena-Centeno
18-Juli-2020
*/

#include <math.h>
#include <iostream>
#include <iomanip>

using namespace std;


// We use a brute-force approach and generate Pythagorean triples over a
// grid of 100 x 100
int main() {
  int it, jit;
  float a, b, c;
	
  for (it=1;it<=100;it++) {
	for (jit=1;jit<=100;jit++) {
	  a = pow(it,2) - pow(jit,2);
	  b = 2*it*jit;
	  c = pow(it,2) + pow(jit,2);	 

	  // We make sure that only natural numbers: a,b,c are possible
	  if (a+b+c == 1000 & a > 0 & b > 0 & c > 0) {
	  	std::cout << "(" << it << "," << jit << ")" << ":";
		std::cout << "(a,b,c)=" << a << "," << b << "," << c << "=";
		std::cout << std::setprecision(12) << a*b*c << "\n";
		break;
	  }
	}
  }

  return 0;
}


