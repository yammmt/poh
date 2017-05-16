#include <iostream>

using namespace std;

int main(void) {
  string a, b, ans;
  getline(cin, a);
  getline(cin, b);
  ans = (a == b)? "OK": "NG";
  cout<<ans<<endl;
}
