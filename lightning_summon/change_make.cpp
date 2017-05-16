#include <iostream>

using namespace std;

int main(void) {
  string str, tmp;
  int totalDmg = 0;
  for(int i = 0; i < 5; i++) {
    getline(cin, str);
    // getline(cin, tmp);
    if(str == "Attack") {
      totalDmg += 100;
    }
  }
  cout << totalDmg << endl;
}
