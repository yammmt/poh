#include <iostream>

using namespace std;

int main() {
  int num_y=0, num_n=0;
  for(int i=0; i<5; i++) {
    string str;
    getline(cin,str);
    if(str == "yes") {
      num_y++;
    }
    else {
      num_n++;
    }
  }
  if(num_y > num_n) {
    cout<<"yes"<<endl;
  }
  else {
    cout<<"no"<<endl;
  }
}
