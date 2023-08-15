#include <iostream>

using namespace std;

void hexDigits(int *numbers, int length) {
  for (int i = 0; i < length; ++i) {
    int num = numbers[i];
    char hexDigit;

    switch (num) {
      case 0:
        hexDigit = '0';
        break;
      case 1:
        hexDigit = '1';
        break;
      case 2:
        hexDigit = '2';
        break;
      case 3:
        hexDigit = '3';
        break;
      case 4:
        hexDigit = '4';
        break;
      case 5:
        hexDigit = '5';
        break;
      case 6:
        hexDigit = '6';
        break;
      case 7:
        hexDigit = '7';
        break;
      case 8:
        hexDigit = '8';
        break;
      case 9:
        hexDigit = '9';
        break;
      case 10:
        hexDigit = 'A';
        break;
      case 11:
        hexDigit = 'B';
        break;
      case 12:
        hexDigit = 'C';
        break;
      case 13:
        hexDigit = 'D';
        break;
      case 14:
        hexDigit = 'E';
        break;
      case 15:
        hexDigit = 'F';
        break;
      default:
        hexDigit = '?';
        break;  // For invalid input
    }

    cout << i << " " << num << " " << hexDigit << endl;
  }
}

int *readNumbers() {
  int *num;
  num = new int[10];
  // read array into for loop
  for (int i = 0; i < 10; i++) {
    cout << "Please enter a number: ";
    cin >> num[i];
  }
  return num;
}

// display array
void printNumbers(int *numbers, int length) {
  cout << "Your array is :" << endl;

  for (int i = 0; i < length; i++) {
    cout << i << " " << numbers[i] << endl;
  }
}
