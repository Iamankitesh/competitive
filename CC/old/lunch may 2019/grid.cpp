#include<bits/stdc++.h>
using namespace std;
     
     
//#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define ll long long
#define sd(x) scanf("%d",&x)
#define sld(x) scanf("%lld",&x)
#define pld(x) printf("%lld\n",x)
#define pd(x) printf("%d\n",x)
     
     
int main(){
            
	int t; sd(t);

	while(t--){
		int n, m ,k;
		sd(n); sd(m); sd(k);

		ll ans = 0;
		if(k==1)ans = n*m;
		else if(n % k !=0 && m % k != 0){
			ans = n*m;
		}else ans = -1;

		pld(ans);

	}          
     
     
        
    return 0;
}
