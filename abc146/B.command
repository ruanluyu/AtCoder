echo =============start=============
cd `dirname $0`
g++ B.cpp -I../include/ -std=c++11 -O2 -o B 
chmod u+x B
./B
echo ============= end =============
