#include "somefunction.h"

void somefunction()
{
    float progress = 0.0;
    uint i{};
    while (progress <= 1.1) 
    {
        int barWidth = 70;

        cout << "[";

        int pos = barWidth * progress;

        for (int i = 0; i < barWidth; ++i) 
        {
            if (i < pos) 
                cout << "#";
            else 
                cout << ".";
        }
        cout << "] " << int(progress * 100.0)<<" %\r";
        cout.flush();
        progress += 0.1;
        i++;
        if (i==10)
        {
            sleep(10);
        }
        else
            sleep(1);
    }
    cout<<"\n";
}