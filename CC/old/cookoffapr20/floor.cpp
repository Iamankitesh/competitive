//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

	int n, q; cin >> n >> q;

	int f , d;
	int prev = 0;

	ll ans = 0;

	forn(i,0,q){
		cin >> f >> d;

		ans += abs(prev- f) + abs(f - d);

		prev = d; 

	}
    
	cout << ans << endl;


}

int main(){
    SPEED;

    int t; cin >> t;
    while(t--) solve();

    return 0;
}
      
       
