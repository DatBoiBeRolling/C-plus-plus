#include <iostream>
using namespace std;

int main() {
  double data[] = {128, 2, 16, -33, 1.5, 0, -8, -156};     // Enter data here

  int size = sizeof(data) / sizeof(data[0]);
  
   for (int cycle = 0; cycle < size -1; cycle++) {     // Locks numbers in
    for (int element = 0; element < size - cycle - 1; element++) { // Goes through entire array
      if (data[element] > data[element + 1]) {  // Compare
        swap(data[element],data[element+1]);    // Swap
      }
    }
  }
  
  cout << "Here is the array in ascending order:\n";  
  
    for (int i = 0; i < size; i++) {  // Ouputs new array
    cout << data[i] << " ";
  }

  cout << endl;
}