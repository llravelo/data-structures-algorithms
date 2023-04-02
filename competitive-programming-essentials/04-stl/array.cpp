#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

// Passing by reference with '&' creates new alias for the array
void updateArray(array<int, 10> &arr, int index, int newval) {
  if (index >= 10) return;
  arr[index] = newval;
}

// For Each loop
void printArray(const array<int, 10> &arr) {
  for (int x : arr) cout << x << " ";
  cout << endl;
}

// Array iterators
void printArrayWithIterator(array<int, 10> &arr) {
  array<int, 10>::iterator itr;
  for (itr = arr.begin(); itr != arr.end(); itr++) cout << *itr << " ";
  cout << endl;
}

int main(void) {
  // Arrays are fixed size as opposed to vector
  array<int, 10> arr = {2, 1, 4, 5, 6, 7, 9, 0, 8, 3};

  // Compatible with sort()
  sort(arr.begin(), arr.end());
  printArray(arr);

  // Access array elements
  cout << arr.front() << endl;
  cout << arr[1] << endl;
  cout << arr.at(2) << endl;
  cout << arr.back() << endl;

  // Initialize to a certain value with fill()
  arr.fill(1);
  printArrayWithIterator(arr);

  return 0;
}
