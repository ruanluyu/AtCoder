echo =============Debug-start=============
cd `dirname $0`
g++ C.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o C_Debug 
chmod u+x C_Debug
./C_Debug
echo =============Debug- end =============
