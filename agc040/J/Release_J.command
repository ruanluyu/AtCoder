echo =============Release-start=============
cd `dirname $0`
g++ J.cpp -I../../include/ -std=c++11 -O2 -o Release_J
chmod u+x Release_J
./Release_J
echo =============Release- end =============
