#include <iostream>

using namespace std;

int main(void) {
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  for(int i = 0; i < n; i++) {
    int c;
    cin >> c;
    m += c;
    if(m <= a) {
      m += b;
    }
  }
  cout << m << endl;
}
