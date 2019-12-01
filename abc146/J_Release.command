echo =============Release-start=============
cd `dirname $0`
g++ J.cpp -I../include/ -std=c++11 -O2 -o J_Release 
chmod u+x J_Release
./J_Release
echo =============Release- end =============
