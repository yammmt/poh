#include <iostream>

using namespace std;

int main(void) {
  int a, b, c, d;
  cin >> a >> b;
  cin >> c >> d;
  int ans = ((double)a/b > (double)c/d)? b: d;
  cout << ans << endl;
}
