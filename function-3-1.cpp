// Write a function that given an array of integers, and its length,
// determine if the array is a 'fan' array, i.e. the entire array is a
// palindrome with the numbers in ascending order from the start to the middle
// element. e.g. {1,2,3,2,1} and {2,4,4,2} are both fan arrays but, {1,2,1,2,1}
// and {1,3,5,4,2} are not. The function must return false if the size
// parameter, n, is less than 1.

bool is_fanarray(int array[], int n) {
  if (n < 1) {
    return false;
  }

  // checks if the array is a palindrome
  for (int i = 0; i < n / 2; i++) {
    if (array[i] != array[n - 1 - i]) {
      return false;
    }
  }

  // checks if the elements in the first half of the array are in ascending
  // order
  for (int i = 1; i < n / 2; i++) {
    if (array[i] <= array[i - 1]) {
      return false;
    }
  }

  return true;
}