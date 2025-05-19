#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int d,m;
    int day[]={20,19,21,20,21,22,23,23,23,24,22,22};
    string rasi[]={"aquarius","pisces","aries","taurus","gemini","cancer","leo","virgo","libra","scorpio","sagittarius","capricorn"};
    cin >> d >> m;
    if(d<day[m-1]){
        cout << rasi[(m+10)%12];
    }
    else{
        cout << rasi[m-1];
    }
    return 0;
}
