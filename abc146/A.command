echo =============start=============
cd `dirname $0`
g++ A.cpp -I../include/ -std=c++11 -O2 -o A 
chmod u+x A
./A
echo ============= end =============
