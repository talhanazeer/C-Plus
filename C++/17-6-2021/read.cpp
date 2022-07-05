#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string input;
    ifstream outputfile("all.txt");
    getline(outputfile,input);
    for(int i= 0; i<=5; i++){
        cout<<input;
    }
return 0;
}
