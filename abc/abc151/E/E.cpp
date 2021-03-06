#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(long long i=0;i<(n);i++)
#define REP1(i,n) for(long long i=1;i<=(n);i++)
#define REP2D(i,j,h,w) for(long long i=0;i<(h);i++) for(long long j=0;j<(w);j++)
#define REP2D1(i,j,h,w) for(long long i=1;i<=(h);i++) for(long long j=1;j<=(w);j++)
#define PER(i,n) for(long long i=((n)-1);i>=0;i--)
#define PER1(i,n) for(long long i=(n);i>0;i--)
#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define FORE(i,a,b) for(long long i=(a);i<=(b);i++)
#define ITE(arr) for(auto ite=(arr).begin();ite!=(arr).end();++ite)
#define ALL(a) ((a).begin()),((a).end())
#define RANGE(a) (a),((a)+sizeof(a))
#define ZERO(a) memset(a,0,sizeof(a))
#define MINUS(a) memset(a,0xff,sizeof(a))
#define YNPRT(b) cout<<((b)?"Yes":"No")<<endl
#define ENTER printf("\n")
#define REV(arr) reverse(ALL(arr))
#define PRT(a) cout<<(a)<<endl

#ifdef DEBUG
#define DBPRT(a) cout << "[Debug] - " << #a << " : " << (a) << endl
#define DBSTART if(1){
#define DBEND }
#define PRTLST(arr,num) REP(_i,num) cout<<_i<<" - "<<arr[_i]<<endl;
#define PRTLST2(arr2,d1,d2) REP(_i,d1) REP(_j,d2) cout<<_i<<","<<_j<<" : "<<arr2[_i][_j]<<endl;
#define PRTLST2D(arr2,d1,d2) do{cout<<"L\t";REP(_i,d2) cout<<_i<<"\t"; cout<<endl; REP(_i,d1){cout<<_i<<"\t";REP(_j,d2){cout<<arr2[_i][_j]<<"\t";}cout<<endl;}}while(0);
#else
#define DBPRT(a) if(0){}
#define DBSTART if(0){
#define DBEND }
#define PRTLST(arr,num) if(0){}
#define PRTLST2(arr2,d1,d2) if(0){}
#define PRTLST2D(arr2,d1,d2) if(0){}
#endif

#define TOSUM(arr,sum,n) {sum[0]=arr[0];REP1(i,n-1) sum[i]=sum[i-1]+arr[i];}

#define MIN(target,v1) (target)=min(target,v1)
#define MAX(target,v1) (target)=max(target,v1) 
#define P1 first
#define P2 second
#define PB push_back
#define UB upper_bound
#define LB lower_bound
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
const int INF_INT = 2147483647;
const ll INF_LL = 9223372036854775807LL;
const ull INF_ULL = 18446744073709551615Ull;
const ll P = 92540646808111039LL;
const int Move[4][2] = {-1,0,0,1,1,0,0,-1};
const int Move_[8][2] = {-1,0,-1,-1,0,1,1,1,1,0,1,-1,0,-1,-1,-1};
template<typename T1,typename T2>
ostream& operator<<(ostream& os,const pair<T1,T2>& p) {os<<"( "<<p.P1<<" , "<<p.P2<<" )";return os;}
template<typename T>
ostream& operator<<(ostream& os,const vector<T>& v) {ITE(v) os << (ite-v.begin()) << " : " << *ite <<endl;return os;}
template<typename T>
ostream& operator<<(ostream& os,const set<T>& v) {os<<" { ";ITE(v) {os<<*ite;if(ite!=--v.end()){os<<" , ";}} os<<" } ";return os;}
template<typename T1,typename T2>
ostream& operator<<(ostream& os,const map<T1,T2>& m) {ITE(m) {os<<ite->P1<<"\t\t|->\t\t"<<ite->P2<<endl;} return os;}



//---------------------
#define MOD 1000000007
#define MAXN 100005
//---------------------
ll inv[MAXN];
ll fac[MAXN];
ll facinv[MAXN];


ll modpow(ll a, ll b){
  	if(b==-1) return inv[a];
  	if(b<-1) {
  		a=inv[a%MOD];
  		b*=-1;
  	}
	if(b==0) return 1;
	if(b==1) return a%MOD;
	ll ret=modpow(a%MOD,b>>1)%MOD;
	return (ret*ret%MOD)*((b%2)?(a%MOD):1)%MOD;
}

ll fermat(ll a){
  	if(a%MOD) return -1;
	return modpow(a,MOD-2);
}

inline ll modmult(ll a, ll b){
	return (a%MOD)*(b%MOD)%MOD;
}

inline ll modmult(ll a, ll b ,ll c){
	return (a%MOD)*(b%MOD)%MOD*(c%MOD)%MOD;
}


inline ll modfact(ll n){
	if(n==0 || n==1) return 1;
	if(n>=MOD) return 0;
	return fac[n];
}

inline ll modcomb(ll m, ll n){
  	if(m>=MOD || n>=MOD || n<0 || m<0) return -1;
  	if(n==0||n==m) return 1;
  	  	if(m<n) return 0;
	return fac[m]*facinv[m-n]%MOD*facinv[n]%MOD;
}
      
void makelist(){
  	inv[0]=-1;
  	inv[1]=1;
	for(ll i=2;i<MAXN;i++) inv[i]=(MOD-MOD/i)*inv[MOD%i]%MOD;
	fac[0]=1;
	REP1(i,MAXN) fac[i]=(fac[i-1]*i)%MOD;
	facinv[MAXN-1] = modpow(fac[MAXN-1],MOD-2);
	PER(i,MAXN-1) facinv[i]=(facinv[i+1]*(i+1))%MOD;
}


void makepowlist(ll *list,ll a,ll num){
	list[0]=1;
	REP1(i,num-1){
		list[i] = modmult(list[i-1],a);
	}
}


void makepowinvlist(ll *list, ll a,ll num){
	list[0]=1;
	REP1(i,num-1){
		list[i] = modmult(list[i-1],inv[a]);
	}
}

ll n,k;
ll a[MAXN];

int main(){
  	makelist();
  	cin >> n >> k;
  	REP1(i,n) cin >> a[i];
  	sort(a+1,a+1+n);
  	ll res = 0;
  	if(k==1){
  		res = 0;
  	}
  	else{
  		ll smax=0; ll smin=0;
  		FORE(i,k,n) smax = (smax + (modcomb(i-1,k-1)*a[i])%MOD)%MOD;
  		FORE(i,1,n-k+1) smin = (smin + (modcomb(n-i,k-1)*a[i])%MOD)%MOD;
  		res = (smax - smin + MOD)%MOD;
  	}
	PRT(res);
	return 0;
}






