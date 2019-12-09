echo =============Debug-start=============
cd `dirname $0`
g++ H.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o H_Debug 
chmod u+x H_Debug
./H_Debug
echo =============Debug- end =============
