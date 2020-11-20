#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char* argv[]){
    ifstream file(argv[1]);
    if(!file.is_open()){
        cout<<"File could not be opened, please try again";
        return 0;
    }

    string binary;
    while(getline(file, binary)){
        cout<<binary<<"\n";
    }

    ofstream myAnswers;
    myAnswers.open("SzepesiAnswers.txt");
    myAnswers<<"Writing this to my answers file.\n";
    myAnswers.close();
    return 0;
}