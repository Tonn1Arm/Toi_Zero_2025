#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    string roman[9]={"I","II","III","IV","V","VI","VII","VIII","IX"};
    cin >> x;
    if(x>9 || x==0){
        cout << "Error : Out of range";
    }
    else if(x<0){
        cout << "Error : Please input positive number";
    }
    else{
        cout << roman[x-1];
    }
    return 0;
}
