echo =============Debug-start=============
cd `dirname $0`
g++ G.cpp -I../include/ -DDEBUG -std=c++11 -O2 -o G_Debug 
chmod u+x G_Debug
./G_Debug
echo =============Debug- end =============
