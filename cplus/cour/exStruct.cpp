#include <iostream>

struct point {
  int num;
  float x;
  float y;
};

void saisie(point &);
void affiche(const point &);

void saisie_tab(point *, const int &);
void affiche_tab(point *, const int &);

int main (int argc, char *argv[]) {

  point *p;
  p = new point;
  saisie(*p);
  affiche(*p);

  point *a;
  int size;
  std::cout << "size = ";
  std::cin >> size;
  a = new point [size];
  saisie_tab(p, size);
  affiche_tab(p, size);
  delete []a;
  
  return 0;
}

void saisie(point &fx) {

  std::cout << "num = ";
  std::cin >> fx.num;
  std::cout << "x = ";
  std::cin >> fx.x;
  std::cout << "y = ";
  std::cin >> fx.y;

}

void affiche(const point &fx) {

  std::cout << "num: " << fx.num << std::endl;
  std::cout << "x: " << fx.x << std::endl;
  std::cout << "y: " << fx.y << std::endl;

}

void saisie_tab(point *fx, const int & size) {

  for (int i = 0; i < size; i++) {
    saisie(fx[i]);
  }

}

void affiche_tab(point *fx, const int & size) {

  for (int i = 0; i < size; i ++) {
    affiche(fx[i]);
  }
}
