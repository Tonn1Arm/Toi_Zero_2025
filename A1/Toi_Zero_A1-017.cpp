#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[2][3];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        if(arr[0][i]==arr[1][i]){
            if(i==2){cout << 0;break;}
            continue;
        }
        else if(arr[0][i]>arr[1][i]){
            cout << 2;
            break;
        }
        else{
            cout << 1;
            break;
        }
    }
    return 0;
}
