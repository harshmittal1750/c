
#include <bits/stdc++.h>
using namespace std;

void fun(void)
{
    cout << "Exiting";
}

int main()
{
    atexit(fun);
    exit(10);
}
