//PLUS ULTRA

#include<bits/stdc++.h>
using namespace std;
     
     
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define pb push_back 
#define mp make_pair
#define forn(i,st,n) for(int i = st; i < n ; i++)
#define nfor(i,st,n) for(int i = st; i >= n ; i--)

typedef long long ll;
typedef pair <int , int> pii;

const int N = 1e5 + 10 , mod =  1000000007;



int main(){
    SPEED;

    int n , k; cin >> n >> k;

    int arr[n]; 

    forn(i,0,n)cin >> arr[i];

    sort(arr , arr + n );

    int ans = 0;

    forn(i,0,n-2){
    	if(5 -max(arr[i] , max(arr[i+1] , arr[i+2])) < k){
    		break;
    	}

    	i += 2;

    	ans++;
    }


    cout << ans << endl;


    

    
    return 0;
}
      
       
