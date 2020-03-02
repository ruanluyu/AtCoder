echo =============Debug-start=============
cd `dirname $0`
g++ J.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_J
chmod u+x Debug_J
./Debug_J
echo =============Debug- end =============
