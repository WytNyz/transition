#include <cstdlib>
#include <iostream>

void fillArray (int*, const int&);
void printArray (const int*, const int&);

int maxValue (const int*, const int &);
int maxIndex (const int*, const int &);
const int* maxAddress (const int*, const int &);

int main (int argc, char *argv[]) {

  int *arr, size;
  std::cout << "size = ";
  std::cin >> size;
  arr = new int[size];
  fillArray(arr, size);
  system("clear");
  std::cout << "For reference: " << std::endl;
  printArray(arr, size);

  std::cout << "max value = " << maxValue(arr, size) << std::endl;
  std::cout << "max index = " << maxIndex(arr, size) << std::endl;
  std::cout << "max address = " << maxAddress(arr, size) << std::endl;
  
  return 0;
}

void fillArray (int* arr, const int& size) {

  for (int i = 0; i < size; i++) {
    std::cout << "arr [" << i << "] = ";
    std::cin >> arr[i];
  }

}

void printArray (const int* arr, const int& size) {

  for (int i = 0; i < size; i++) {
    if (0 == i) {
      std::cout << "arr = [" << arr[i] << " ,";
      continue;
    }
    if (size - 1 == i) {
      std::cout << arr[i] << "]." << std::endl;
      break;
    }
    std::cout << arr[i] << " ,";
  }

}

int maxValue (const int* arr, const int& size) {

  int maxVal = -1;
  for (int i = 0; i < size; i++) {
    if (maxVal <= arr[i]) {
      maxVal = arr[i];
    }
  }
    return maxVal;

}

int maxIndex (const int* arr, const int& size) {

  int maxInd = -1;
  for (int i = 0; i < size; i++) {
    if (maxInd <= arr[i]) {
      maxInd = i;
    }
  }
  return maxInd;

}

const int* maxAddress (const int* arr, const int& size) {

  int maxInd = -1;
  for (int i = 0; i < size; i++) {
    if (maxInd <= arr[i]) {
      maxInd = i;
    }
  }
  return arr + maxInd;

}
