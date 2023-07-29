// Write a function that given an array of integers and the length of the array,
// will count the amount of times the numbers 2, 5 and 9 appear using a switch
// statement. The function must print out your results on one line in the
// following form: 2:<num_twos>;5:<num_fives>;9:<num_nines>;

// If the array contained three 2s, one 5 and eleven 9s, the output would be:
// 2:3;5:1;9:11;
// Note the colons and semi-colons.
// Also remember to write out a newline at the end of the output.
// The function must still produce a line of output even if the size parameter,
// n, is less than 1.

#include <iostream>

void two_five_nine(int array[], int n) {
  if (n < 1) {
    std::cout << "2:0;5:0;9:0;" << std::endl;
    return;
  }
  
  int count_two = 0;
  int count_five = 0;
  int count_nine = 0;

  for (int i = 0; i < n; i++) {
    switch (array[i]) {
      case 2:
        count_two++;
        break;
      case 5:
        count_five++;
        break;
      case 9:
        count_nine++;
        break;
    }
  }

  std::cout << "2:" << count_two << ";5:" << count_five << ";9:" << count_nine  << ";" << std::endl;
}