echo =============start=============
cd `dirname $0`
g++ D.cpp -I../include/ -std=c++11 -O2 -o D 
chmod u+x D
./D
echo ============= end =============
