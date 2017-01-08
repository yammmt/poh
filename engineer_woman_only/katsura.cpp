#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, tmp;
  vector<int> c, r;
  cin>>n;
  for(int i=0; i<n; i++) {
    cin>>tmp;
    c.push_back(tmp);
  }
  for(int i=0; i<n; i++) {
    cin>>tmp;
    r.push_back(tmp);
  }
  for(int i=0; i<n; i++) {
    for(int j=0; j<n; j++) {
      cout<<r[i]+c[j];
      if(j == n-1) {
        cout<<endl;
      }
      else {
        cout<<" ";
      }
    }
  }
  return 0;
}
