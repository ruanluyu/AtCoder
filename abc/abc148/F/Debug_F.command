echo =============Debug-start=============
cd `dirname $0`
g++ F.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_F
chmod u+x Debug_F
./Debug_F
echo =============Debug- end =============
