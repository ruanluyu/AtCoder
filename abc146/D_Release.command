echo =============Release-start=============
cd `dirname $0`
g++ D.cpp -I../include/ -std=c++11 -O2 -o D_Release 
chmod u+x D_Release
./D_Release
echo =============Release- end =============
