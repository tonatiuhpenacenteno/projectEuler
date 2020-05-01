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
