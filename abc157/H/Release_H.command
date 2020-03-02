echo =============Release-start=============
cd `dirname $0`
g++ H.cpp -I../../include/ -std=c++11 -O2 -o Release_H
chmod u+x Release_H
./Release_H
echo =============Release- end =============
