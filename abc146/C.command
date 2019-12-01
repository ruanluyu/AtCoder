echo =============start=============
cd `dirname $0`
g++ C.cpp -I../include/ -std=c++11 -O2 -o C 
chmod u+x C
./C
echo ============= end =============
