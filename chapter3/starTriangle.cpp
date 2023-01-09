#include <iostream>
using namespace std;

int main()
{
  int size;
  
  cout << "Please input a triangle size (greater than 2 and less than 50): " << endl;
  
  cin >> size;

  if (size > 50) {
    cout << "Your input size is too big!" << endl;
    main();
  } else if ( size < 3) {
    cout << "Your input size is too small!" << endl;
    main();
  }

  for(int i=0; i<size; i++) {

    for(int j=0; j<size-i; j++){
      cout << " ";
    }

    for(int j=0; j<i; j++) {
      cout<<" *";
    }

    cout << endl;
  }

  return 0;
}