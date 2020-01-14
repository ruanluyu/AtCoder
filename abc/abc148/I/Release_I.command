echo =============Release-start=============
cd `dirname $0`
g++ I.cpp -I../../include/ -std=c++11 -O2 -o Release_I
chmod u+x Release_I
./Release_I
echo =============Release- end =============
