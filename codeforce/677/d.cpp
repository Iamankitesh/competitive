#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
using pii = pair<int , int>;
using pll = pair<ll,ll>;
     

//pairs
#define ss second
#define ff first


// vectors
#define sz(x) (int)(x).size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend() 
#define sor(x) sort(all(x)) 
#define rsz resize
#define ins insert 
#define ft front() 
#define bk back()
#define pf push_front 
#define pb push_back
#define eb emplace_back 
#define lb lower_bound 
#define ub upper_bound 

// loops
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define F0R(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)

//arrays
#define mem(x , y) memset(x , y , sizeof(x) )

const int N = 1e5 + 10 , mod =  1000000007;

//helper funcs
ll cdiv(ll a, ll b) { return a/b+((a^b)>0&&a%b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a/b-((a^b)<0&&a%b); } // divide a by b rounded down


void solve(){
    int inp;

    int n; cin >> n;
    std::vector<int> arr(n);
    F0R(i,n){
        cin >> arr[i]; 
    }

    std::vector<pii> roads;
    bool flag[n];
    mem(flag , false);
    flag[0] = true;
    FOR(i,1,n){
        if(arr[i] != arr[0] ){
            roads.pb({1 , i+1});
            flag[i] = true;
        }
    }

    int idx = -1;
    FOR(i,1,n){
        if(flag[i]){
            idx = i;
            break;
        }
    }

    if(idx == -1){
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    FOR(i,1,n){
        if(!flag[i]){
            flag[i] = true;
            roads.pb({i+1 , idx+1});
        }
    }
    

    FOR(i,0,sz(roads)){
        cout << roads[i].ff << " " << roads[i].ss << "\n";
    }
        


    
    


}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

/*
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
*/

    int t = 1;     
    cin >> t;
    
    while(t--){
        solve();
    }

    return 0;
}
      
       