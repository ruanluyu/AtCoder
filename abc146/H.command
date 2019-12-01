echo =============start=============
cd `dirname $0`
g++ H.cpp -I../include/ -std=c++11 -O2 -o H 
chmod u+x H
./H
echo ============= end =============
