echo =============Debug-start=============
cd `dirname $0`
g++ I.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_I
chmod u+x Debug_I
./Debug_I
echo =============Debug- end =============
