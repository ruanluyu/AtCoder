echo =============start=============
cd `dirname $0`
g++ G.cpp -I../include/ -std=c++11 -O2 -o G 
chmod u+x G
./G
echo ============= end =============
