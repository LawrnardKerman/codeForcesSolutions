#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int a=0; a<t; a++){
        int x,n; cin>>n>>x;
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];

        }
        sort(b.begin(), b.end());
        int h=1;
        int count=0;
        while(count<x){
            bool flag=1;
            for(int i=0; i<=h; i++){
                if(b[i]>=i){
                    count+=i;
                    break;
                    flag=0;
                }
            }
            if(flag){
                count+=n;
            }
            h++;
        }
        cout<<h<<endl;
    }

}