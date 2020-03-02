echo =============Debug-start=============
cd `dirname $0`
g++ E.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_E
chmod u+x Debug_E
./Debug_E
echo =============Debug- end =============
