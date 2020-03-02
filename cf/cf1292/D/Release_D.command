echo =============Release-start=============
cd `dirname $0`
g++ D.cpp -I../../include/ -std=c++11 -O2 -o Release_D
chmod u+x Release_D
./Release_D
echo =============Release- end =============
