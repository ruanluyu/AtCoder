echo =============Release-start=============
cd `dirname $0`
g++ P1005.cpp -I../../include/ -std=c++11 -O2 -o Release_P1005
chmod u+x Release_P1005
./Release_P1005
echo =============Release- end =============
