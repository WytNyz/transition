#include <iostream>

void lire_tabe(int*,const int&);
void ecrire_tab(int*,const int&);
int somme_tab(int*,const int&);
int max_elem (int*, const int&);
int min_elem (int*, const int&);

int main (int argc, char *argv[]) {

  int *tab, N;
  std::cout << "N = ";
  std::cin >> N;
  tab = new int [N];
  lire_tabe(tab, N);
  ecrire_tab(tab, N);
  std::cout << "sum = " << somme_tab(tab, N) << std::endl;
  std::cout << "max = " << max_elem(tab, N) << std::endl;
  std::cout << "min = " << min_elem(tab, N) << std::endl;
  return 0;

}

void lire_tabe (int *arr,const int& size) {

  for (int i = 0; i < size; i++) {
    std::cout << "tab[" << i << "] = ";
    std::cin >> arr[i];
  
  }
}

void ecrire_tab (int *arr,const int& size) {

  for (int i = 0; i < size; i++) {
    if (0 == i) {
      std::cout << "tab = [" << arr[i] << ", ";
      continue;
    }
    if (size - 1 == i) {
      std::cout << arr[i] << "]" << std::endl;
      break;
    }
    std::cout << arr[i] << ", ";
  }

}

int somme_tab (int *arr,const int& size) {

  int sum = 0;
  for (int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;

}

int max_elem (int* arr, const int& size) {

  int max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;

}

int min_elem (int* arr, const int& size) {

  int min = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }
  return min;

}
