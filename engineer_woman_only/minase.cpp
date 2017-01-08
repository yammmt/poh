#include <iostream>
#include <vector>

#define DUMMY_DATA 99999

using namespace std;

int main() {
  int m, n, tmp;
  // Price, Sum, Discount, Customer, Amount?
  vector<int> p, s, d, c, a, total_price;
  p.push_back(DUMMY_DATA);
  s.push_back(DUMMY_DATA);
  d.push_back(DUMMY_DATA);
  c.push_back(DUMMY_DATA);
  a.push_back(DUMMY_DATA);
  total_price.push_back(DUMMY_DATA);

  cin>>n;
  for(int i=1; i<=n; i++) {
    cin>>tmp;
    p.push_back(tmp);
    cin>>tmp;
    s.push_back(tmp);
    cin>>tmp;
    d.push_back(tmp);
  }

  cin>>m;
  int c_now, a_now;
  int discount_num;
  for(int i=1; i<=m; i++) {
    cin>>tmp;
    c.push_back(tmp);
    c_now = tmp;
    cin>>tmp;
    a.push_back(tmp);
    a_now = tmp;

    discount_num = a_now/s[c_now];
    tmp = p[c_now] * a_now - discount_num * d[c_now];
    total_price.push_back(tmp);
  }
  for(int i=1; i<=m; i++) {
    cout<<total_price[i]<<endl;
  }

  return 0;
}
