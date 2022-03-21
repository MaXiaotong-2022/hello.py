#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,q; cin >> n >> q;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(int i = 0; i < q; i++){
        int x; cin >> x;
        int ok = n, ng = -1;
        while(ok - ng > 1){
            int md = (ok + ng) / 2;
            if(v[md] >= x) ok = md;
            else ng = md;
        }
        cout << n - ok << endl;
    }

}


/* N,Q = map(int,input().split())
A=[(a,10**9) for a in map(int,input().split())]
X=[]
for i in range(Q):
    x=int(input())
    X.append((x,i))

AX=sorted(A+X)[::-1]

ans=[0]*Q
cnt=0
for x,i in AX:
    if i<Q:
        ans[i]=cnt
    else:
        cnt+=1
    
print(*ans,sep="\n") */