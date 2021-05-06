#include <stdio.h>

int i; // global variable

void find_waiting_time(int processes[], int n, int bt[], int wt[])
{
    wt[0] = 0;
    for (i = 1; i < n; i++)
    {
        wt[i] = bt[i - 1] + wt[i - 1];
    }
}

void find_turnAround_time(int processes[], int n, int bt[], int wt[], int tat[])
{
    for (i = 0; i < n; i++)
    {
        tat[i] = bt[i] + wt[i];
    }
}

void findAverage_time(int processes[], int n, int bt[])
{
    int wt[n], tat[n], total_wt = 0, total_tat = 0;
    float x, y;

    find_waiting_time(processes, n, bt, wt);
    find_turnAround_time(processes, n, bt, wt, tat);
    printf("Process  Burst time  Waiting time  Turn around time \n");
    for (i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];

        printf("   %d\t", (i + 1));
        printf("       %d\t", bt[i]);
        printf("       %d\t", wt[i]);
        printf("       %d\n", tat[i]);
    }
    x = (float)total_wt / (float)n;
    y = (float)total_tat / (float)n;
    printf("Average waiting time = %f \n", x);
    printf("\nAverage turn around time = %f \n", y);
}

// main function
int main()
{
    int processes[] = {0, 1, 2, 3};
    int n = sizeof processes / sizeof processes[0];
    int burst_time[] = {8, 4, 9, 5};

    findAverage_time(processes, n, burst_time);
    return 0;
}