/* 
PROBLEM 4

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.

Tonatiuh Pena-Centeno
17-Mai-2020
*/

#include <iostream>
#include <math.h>

using namespace std;

// Function to print decimal palindromic number
int reverseNumber(int num) {
  int rev=0, rem;

  while(num!=0)
	{
	  rem=num%10;
	  rev=rev*10+rem;
	  num=num/10;
	}

  return rev;
  //  getch();
}

// Driver Program to test above function
int main()
{
  int lowLimit = 100;
  int upLimit = 999;

  int mult;
  int counter = 0;
  int max = 0;
  
  for (int it=lowLimit; it<=upLimit; it++) {
	for (int jit=lowLimit; jit<=it; jit++) {
	  mult = it*jit;
	  if (reverseNumber(mult) == mult) {
		if (mult > max) {max = mult;}
	  }
	  counter++;
	}
  }

  std::cout << max << "\n";
  return 0;
}
