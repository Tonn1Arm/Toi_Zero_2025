#include <iostream>
using namespace std;

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n+1],b[m+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=m;i++){
        scanf("%d",&b[i]);
    }
    a[0]=b[0]=0;
    int cnt=1;
    for(int it=1;it<=n;it+=2){
        for(int i=1;i<=m;i+=2){
            if(a[it]>b[i] && a[it-1]<b[i-1]) cnt++;
            else if(a[it]<b[i] && a[it-1]>b[i-1]) cnt++;
        }
        for(int i=2;i<=m;i+=2){
            if(a[it]>b[i-1] && a[it-1]<b[i]) cnt++;
            else if(a[it]<b[i-1] && a[it-1]>b[i]) cnt++;
        }
    }
    for(int it=2;it<=n;it+=2){
        for(int i=2;i<=m;i+=2){
            if(a[it]>b[i] && a[it-1]<b[i-1]) cnt++;
            else if(a[it]<b[i] && a[it-1]>b[i-1]) cnt++;
        }
        for(int i=1;i<=m;i+=2){
            if(a[it]>b[i-1] && a[it-1]<b[i]) cnt++;
            else if(a[it]<b[i-1] && a[it-1]>b[i]) cnt++;
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i]==b[j]){
                if(i%2==j%2) cnt++;
            }
        }
    }
    printf("%d",cnt);
    return 0;
}
/*
5 7
2 7 8 15 20
3 4 5 7 10 16 21

3 3
10 20 30
1 10 20

2 4
10 20
5 10 15 20

4 8
10 20 30 40
5 10 15 20 25 30 35 40
*/
