#include <bits/stdc++.h>
using namespace std;
vector <vector<int>> arr(5,vector <int>(5));
int chkrow(vector <vector<int>> &mat){
    for(int i=0;i<mat.size();i++){
        int sum=0;
        for(auto &x:mat[i]){
            sum+=x;
        }
        if(sum&1) return i;
    }
    return -1;
}
int chkcol(vector <vector<int>> &mat){
    for(int i=0;i<mat.size();i++){
        int sum=0;
        for(int j=0;j<mat.size();j++){
            sum+=mat[j][i];
        }
        if(sum&1) return i;
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >> arr[i][j];
        }
    }
    cout << chkrow(arr) << " " << chkcol(arr);
    return 0;
}
