echo =============Release-start=============
cd `dirname $0`
g++ G.cpp -I../../include/ -std=c++11 -O2 -o G_Release 
chmod u+x G_Release
./G_Release
echo =============Release- end =============
