#include <iostream>
#include <string>
#include<vector>

using namespace std;

/* struct value{
        string Candidate_name;
        int count;
        int val;
};

struct Candidate{
    struct value val;
    struct Candidate* next;
    Candidate(struct value data):
            val(data){
        }
};

Candidate* new_candidate(Candidate* head, struct value data){
    Candidate* newCandidate = new Candidate(data);
    Candidate* p = head;
    if(p == nullptr){// check if it is null
        head = newCandidate;
    }else{
        while(p->next != nullptr){
            p = p->next;
        }
        p->next = newCandidate;
    }
} */

int main(){
    int n; cin >> n;
    vector<string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int  ma = 0;
    string res;
    for(int i = 0; i < n; i++){
        string kouho = v[i];
        int cnt = 0;
        for(int j = 0; i < n; j++) if(v[j] == kouho) cnt++;
        if(cnt > ma){
            ma = cnt;
            res = kouho;
        }
    }
cout << res << endl;
    
}