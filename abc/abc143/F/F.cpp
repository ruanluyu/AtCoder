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
#else
#define DBPRT(a) do{}while(0)
#define DBSTART if(0){
#define DBEND }
#endif
#define PRTLST(arr,num) REP(_i,num) cout<<_i<<" - "<<arr[_i]<<endl;
#define PRTLST2(arr2,d1,d2) REP(_i,d1) REP(_j,d2) cout<<_i<<","<<_j<<" : "<<arr2[_i][_j]<<endl;
#define PRTLST2D(arr2,d1,d2) do{cout<<"L\t";REP(_i,d2) cout<<_i<<"\t"; cout<<endl; REP(_i,d1){cout<<_i<<"\t";REP(_j,d2){cout<<arr2[_i][_j]<<"\t";}cout<<endl;}}while(0);

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
#define MAXN 300005
//---------------------

ll n;
ll a[MAXN];
ll b[MAXN+1];
ll sum[MAXN+1];
ll ans[MAXN+1];

int main(){
	cin >> n;
	REP(i,n) cin >> a[i];
	sort(a,a+n);
	ll lastn = -1;
	ll id = -1;

	DBSTART
	DBPRT("a");
	PRTLST(a,n);
	ENTER;
	DBEND



	REP(i,n) if(lastn!=a[i]){id++;lastn = a[i];a[id] = 1;}else{a[id]++;}
	ll m = id+1;
	sort(a,a+m);

	DBSTART
	DBPRT("a");
	PRTLST(a,m);
	ENTER;
	DBEND

	id = 0;
	
	ZERO(b);
	lastn = -1;
	REP(i,m){
		if(a[i]!=lastn){
			lastn = a[i];
			while(id<a[i]){
				id++;
				b[id] = m-i;
			}
		}
	}

	DBSTART
	DBPRT("b");
	PRTLST(b,id+2);
	ENTER;
	DBEND

	
	ZERO(sum);
	TOSUM(b,sum,(n+1));

	DBSTART
	DBPRT("sum");
	PRTLST(sum,n+1);
	ENTER;
	DBEND

	ll f[MAXN+1];
	ZERO(f);
	REP1(i,n){
		f[i] = (ll)( ((double)sum[i]) / i );
	}

	

	ZERO(ans);
	f[0] = n;

	DBSTART
	DBPRT("f");
	PRTLST(f,n+1);
	DBEND

	REP(i,n+1){
		FORE(j,f[i+1]+1,f[i]) ans[j] = i;
	}
	REP1(i,n) PRT(ans[i]);

	return 0;
}







