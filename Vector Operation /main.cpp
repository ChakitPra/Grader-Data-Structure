#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> ans;
    int a, num, len;
    string co;
    cin >> a;
    for(int i=0;i!=a;i++){
        cin >> co;
        if(co=="pb"){
            cin >> num;
            ans.push_back(num);
        }else if(co=="sa"){
            sort(ans.begin(),ans.end());
        }else if(co=="sd"){
            sort(ans.rbegin(),ans.rend());
        }else if(co=="r"){
            reverse(ans.begin(),ans.end());
        }else if(co=="d"){
            cin >> num;
            ans.erase(ans.begin()+num);
        }
    }
    len = ans.size();
    for(int j =0;j!=len;j++){
        cout << ans[j] << " ";
    }
}