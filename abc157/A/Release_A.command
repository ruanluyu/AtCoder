echo =============Release-start=============
cd `dirname $0`
g++ A.cpp -I../../include/ -std=c++11 -O2 -o Release_A
chmod u+x Release_A
./Release_A
echo =============Release- end =============
