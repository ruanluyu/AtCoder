echo =============Release-start=============
cd `dirname $0`
g++ P1000.cpp -I../../include/ -std=c++11 -O2 -o Release_P1000
chmod u+x Release_P1000
./Release_P1000
echo =============Release- end =============
