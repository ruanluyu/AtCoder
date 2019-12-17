echo =============Debug-start=============
cd `dirname $0`
g++ P1001.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_P1001
chmod u+x Debug_P1001
./Debug_P1001
echo =============Debug- end =============
