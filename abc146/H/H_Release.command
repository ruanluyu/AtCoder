echo =============Release-start=============
cd `dirname $0`
g++ H.cpp -I../../include/ -std=c++11 -O2 -o H_Release 
chmod u+x H_Release
./H_Release
echo =============Release- end =============
