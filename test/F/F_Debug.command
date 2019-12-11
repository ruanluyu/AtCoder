echo =============Debug-start=============
cd `dirname $0`
g++ F.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o F_Debug
chmod u+x F_Debug
./F_Debug
echo =============Debug- end =============
