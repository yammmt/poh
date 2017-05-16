#include <iostream>

#define MAX_ROAD_LENGTH 101;

using namespace std;

int main(void) {
  string road, tmpStr;
  int hp, damage = 0;
  getline(cin, road);
  cin >> hp;
  for(int i = 0; i < road.length();) {
    i = road.find("1", i);
    if(i == -1) {
      i = MAX_ROAD_LENGTH
    }
    else {
      damage++;
      i++;
    }
  }
  int ansInt = hp - damage;
  string ansStr = (ansInt <= 0)? "No": to_string(ansInt);
  cout << ansStr << endl;
}
