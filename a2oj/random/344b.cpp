#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
#define moder 1000000007

ll moding( ll x , ll y ){

    // for x % y

    ll ans = x % y;

    if(ans < 0)ans = ans + x ;

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

    int a, b , c;
    sd(a); sd(b); sd(c);


    int odd = 0;

    int x , y, z;

    x = ( a + b - c)/2 ;

    y = (b + c - a)/2 ;

    z = (a + c - b)/2 ;

    if(x < 0 || y < 0 || z < 0 || (a+b+c)%2 == 1){
        printf("Impossible\n");
    }else{
        printf("%d %d %d\n",x  , y, z );
    }
    
    return 0;
}

