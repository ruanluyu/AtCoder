echo =============Release-start=============
cd `dirname $0`
g++ F.cpp -I../../include/ -std=c++11 -O2 -o Release_F
chmod u+x Release_F
./Release_F
echo =============Release- end =============
