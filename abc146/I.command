echo =============start=============
cd `dirname $0`
g++ I.cpp -I../include/ -std=c++11 -O2 -o I 
chmod u+x I
./I
echo ============= end =============
