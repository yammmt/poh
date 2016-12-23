#include <iostream>
#include <sstream>

#define N (10)

using namespace std;

string int2Str(int num);
int    str2Int(string str, int i);
string convertCode(string code_in, int rule[N]);

int main(void) {
  int tmp,  encode[N], decode[N];
  string code_in, code_out, mode;

  for(int i=0; i<N; i++) {
    cin>>tmp;
    encode[i] = tmp;
    decode[tmp] = i;
  }

  cin>>mode>>code_in;

  if(mode == "encode") {
    code_out = convertCode(code_in, encode);
  }
  else if(mode == "decode") {
    code_out = convertCode(code_in, decode);
  }
  else {
    cout<<"Error !"<<endl;
  }
  cout<<code_out<<endl;

  return 0;
}

string int2Str(int num) {
  stringstream ss;
  ss<<num;
  return ss.str();
}

int str2Int(string str, int i) {
  stringstream ss;
  int num;
  ss<<str[i];
  ss>>num;
  return num;
}

string convertCode(string code_in, int rule[N]) {
  string code_out;
  for(int i=0; i<code_in.length(); i++) {
    code_out += int2Str(rule[str2Int(code_in, i)]);
  }
  return code_out;
}
