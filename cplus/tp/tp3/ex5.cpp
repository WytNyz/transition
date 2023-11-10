#include <iostream>

int ackerman (const int&, const int&);

int main (int argc, char *argv[]) {

  int m, n;
  std::cout << "m = ";
  std::cin >> m;
  std::cout << "n = ";
  std::cin >> n;
  std::cout << "ackerman(" << m << ", " << n << ") = " << ackerman (m, n);
  std::cout << std::endl;
  
  return 0;
}

int ackerman (const int& m, const int& n) {

  if (0 == m) {
    return n + 1;
  }

  if (0 == n) {
    return ackerman (m - 1, 1);
  }

  return ackerman (m - 1, ackerman (m, n -1));

}
