#include <iostream>

using namespace std;

int main() {
  int c1, p1;
  int c2, p2;
  cin>>c1>>p1;
  cin>>c2>>p2;
  double cp1 = (double)c1/p1;
  double cp2 = (double)c2/p2;
  if(cp1 > cp2) {
    cout<<"1"<<endl;
  }
  else {
    cout<<"2"<<endl;
  }
}
