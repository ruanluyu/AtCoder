echo =============Debug-start=============
cd `dirname $0`
g++ P1005.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_P1005
chmod u+x Debug_P1005
./Debug_P1005
echo =============Debug- end =============
