#include<iostream>
#include<vector>
#include<string>
#include<fstream>
using namespace std;

class fileManagement
{
    public:
    virtual vector<string> read() = 0;
    virtual void write() = 0;
};