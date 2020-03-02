echo =============Release-start=============
cd `dirname $0`
g++ B.cpp -I../../include/ -std=c++11 -O2 -o Release_B
chmod u+x Release_B
./Release_B
echo =============Release- end =============
