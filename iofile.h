#include "fileManagement.h"

class iofile : fileManagement
{
    string path = "file.txt";
    
    ifstream fin;
    ofstream fout;

    vector<string> text;

    public:
    vector<string> read() override;
    void write() override;
};