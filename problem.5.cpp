/* 
PROBLEM 5

2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
#include <stdio.h>
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
  double upperLimit = 20;
  double lowerLimie = 1;
  double primeProduct = 1;
  int prevIter = 0;
  int iter = 1;
  int counter = 3;
  int jiter = 1;
  double multiFactor = pow(2, jiter-1)*pow(3,0);
  
  std::cout << "jiter:" << jiter << " ";
  std::cout << "cnt:" << counter << " ";
  std::cout << "prevIter:" << prevIter << " ";
  std::cout << "multiFactor:" << multiFactor << " ";
  
  while(iter <= upperLimit) {
	
	if (iter == counter + prevIter) {
	  counter = counter + 2;
	  prevIter = iter;
	  jiter++;
	  if (jiter < 3) {
	  	multiFactor = pow(2, jiter-1)*pow(3,0);
	  } else {
	  	multiFactor = pow(2, jiter-1)*pow(3,1);
	  }		
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
  	std::cout << "multiFactor:" << multiFactor << " ";

  }
  std::cout << "\n--------------------------------------\n";
  printf("primeProduct = %12.0f\n", primeProduct);	
  printf("Smallest multiple = %12.0f\n", primeProduct*multiFactor); 
	
  return 0;
}
