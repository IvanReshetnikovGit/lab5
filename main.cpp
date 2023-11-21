#include "iofile.h"
#include "somefunction.h"

using namespace std;

int main()
{
    somefunction();
    iofile file;
    while(true)
    {
        uint k;
        try 
        {
            cout <<"1. Read file"<<endl;
            cout <<"2. Write file"<<endl;
            cout <<"3. Exit"<<endl;

            if (!(cin >> k)) 
            {
                cin.clear();
                cin.ignore();
                throw invalid_argument("Invalid input, enter coorect option");
            }
        } 
        catch (const std::exception& e) 
        {
            cerr<<e.what()<<endl;
        }
        
        if (k==1)
        {
            vector<string> text = file.read();
            if (text.size()>0)
            {
                for (size_t i = 0; i < text.size(); i++)
                {
                    cout<<text[i]<<endl;
                }
                cout<<endl;
            }
            else
                cout<<"\nEmpty file\n"<<endl;
        }
        else if(k==2)
            file.write();

        else if(k==3)
            break;
    }
    return 0;
}