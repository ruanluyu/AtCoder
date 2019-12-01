echo =============Debug-start=============
cd `dirname $0`
g++ D.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o D_Debug 
chmod u+x D_Debug
./D_Debug
echo =============Debug- end =============
