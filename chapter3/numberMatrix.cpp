#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int size;
  cout << "Please input a size that is bigger than 2 and less than 50: " << endl;
  cin >> size;

  if (size > 50) {
    cout << "Your input is too big!" << endl;
    main();
  } else if (size < 3) {
    cout << "Your input is too small!" << endl;
    main();
  }

  cout << "\nHere is your matrix:\n\n";
  for(int i=1; i<=size; i++) {
    for(int j=1; j<=size; j++) {
      cout << setw(5) << j + (i - 1) * size;
    }
    cout << endl;
  }
}