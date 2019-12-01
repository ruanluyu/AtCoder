echo =============Release-start=============
cd `dirname $0`
g++ F.cpp -I../../include/ -std=c++11 -O2 -o F_Release 
chmod u+x F_Release
./F_Release
echo =============Release- end =============
