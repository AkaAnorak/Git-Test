#include <iostream>

using namespace std;

int sum(int);

int main(){
  cout << "Enter a Number" << endl;
  int n;
  cin >> n;
  cout << "Sum: " << sum(n) << endl;
  return 1;
}

int sum(int n){
  int sum = 0;
  for(int i = 1; i <= n; i++){
    sum += i;
  }
  return sum;
}
