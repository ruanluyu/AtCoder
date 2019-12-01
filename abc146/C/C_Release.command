echo =============Release-start=============
cd `dirname $0`
g++ C.cpp -I../../include/ -std=c++11 -O2 -o C_Release 
chmod u+x C_Release
./C_Release
echo =============Release- end =============
