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

    int n  , m; cin >> n >> m;
    std::vector<int> arr(n);
    
    for(auto &a : arr){
        cin >> a;
    }

    int rem[m];
    memset(rem , 0 , sizeof(rem));

    for(int i = 0; i < n;  i++){
    	rem[arr[i]%m]++;
    }

    int ans = 0;

    if(rem[0] != 0)ans++;
    if(m % 2 == 0 && rem[m/2] != 0){
    	ans++;
    }

    int l , h;
    for(int i = 1; i <= (m-1)/2 ; i++ ){
    	l = min(rem[i] , rem[m-i]);
    	h = max(rem[i] , rem[m-i]);

    	if(h == 0)continue;
    	if(l == 0){
    		ans += h;
    		continue;
    	}

    	ans++;

    	if(h > l+1){
    		ans += (h - (l+1));
    	}

    }
    
    cout << ans << "\n";


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


