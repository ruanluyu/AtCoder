echo =============Release-start=============
cd `dirname $0`
g++ P1001.cpp -I../../include/ -std=c++11 -O2 -o Release_P1001
chmod u+x Release_P1001
./Release_P1001
echo =============Release- end =============
