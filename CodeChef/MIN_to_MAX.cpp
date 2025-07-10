#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int min=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(min>a[i]) min=a[i];
        }
        int operations=0;
        for(int i=0;i<n;i++){
            if(a[i]>min) {a[i]=min;operations++;}
        }
        cout<<operations<<endl;
    }

}
