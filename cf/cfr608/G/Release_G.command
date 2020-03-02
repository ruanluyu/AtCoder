echo =============Release-start=============
cd `dirname $0`
g++ G.cpp -I../../include/ -std=c++11 -O2 -o Release_G
chmod u+x Release_G
./Release_G
echo =============Release- end =============
