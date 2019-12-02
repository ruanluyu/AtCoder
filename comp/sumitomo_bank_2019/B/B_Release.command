echo =============Release-start=============
cd `dirname $0`
g++ B.cpp -I../../include/ -std=c++11 -O2 -o B_Release 
chmod u+x B_Release
./B_Release
echo =============Release- end =============
