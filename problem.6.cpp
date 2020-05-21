/* 
PROBLEM 6

The sum of the squares of the first ten natural numbers is, 1^2+2^2+...+10^2=385

The square of the sum of the first ten natural numbers is, (1+2+...+10)^2=55^2=3025

Hence the difference between the sum of the squares of the first ten natural numbers and the 
square of the sum is 3025−385=2640

Find the difference between the sum of the squares of the first one hundred natural numbers 
and the square of the sum.

Tonatiuh Pena-Centeno
21-Mai-2020
*/

#include <iostream>
#include <stdio.h>
#include <math.h>
#include <iomanip>

using namespace std;


int main()
{
  float sumOfSquares = 0;
  float squareOfSums = 0;
  int n = 100;

  // Solutions for both summations are well-known
  sumOfSquares = (2*pow(n,3) + 3*pow(n,2) + n)/6;
  std::cout << "Sum of squares = " << std::setprecision(9) << sumOfSquares << "\n";
  
  squareOfSums = pow((n*(n+1))/2,2);
  std::cout << "Square of sums = " << std::setprecision(9) << squareOfSums << "\n";

  // Result
  std::cout << "Difference = " << std::setprecision(9) << squareOfSums - sumOfSquares << "\n";
  
  return 0;
}
