#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
  vector<int> v;
  int n;
  string str, tmp;

  cin >> n;
  getline(cin, tmp); // for LF
  getline(cin, str);
  for(int i = 0; i < n; i++) {
    tmp = str[i];
    if(tmp == "L") {
      v.insert(v.begin(), i + 1);
    }
    else {
      v.push_back(i + 1);
    }
  }

  for(int i = 0; i < n; i++) {
    cout << v[i];
    if(i < n-1) {
      cout << " ";
    }
    else {
      cout << endl;
    }
  }
}
