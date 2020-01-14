echo =============Release-start=============
cd `dirname $0`
g++ C.cpp -I../../include/ -std=c++11 -O2 -o Release_C
chmod u+x Release_C
./Release_C
echo =============Release- end =============
