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
        
        sprintf(buffer,"cd `dirname $0`\ncd %s\nmkdir %c\ncd ..\ncp include/template %s/%c/%c.cpp",foldername,'A'+i,foldername,'A'+i,'A'+i);
        system(buffer);
        
        sprintf(buffer,"%s/%c/%c_Release.command",foldername,'A'+i,'A'+i);
        FILE *fp = fopen(buffer, "w");
        
        fprintf(fp,"echo =============Release-start=============\ncd `dirname $0`\ng++ %c.cpp -I../../include/ -std=c++11 -O2 -o %c_Release \nchmod u+x %c_Release\n./%c_Release\necho =============Release- end =============\n",'A'+i,'A'+i,'A'+i,'A'+i);
        
        fclose(fp);
        chmod(buffer,0777);
        
        
        sprintf(buffer,"%s/%c/%c_Debug.command",foldername,'A'+i,'A'+i);
        fp = fopen(buffer, "w");
        
        fprintf(fp,"echo =============Debug-start=============\ncd `dirname $0`\ng++ %c.cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o %c_Debug \nchmod u+x %c_Debug\n./%c_Debug\necho =============Debug- end =============\n",'A'+i,'A'+i,'A'+i,'A'+i);
        
        fclose(fp);
        chmod(buffer,0777);
    }
    
    return 0;
}


