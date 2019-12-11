echo =============Debug-start=============
cd `dirname $0`
g++ B.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o B_Debug
chmod u+x B_Debug
./B_Debug
echo =============Debug- end =============
