echo =============Debug-start=============
cd `dirname $0`
g++ H.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_H
chmod u+x Debug_H
./Debug_H
echo =============Debug- end =============
