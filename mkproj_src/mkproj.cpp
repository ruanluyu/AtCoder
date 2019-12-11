#include<iostream>
#include<sys/stat.h>
#include<cstdio>
#include<cstdlib>
#include<queue>
#include<string>
#include<sstream>
using namespace std;
int main(int argc, char ** args){
    string foldername;
    char buffer[255];
    char commandBuffer[2048];
    queue<string> folderlst;
    
    if(argc<2){
        cout << "Input the project name >> ";
        cin >> foldername;
    }
    else{
        foldername = args[1];
        if(argc>2){
            for(int i = 2;i<argc;i++){
                folderlst.push(args[i]);
            }
        }
    }
    
    if(folderlst.empty())
        for (int i = 0; i<10; i++) {
            string curs;
            curs.push_back('A'+i);
            folderlst.push(curs);
        }
    
    
    mkdir(foldername.c_str(),0777);
    while (!folderlst.empty()) {
        
        stringstream ss;
        string curfolder = folderlst.front();
        
        ss << "cd `dirname $0`" << endl
        <<"cd "<< foldername << endl
        <<"mkdir "<< curfolder <<endl
        <<"cd .."<<endl
        <<"cp include/template "<<foldername<<"/"<<curfolder<<"/"<<curfolder<<".cpp";
        
        system(ss.str().c_str());
        
        ss.str("");
        ss <<foldername<<"/"<<curfolder<<"/Release_"<<curfolder<<".command";
        string curpath = ss.str();
        FILE *fp = fopen(curpath.c_str(), "w");
        
        ss.str("");
        ss << "echo =============Release-start============="<<endl
        <<"cd `dirname $0`"<<endl
        <<"g++ "<<curfolder<<".cpp -I../../include/ -std=c++11 -O2 -o Release_"<<curfolder<<endl
        <<"chmod u+x Release_"<<curfolder<<endl
        <<"./Release_"<<curfolder<<endl
        <<"echo =============Release- end ============="<<endl;
        
        fprintf(fp,"%s",ss.str().c_str());
        
        fclose(fp);
        chmod(curpath.c_str(),0777);
        
        ss.str("");
        ss <<foldername<<"/"<<curfolder<<"/Debug_"<<curfolder<<".command";
        curpath = ss.str();
        fp = fopen(curpath.c_str(), "w");
        
        ss.str("");
        ss << "echo =============Debug-start============="<<endl
        <<"cd `dirname $0`"<<endl
        <<"g++ "<<curfolder<<".cpp -I../../include/ -DDEBUG -std=c++11 -O2 -o Debug_"<<curfolder<<endl
        <<"chmod u+x Debug_"<<curfolder<<endl
        <<"./Debug_"<<curfolder<<endl
        <<"echo =============Debug- end ============="<<endl;
        
        fprintf(fp,"%s",ss.str().c_str());
        
        fclose(fp);
        chmod(curpath.c_str(),0777);
        folderlst.pop();
    }
    
    return 0;
}


