//It doesn't matter as long as you rise to the top - Katsuki Bakugo
#include<bits/stdc++.h>
using namespace std;
     
     
#define Fast_as_duck ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define rev(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

    int n; cin >> n;
    int arr[2*n];
    forn(i,0,2*n)cin >> arr[i];

    std::vector<int> v;

    int idx = 0;
    v.pb(arr[0]);

    forn(i,1,2*n){
        if(idx < v.size() && arr[i] == v[idx]){
            // v.pb(arr[i]);
            idx++;
        }else{
            // idx++;
            v.pb(arr[i]);
        }
    }

    forn(i,0,n){
        cout << v[i] << " ";
    }

    cout << "\n";


    
    

    
    
        


}

int main(){
    Fast_as_duck;

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
      
       
