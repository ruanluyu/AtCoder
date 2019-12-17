echo =============Debug-start=============
cd `dirname $0`
g++ analyze.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_analyze
chmod u+x Debug_analyze
./Debug_analyze
echo =============Debug- end =============
