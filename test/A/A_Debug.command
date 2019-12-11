echo =============Debug-start=============
cd `dirname $0`
g++ A.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o A_Debug
chmod u+x A_Debug
./A_Debug
echo =============Debug- end =============
