/* 
PROBLEM 5

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

// Ans: bc <<< 'scale=3;1*5*7*9*11*13*16*17*19' = 232792560

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
  double upperLimit = 10;
  double lowerLimie = 1;
  double primeProduct = 1;
  int prevIter = 0;
  int iter = 1;
  int counter = 3;
  int multiFactor = 1;
  int jiter = 1;
  
  std::cout << "jiter:" << jiter << " ";
  std::cout << "cnt:" << counter << " ";
  
  while(iter <= upperLimit) {
	
	if (iter == counter + prevIter) {
	  counter = counter + 2;
	  prevIter = iter;
	  jiter++;
	}

	if (isPrimeNumber(iter)) {
	  std::cout << "iter:" << iter << " (" << "prime:" << isPrimeNumber(iter) << ")\n";
	  primeProduct *= iter;
	} else {
	  std::cout << "iter:" << iter << "\n";
  	}
	iter++;

	std::cout << "jiter:" << jiter << " ";
	std::cout << "cnt:" << counter << " ";
	std::cout << "prevIter:" << prevIter << " ";

  }
  std::cout << "\n--------------------------------------\n";
  std::cout << "primeProduct = " << primeProduct*multiFactor << "\n";	

  return 0;
}
