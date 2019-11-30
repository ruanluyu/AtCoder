echo =============start=============
cd `dirname $0`
g++ F.cpp -I../include/ -std=c++11 -O2 -o F 
chmod u+x F
./F
echo ============= end =============
