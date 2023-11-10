#include <iostream>

int power (const int &,const int &);

int main (int argc, char *argv[]) {

  int num, pow;
  std::cout << "num = ";
  std::cin >> num;
  std::cout << "pow = ";
  std::cin >> pow;
  if (num >= 0) {
    std::cout << num << "^" << pow << " = " << power(num, pow) << std::endl;
  } else if (num != 0) {
    std::cout << num << "^" << pow << " = " << power(1/num, -pow) << std::endl;
  } else {
    std::cout << "impossible with num == 0!";
  }
  
  return 0;
}

int power (const int &num,const int &pow) {

  int result = 1;
  for (int i = 0; i < pow; i++) {
    result *= num;
  }
  return result;

}
