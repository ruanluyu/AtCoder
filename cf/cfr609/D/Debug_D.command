echo =============Debug-start=============
cd `dirname $0`
g++ D.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_D
chmod u+x Debug_D
./Debug_D
echo =============Debug- end =============
