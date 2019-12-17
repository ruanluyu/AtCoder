echo =============Release-start=============
cd `dirname $0`
g++ analyze.cpp -I../../include/ -std=c++11 -O2 -o Release_analyze
chmod u+x Release_analyze
./Release_analyze
echo =============Release- end =============
