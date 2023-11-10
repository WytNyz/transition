#include <cstdlib>
#include <iostream>

int sumOfN (const int&);

int main (int argc, char *argv[]) {

  int n;
  std::cout << "n = ";
  std::cin >> n;

  system("clear");
  std::cout << "Sum of " << n << " elements = " << sumOfN(n) << std::endl;
  
  return 0;
}

int sumOfN (const int& n) {

  int sum = 0;
  for (int i = 1; i <= n; i++) {
    sum += i;
  }
  return sum;

}
