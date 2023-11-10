#include <iostream>
#include <math.h>

void saisie (float&, float&, float&);
void calcul (const float&, const float&, const float&);

int main (int argc, char *argv[]) {

  float a, b ,c;
  saisie (a, b, c);
  calcul(a, b, c);
  
  return 0;
}

void saisie (float& aa, float& bb, float& cc) {

  std::cout << "a = ";
  std::cin >> aa;
  std::cout << "b = ";
  std::cin >> bb;
  std::cout << "c = ";
  std::cin >> cc;

}

void calcul (const float& aa, const float& bb, const float& cc) {

  float delta;
  if (0 == aa) {
    if (0 != bb) {
      std::cout << "x = " << -cc/bb << std::endl;
    } else if (0 == cc) {
      std::cout << "x = IR" << std::endl;
    } else {
      std::cout << "empty" << std:: endl;
    }
    delta = bb * bb - 4 * aa * cc;
  }

  if (0 < delta) {
    std::cout << "x1 = " << (- bb - sqrt(delta))/(2 * aa - cc) << std::endl;
    std::cout << "x2 = " << (- bb + sqrt(delta))/(2 * aa - cc) << std::endl;
  } else if (0 == delta) {
    std::cout << "x = " << - bb / (2 * aa + cc) << std::endl;
  } else {
    std::cout << "No solution in IR" << std::endl;
  }


}
