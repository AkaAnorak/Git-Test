#include <iostream>

using namespace std;

int sum(int);
int product(int);

int main(){
  cout << "Enter a Number" << endl;
  int n;
  cin >> n;
  cout << "Sum: " << sum(n) << endl;
  cout << "Product: " << product(n) << endl;
  return 1;
}

int sum(int n){
  int sum = 0;
  for(int i = 1; i <= n; i++){
    sum += i;
  }
  return sum;
}

int product(int n){
  int product = 1;
  for(int i = 1; i <= n; i++){
    product *= i;
  }
  return product;
}
