#include <iostream>

using namespace std;

int main(void) {
  int n;
  cin >> n;
  int d_now = 0;
  string w_now = "";
  for(int i = 0; i < n; i ++) {
    int d;
    string w;
    cin >> d >> w;
    if(i != 0 && d_now != d) {
      cout << d_now << " " << w_now << endl;
      d_now = d;
      w_now = w;
    }
    else {
      w_now += w;
    }
  }
  cout << d_now << " " << w_now << endl;
}
