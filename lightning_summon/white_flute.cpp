// 先頭の黒挿入の処理が一貫しておらず頭の悪い場合分けが必要になってしまう？

#include <iostream>
// #include <cstring>
#include <sstream>

#define MAX_COLOR_LENGTH 101;

using namespace std;

string int2str(int input);

int main(void) {
  string str, ans = "", tmp;

  getline(cin, str);
  tmp = str[0];
  if(tmp != "b") {
    ans += "0 ";
  }
  string nowColor = tmp;
  for(int i = 0; i < (int)str.length();) {
    string reversedColor = (nowColor == "b")? "w": "b";
    int reversedColorIdx = str.find(reversedColor, i);
    // cout << reversedColorIdx << endl;
    if(reversedColorIdx == -1) {
      reversedColorIdx = (int)str.length();
    }
    ans += int2str(reversedColorIdx - i);
    nowColor = reversedColor;
    i = reversedColorIdx;
    if(i < (int)str.length()) {
      ans += " ";
    }
  }
  cout << ans << endl;
}

string int2str(int input) {
  stringstream stream;
  stream << input;
  return stream.str();
}
