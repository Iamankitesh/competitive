//PLUS ULTRA


#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)
#define ss second
#define ff first
#define ll long long 

typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;

void solve(){

    int n ;

    cin >> n;

    int arr[n];
    forn(i,0,n)cin >> arr[i];

    sort(arr , arr + n);

    int ans = 0 , pep = 0;

    forn(i,0,n){
        pep++;
        if(arr[i] <= pep  ){
            ans++;
            pep = 0;
        }
    }

    cout << ans << "\n";

    
    
        


}

int main(){
    SPEED;

    int t = 1; 
    
    cin >> t;
    

    while(t--) solve();




    return 0;
}
      
       
