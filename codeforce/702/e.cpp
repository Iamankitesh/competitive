#include<bits/stdc++.h>
using namespace std;

using ll = long long ;
using pii = pair<int , int>;
using pll = pair<ll, ll>;


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
ll cdiv(ll a, ll b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
ll fdiv(ll a, ll b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down


void solve() {

    int n  , inp; cin >> n;
    std::vector<pii> arr(n);
    
    FOR(i,0,n){
    	cin >> inp;
    	arr[i] = {inp , i};
    }

    sor(arr);

    ll sum[n] ;
    memset(sum , 0 , sizeof(sum));

    sum[0] = arr[0].ff;

    FOR(i,1,n){
    	sum[i] = arr[i].ff + sum[i-1];
    }

    int st = 0;

    FOR(i,0,n-1){
    	if(sum[i] < arr[i+1].ff)st = i + 1;
    }

    std::vector<int> v;

    FOR(i ,st ,n ){
    	v.pb(arr[i].ss);
    }

    sor(v);

    cout << (int)v.size() << "\n";
    for(auto a: v){
    	cout << a + 1 << " ";
    }
    cout << "\n";



}

int main() {
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);




    #ifndef ONLINE_JUDGE
        freopen("/home/ankitesh/Desktop/competitive/input.txt", "r", stdin);
        freopen("/home/ankitesh/Desktop/competitive/output.txt", "w", stdout);
    #endif

    // time_t start , end;

    // time(&start);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }


    // time(&end);

    // printf("time: %f", (double)end - start );

    return 0;
}


