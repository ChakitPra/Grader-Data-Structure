#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &v,int a,int b) {
 //write your code only in this function
 vector<int> ini;
 vector<int> en;
 vector<int> rev;
 vector<int> ans;
 vector<int> reven;
 int len;
 
 for(int i=0;i<a;i++){
    ans.push_back(v[i]);
 }
 for(int i=a;i<(b+1);i++){
    rev.push_back(v[i]);}
 len = rev.size();
 for(int i=len-1;i>=0;i--){
     ans.push_back(rev[i]);
 }
 for(int i=b+1;i<v.size();i++){
     ans.push_back(v[i]);
 }
 v = ans;
}

int main() {
 //read input
 int n,a,b;
 cin >> n;
 vector<int> v;
 for (int i = 0;i < n;i++) {
 int c;
 cin >> c;
 v.push_back(c);
 }
 cin >> a >> b;
 //call function
 reverse(v,a,b);
 //display content of the vector
 for (auto &x : v)
 cout << x << " ";
 cout << endl;
}