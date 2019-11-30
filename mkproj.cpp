#include<iostream>
#include<sys/stat.h>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main(int argc, char ** args){
    if(argc != 2) return 0;
    mkdir(args[1],0777);
    char buffer[255];
    char commandBuffer[1024];
    
    for (int i = 0; i<10; i++) {
        
        sprintf(buffer,"cp include/template %s/%c.cpp",args[1],'A'+i);
        system(buffer);
        
        sprintf(buffer,"%s/%c.command",args[1],'A'+i);
        FILE *fp = fopen(buffer, "w");
        
        fprintf(fp,"echo =============start=============\ncd `dirname $0`\ng++ %c.cpp -I../include/ -std=c++11 -O2 -o %c \nchmod u+x %c\n./%c\necho ============= end =============\n",'A'+i,'A'+i,'A'+i,'A'+i);
        
        fclose(fp);
        
        chmod(buffer,0777);
    }
    
    return 0;
}


