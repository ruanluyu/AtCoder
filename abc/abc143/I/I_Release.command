echo =============Release-start=============
cd `dirname $0`
g++ I.cpp -I../../include/ -std=c++11 -O2 -o I_Release 
chmod u+x I_Release
./I_Release
echo =============Release- end =============
