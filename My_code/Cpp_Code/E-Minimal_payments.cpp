#include<bits/stdc++.h>

using namespace std;
long long ceil(long long x, long long y){
    return x/y+!!(x%y);
}

vector<long long>a;
map<long long, long long>memo;////////////////////////???
long long dfs(long long x, int beg){
    if(memo.find(x)!=memo.end())return memo[x];
    if(beg== a.size()-1) return x/a.back();
    if(x==0)return 0;
    long long crr = a[beg], nxt = a[beg+1];
    long long r = x%nxt/crr;
    long long ans = dfs(x/nxt*nxt,beg+1)+r;
    if(r)ans =  min(ans,dfs(ceil(x,nxt)*nxt,beg+1)+(nxt/crr-r));
    return memo[x]=ans;
}

int main(){
    int n;
    long long x;
    cin >> n >> x;
    a.resize(n);
    for(int i = 0; i < n; i++)cin >> a[i];
    cout << dfs(x,0) << endl;
}