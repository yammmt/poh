#include <iostream>

using namespace std;

int main(void) {
  string str;
  cin>>str;
  if(str.find("help") == -1) {
    cout<<str<<endl;
  }
  else {
    cout<<"SOS"<<endl;
  }
  return 0;
}
