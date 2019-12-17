echo =============Debug-start=============
cd `dirname $0`
g++ P1000.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_P1000
chmod u+x Debug_P1000
./Debug_P1000
echo =============Debug- end =============
