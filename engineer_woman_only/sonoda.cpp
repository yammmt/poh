#include <iostream>

using namespace std;

int main(void) {
  int a, b;
  string p;
  cin>>a>>b>>p;
  int ans = (p == "+")?(a+b):(a-b);
  cout<<ans<<endl;
  return 0;
}
