echo =============Debug-start=============
cd `dirname $0`
g++ G.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_G
chmod u+x Debug_G
./Debug_G
echo =============Debug- end =============
