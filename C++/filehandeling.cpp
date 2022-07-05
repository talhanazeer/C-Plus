#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream outputFile;
outputFile.open("all.txt");

 int num= 0;

    for(num=0; num<=256 ; num++){
    outputFile<<num<<"Hellow World"<< " ";
    }
outputFile.close();
return 0;
}
