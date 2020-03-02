echo =============Debug-start=============
cd `dirname $0`
g++ A.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_A
chmod u+x Debug_A
./Debug_A
echo =============Debug- end =============
