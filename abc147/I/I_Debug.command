echo =============Debug-start=============
cd `dirname $0`
g++ I.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o I_Debug 
chmod u+x I_Debug
./I_Debug
echo =============Debug- end =============
