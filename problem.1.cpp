/*
PROBLEM 1

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.

Tonatiuh Pena-Centeno
17-Mai-2020
*/

#include <iostream>

using namespace std;

int main()
{
  int L = 1000;
  int temp;
  int count = 0;
  
  for (int it=0; it<L; it++) {
	if (it%3 == 0 || it%5 == 0 ) {
	  // std::cout << it << "\n";
	  count+=it;
	}
  }

  std::cout << "###" << count << "\n";
  return  0;
}
