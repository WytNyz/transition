#include <iostream>

class point {

  float x;
  float y;

  public: void saisie();
  public: void affiche(); 
  
};

int main (int argc, char *argv[]) {

  point chad;
  chad.saisie();
  std::cout << "chad => ";
  chad.affiche();

  point soyboy;
  soyboy.saisie();
  std::cout << "soyboy => ";
  soyboy.affiche();
  
  std::cout << "chad => ";
  chad.affiche();
  
  return 0;
}

void point::saisie() {
  std::cout << "x = ";
  std::cin >> x;
  std::cout << "y = ";
  std::cin >> y;
}

void point::affiche() {
  std::cout << "(" << x << ", " << y << ")" << std::endl;
}
