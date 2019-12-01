echo =============start=============
cd `dirname $0`
g++ E.cpp -I../include/ -std=c++11 -O2 -o E 
chmod u+x E
./E
echo ============= end =============
