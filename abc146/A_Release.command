echo =============Release-start=============
cd `dirname $0`
g++ A.cpp -I../include/ -std=c++11 -O2 -o A_Release 
chmod u+x A_Release
./A_Release
echo =============Release- end =============
