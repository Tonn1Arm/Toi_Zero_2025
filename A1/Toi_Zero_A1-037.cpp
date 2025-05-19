#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int val[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    string num[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
    int n;
    cin >> n;
    for(int i=0;i<13;i++){
        if(n>=val[i]){
            while(n>=val[i]){
                cout << num[i];
                n-=val[i];
            }
        }
    }
    return 0;
}
