//Lion's Sin Escanor 

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
// #define sd(x) scanf("%d",&x)
// #define sld(x) scanf("%lld",&x)
// #define pld(x) printf("%lld\n",x)
// #define pd(x) printf("%d\n",x)
#define moder 1000000007
#define forn(i,n) for(int i = 0; i < n ; i++)

ll moding( ll x , ll y ){
   
    ll ans = x % y;

    if(ans < 0)ans = ans + y ;

    return ans ;

}


bool isprime(ll n){
    if(n==2) return true;
    if(n==3) return true;
    if(n%2 == 0) return false;
    if(n%3 == 0) return false;

    ll i = 5,w=2;

    while(i*i <= n){
        if(n%i == 0)return false;

        i += w;
        w = 6 - w;
    }

    return true;
}




int main(){
    SPEED;
    int n , m , d;
    cin >> n >> m >> d;

    int arr[n*m];
    n = n*m;

    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }

    sort(arr , arr + n);
    
    ll ans = 0;

    for(int i = 0; i < n; i++){
        if(abs(arr[i] - arr[n/2]) % d != 0 ){
            cout << "-1\n";
            return 0;
        }else{
            ans += (abs(arr[i] - arr[n/2]) / d);
            // cout << ans<< " ";
        }
    }

    cout << ans << "\n";

    


           
     
     
        
    return 0;
}
      
       