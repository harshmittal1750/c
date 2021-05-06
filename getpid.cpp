
#include <iostream>
#include <unistd.h>
using namespace std;

int main()
{
    int pid;
    pid = fork();
    if (pid == 0)
    {
        cout << "\nParent Process id : "
             << getpid() << endl;
        Scout << "\nChild Process with parent id : "
             << getppid() << endl;
    }
    return 0;
}
