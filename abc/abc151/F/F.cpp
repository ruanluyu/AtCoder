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
typedef pair<double,double> pdd;
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
#define MAXN 55
#define eps 0.00000000001
#define INF 1000000
//---------------------

ll n;
ll x[MAXN],y[MAXN];

bool g0(double a){
	return a > -eps;
}

bool leseq(double a, double b){
	return g0(b-a);
}

bool grteq(double a, double b){
	return g0(a-b);
}

bool eq(double a,double b){
	return abs(a-b)<eps;
}

double dst(pdd a, pdd b){
	return sqrt((a.P1-b.P1)*(a.P1-b.P1)+(a.P2-b.P2)*(a.P2-b.P2));
}

pdd cen(pdd a, pdd b){
	return pdd((a.P1+b.P1)/2,(a.P2+b.P2)/2);
}

pdd mult(double t, pdd &a){
	return pdd(t*a.P1,t*a.P2);
}

pdd add(pdd a, pdd b){
	return pdd(a.P1+b.P1,a.P2+b.P2);
}

void rot90(pdd &a){
	pdd tp = a;
	a.P1 = -tp.P2;
	a.P2 = tp.P1;
}

void getintersect(double r, pdd a, pdd b, pdd &c, pdd &d){
	double dt = dst(a,b);
	DBPRT(dt);
	if(eq(dt,2*r)){c=d=cen(a,b);return;}
	if(dt>2*r) {c=d=pdd(-INF,-INF);return;}
	pdd ct = cen(a,b);
	DBPRT(ct);
	pdd vn = pdd(a.P1-ct.P1,a.P2-ct.P2);
	double vnlen = dst(vn,pdd(0,0));
	vn.P1 /= vnlen; vn.P2 /= vnlen;
	DBPRT(vn);
	rot90(vn);
	double len = sqrt(r*r-dt*dt/4);
	DBPRT(len);
	c = add(mult(len,vn),ct);
	d = add(mult(-len,vn),ct);
}

int main(){
	cin >> n;
	REP(i,n) cin >> x[i] >> y[i];

	double br=2000,sr=0;

	REP(k,50){
		double curr = (br+sr)/2;
		DBPRT(curr);
		queue<pdd> q;
		REP2D(i,j,n,n){
			if(i==j) continue;
			pdd c,d;
			getintersect(curr,pdd(x[i],y[i]),pdd(x[j],y[j]),c,d);
			if(c.P1 == -INF) continue;
			DBPRT(c);DBPRT(d);
			if(c==d) q.push(c);
			else {q.push(c);q.push(d);}
		}
		bool found = false;
		while(!q.empty()){
			pdd tp = q.front();
			DBPRT(tp);
			found = true;
			REP(i,n){
				if(!leseq(dst(tp,pdd(x[i],y[i])),curr)){found = false;break;}
			}
			if(found){
				break;
			}
			q.pop();
		}
		if(found) br = curr;
		else sr = curr;
	}
	printf("%.14f\n",br);

	return 0;
}







