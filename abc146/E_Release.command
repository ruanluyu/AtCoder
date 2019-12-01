echo =============Release-start=============
cd `dirname $0`
g++ E.cpp -I../include/ -std=c++11 -O2 -o E_Release 
chmod u+x E_Release
./E_Release
echo =============Release- end =============
