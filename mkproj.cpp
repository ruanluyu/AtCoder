#include<iostream>
#include<sys/stat.h>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main(int argc, char ** args){
    char foldername[255];
    printf("Input the project name >> ");
    scanf("%s",foldername);
    mkdir(foldername,0777);
    char buffer[255];
    char commandBuffer[1024];
    
    for (int i = 0; i<10; i++) {
        
        sprintf(buffer,"cd `dirname $0`\ncp include/template %s/%c.cpp",foldername,'A'+i);
        system(buffer);
        
        sprintf(buffer,"%s/%c_Release.command",foldername,'A'+i);
        FILE *fp = fopen(buffer, "w");
        
        fprintf(fp,"echo =============Release-start=============\ncd `dirname $0`\ng++ %c.cpp -I../include/ -std=c++11 -O2 -o %c \nchmod u+x %c\n./%c\necho =============Release- end =============\n",'A'+i,'A'+i,'A'+i,'A'+i);
        
        fclose(fp);
        chmod(buffer,0777);
        
        
        sprintf(buffer,"%s/%c_Debug.command",foldername,'A'+i);
        fp = fopen(buffer, "w");
        
        fprintf(fp,"echo =============Debug-start=============\ncd `dirname $0`\ng++ %c.cpp -I../include/ -DDEBUG -std=c++11 -O2 -o %c \nchmod u+x %c\n./%c\necho =============Debug- end =============\n",'A'+i,'A'+i,'A'+i,'A'+i);
        
        fclose(fp);
        chmod(buffer,0777);
    }
    
    return 0;
}


