#include <iostream>
using namespace std;

unsigned long long Factorial(unsigned long long n) {
  if (n == 0) {
    return 1;
  }
  else {
    return n * Factorial(n - 1);
  }
}

int main(){
  int number;
  cin >> number;
  cout << Factorial(number);
}
