#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void printVector(vector<int> &v) {
  for (int x: v) cout << x << " ";
  cout << endl;
}

// Vectors are dynamic arrays
// Capacity doubles everytime array is full
// Doubling operation happens at O(n) time
int main(void) {
  // Empty Container Constructor
  vector<int> first;

  // Fill Constructor (4 integers with value 20)
  vector<int> second(4, 20);
  
  // Range Constructor
  int numbers[] = { 1, 2, 3, 4 };
  vector<int> third(numbers, numbers + 4);
  
  // Copy Constructor
  vector<int> fourth(third);

  // Initialization list
  vector<int> fifth = { 1, 2, 3, 4, 10};

  vector<int> arr = { 1, 2, 7, 6, 5, 7, 4, 2, 3, 4};

  // Accessing vector elements
  cout << arr.at(1) << endl;
  cout << arr[2] << endl;

  // Get current size (number of elements)
  cout << "size:      " << arr.size() << endl;

  // Get underlying capacity
  cout << "capacity:  " << arr.capacity() << endl;

  // Max size available
  cout << "max size:  " << arr.max_size() << endl;

  // Add element to end of vector
  arr.push_back(23);
  // Delete last element
  arr.pop_back();
  // Delete 4th element
  arr.erase(arr.begin() + 3);
  // Delete first 2 elements
  arr.erase(arr.begin(), arr.begin() + 2);
  // Delete all
  arr.clear();

  // Initialize capacity to avoid doubling penalty
  vector<int> newarr;
  newarr.reserve(100);
  cout << "newarr capacity: " << newarr.capacity() << endl;
  newarr.push_back(5);
  cout << "newarr capacity: " << newarr.capacity() << endl;

  // Alternatively, you can use fill constructor
  // But next push triggers capacity doubling
  vector<int> newarr_filled(4, 10);
  cout << "newarr_filled capacity: " << newarr_filled.capacity() << endl;
  newarr_filled.push_back(5);
  cout << "newarr_filled capacity: " << newarr_filled.capacity() << endl;

  // Compatible with sort()
  sort(newarr_filled.begin(), newarr_filled.end());
  printVector(newarr_filled);

  return 0;
}