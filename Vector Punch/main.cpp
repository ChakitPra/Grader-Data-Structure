#include <iostream>
#include <vector>
using namespace std;
vector<string> punch(vector<string> &v, vector<string>::iterator
it,int k) {
  //write some code here
  //don’t forget to return something
  auto last = it+k;
  auto first = it-k;
  int sz = v.size()-1;
  if((it-v.begin()+k)>sz){
    last = v.begin()+sz;
  }
  if((it-v.begin()-k)<0){
    first = v.begin();
  }
    while(last != first){
        v.erase(last);
        last--;
    }v.erase(last);
    return v;
}
int main() {
  int n,j,k;
  cin >> n >> j >> k;
  vector<string> v(n);
  for (int i = 0;i < n;i++) {
cin >> v[i]; }
  cout << "Result after punch" << endl;
  vector<string> result = punch(v, v.begin() + j, k);
  for (auto &x : result) {
    cout << x << endl;
  }
}
