echo =============Debug-start=============
cd `dirname $0`
g++ C.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_C
chmod u+x Debug_C
./Debug_C
echo =============Debug- end =============
