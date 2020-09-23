/* 
The following iterative sequence is defined for the set of positive integers:

n → n/2 (n is even)
n → 3n + 1 (n is odd)

Using the rule above and starting with 13, we generate the following sequence:
13 → 40 → 20 → 10 → 5 → 16 → 8 → 4 → 2 → 1

It can be seen that this sequence (starting at 13 and finishing at 1) contains 10 terms. Although it 
has not been proved yet (Collatz Problem), it is thought that all starting numbers finish at 1.

Which starting number, under one million, produces the longest chain?

NOTE: Once the chain starts the terms are allowed to go above one million.


Tonatiuh Pena-Centeno
18-September-2020
*/	

#include<iostream>
#include<vector>

using namespace std;


int main () {
  std::vector<long long int> myStore;
  int limit = 1000000;
  int long long n, maxN;
  bool verbose = false;
  int len, maxLen = 0;

  //113383
  for (int c=1; c<=limit; c++) {
	n = c;
	if (verbose) std::cout << n << " →  ";

	while(n != 1) {
	  if (n%2 == 0) {// n is even: n →  n/2
		n = n/2;
		if (verbose) std::cout << n;		
	  } else { // n is odd: n →  3n+1
		n = 3*n + 1;
		if (verbose) std::cout << n;
	  }

	  if (n < 0) {
		std::cout << n << ": Error!!!\n";
		break;
	  }
	  
	  myStore.push_back(n);
	  if (n != 1) {
		if (verbose) std::cout << " →  ";
	  } else {
		if (verbose) std::cout << ".";
	  }
	}
	  
	len = myStore.size()+1;
	if (verbose) {
	  std::cout << "\n";
	  std::cout << "Length of sequence = " << len << "\n";
	  std::cout << "Vector capacity = " << myStore.capacity() << "\n";
	}
	myStore.clear();
	//	myStore.shrink_to_fit();

	if (len > maxLen) {
	  maxLen = len;
	  maxN = c;
	}
  }
  
  std::cout << "Max (n,length) = " << "(" << maxN << "," << maxLen << ")" << "\n";
}
