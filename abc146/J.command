echo =============start=============
cd `dirname $0`
g++ J.cpp -I../include/ -std=c++11 -O2 -o J 
chmod u+x J
./J
echo ============= end =============
