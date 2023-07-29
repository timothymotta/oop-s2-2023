// Write a function that given an array and its length, returns the weighted
// average of the array, defined as Σ xi * wi / n, where xi represents all the
// distinct elements in the array, wi represents how many times the value of
// element xi appears in the array, and n is the size of the array. eg. if  the
// array is {1,2,1,4,1,3} the weighted average is (1 * 3 / 6) + (2 * 1 / 6) + (1
// * 3 / 6)  + (4 * 1 / 6) + (1 * 3 / 6) + (3 * 1 / 6) = 3.0. The function must
// return 0 if the size parameter, n, is less than 1.

#include <unordered_map>

double weighted_average(int array[], int n) {
  if (n < 1) {
    return 0;
  }

  std::unordered_map<int, int> frequency_map;

  for (int i = 0; i < n; i++) {
    frequency_map[array[i]]++;
  }

  double weighted_sum = 0.0;
  for (const auto& entry : frequency_map) {
    int xi = entry.first;
    int wi = entry.second;
    weighted_sum += static_cast<double>(xi * wi) / n;
  }

  return weighted_sum;
}