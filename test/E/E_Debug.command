echo =============Debug-start=============
cd `dirname $0`
g++ E.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o E_Debug
chmod u+x E_Debug
./E_Debug
echo =============Debug- end =============
