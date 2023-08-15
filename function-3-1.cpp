#include <iostream>

using namespace std;

bool equalsArray(int *numbers1, int *numbers2, int length) {
  if (length < 1) {
    return false;  // return false if length is less than 1
  }

  for (int i = 0; i < length; ++i) {
    if (numbers1[i] != numbers2[i]) {
      return false;  // arrays are not equal if any elements don't match
    }
  }

  return true;  // return true if all elements matched, arrays are equal
}

int *readNumbers() {
  int *num;
  num = new int[10];

  for (int i = 0; i < 10; i++) {
    cout << "Please enter a number into array: ";
    cin >> num[i];
  }
  return num;
}
