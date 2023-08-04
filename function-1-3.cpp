// Timothy Motta a1831126

//  Given a matrix of integers, count the number of times each number 0-9
//  appears. Print out your results on one line in the following form:

// 0:number of zeros;1:number of ones;2:number of twos;3:number of
// threes;4:number of fours;5:number of fives;6:number of sixes;7:number of
// sevens;8:number of eights;9:number of nines; For example, if you are passed
// an identify matrix, it contains 12 zeros and 4 ones and no other digits from
// 0 to 9, your output would be:

// 0:12;1:4;2:0;3:0;4:0;5:0;6:0;7:0;8:0;9:0;
// Note the colons and semi-colons.

// Signature: void count_digits(int array[4][4])

#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
  int count[10] = {
      0};  // Initialize an array to count the occurrences of each digit

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      int digit = array[i][j];
      count[digit]++;
    }
  }

  for (int i = 0; i < 10; i++) {
    cout << i << ":" << count[i];
    if (i != 9) {
      cout << ";";
    }
  }
  cout << ";" << endl;
}