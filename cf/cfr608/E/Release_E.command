echo =============Release-start=============
cd `dirname $0`
g++ E.cpp -I../../include/ -std=c++11 -O2 -o Release_E
chmod u+x Release_E
./Release_E
echo =============Release- end =============
