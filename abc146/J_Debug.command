echo =============Debug-start=============
cd `dirname $0`
g++ J.cpp -I../include/ -DDEBUG -std=c++11 -O2 -o J_Debug 
chmod u+x J_Debug
./J_Debug
echo =============Debug- end =============
