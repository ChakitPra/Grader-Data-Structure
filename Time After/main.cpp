#include <iostream>

using namespace std;
void change(int h,int m){
    if(h<10 && m<10){
        cout << "0" << h << " " << "0" << m;
    }else if(h<10){
        cout << "0" << h << " " << m;
    }else if(m<10){
        cout << h << " " << "0" << m;
    }else{
        cout << h << " " << m;
    }
}

int main()
{
    int hh,mm,a;
    cin >> hh >> mm;
    cin >> a;
    hh = (hh+a/60)%24;
    mm = (mm+a%60);
    if((mm/60) == 1){
        hh++;
        hh%=24;
        mm%=60;
    }
    change(hh,mm);
}