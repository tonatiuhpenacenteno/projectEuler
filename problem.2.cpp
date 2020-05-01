#include <iostream>
#include <math.h>

using namespace std;

int fibonacci(int n) {// fibonacci sequence up to 'n'
	if (n == 0) {
	  return 0;
	} else if (n == 1) {
	  return 1;
	} else {
	  return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main()
{
  int f;
  int it = 0;
  int total = 0;
  int N = 4000000;
  
  f = fibonacci(it);
  while ( f < N) {
	if (f%2 == 0) {
	  total += f;
	  cout << "f(" << it << ")  = " << f << " [even] " << "\n";
	}
	it++;
	f = fibonacci(it);
  }

  cout << "Grand total = " << total << "\n";
  return  0;
}
