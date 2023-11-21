#include "iofile.h"

vector<string> iofile::read()
{
    string row;
    try
    {
        const streamsize chunk_size = 1024;
        fin.open(path,ios::binary);
        if (!fin.is_open())
            throw string("File heven`t been opened");
        
        while (!fin.eof()) 
        {
            char buffer[chunk_size];
            fin.read(buffer, chunk_size);

            streamsize bytesRead = fin.gcount();

            if (bytesRead > 0)
            {
                string chunk(buffer, bytesRead);
                text.push_back(chunk);
            }
        }
        
        fin.close();
    }
    catch (const string& e)
    {
        cerr << e << '\n';
    }
    return text;
}
void iofile::write()
{
    string row;
    fout.open(path);
    if(fout.is_open())
    {
        cout<<"Enter text,When you`re done type END and press Enter"<<endl;
        while(row!="END")
        {
            getline(cin,row);
            if (row=="END")
            {
                break;
            }
            fout<<row<<endl;
        }
        fout.close();
    }
    else
    {
        cout<<"failed to open file while writing"<<endl;
    }
}