echo =============Debug-start=============
cd `dirname $0`
g++ B.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_B
chmod u+x Debug_B
./Debug_B
echo =============Debug- end =============
