#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char** argv) {
    //using O(1) additional memory
    int max_len = 0, len = 0;
    char c;
    ifstream in;
    in.open("INPUT.TXT");
    while (in >> c && c != '\n') {
        if (c != '0' && c != '1') break;
        if (c == '0') {
            if (len > max_len) max_len = len;
            len = 0;
        } else len++;
    }
    if (len > max_len) max_len = len; //if last symbol is '1'
    in.close();
    
    ofstream out;
    out.open("OUTPUT.TXT");
    out << max_len << endl;
    out.close();
    
    return 0;
}

