#include <bits/stdc++.h>
using namespace std;

int result(int n, int PID[], int BT[], int quantum)
{
    int rem_BT[n];
    for (int i = 0; i < n; i++)
    {
        rem_BT[i] = BT[i];
    }

    int WT[n];
    int t = 0;
    // Keep traversing PID in round robin manner until all of them are not done.
    while (true)
    {
        bool done = true;
        
        for (int i = 0; i < n; i++)  
        {
            if (rem_BT[i] > 0)   
            {
                done = false;  

                if (rem_BT[i] > quantum)
                {
                    t = t + quantum;   

                    rem_BT[i] = rem_BT[i] - quantum;  
                }

                // If burst time is smaller than or equal to quantum, it means it's the Last cycle for this process
                else
                {
                    t = t + rem_BT[i];

                    WT[i] = t - BT[i];      // Waiting time is current time minus BT[i]

                    rem_BT[i] = 0;          // As the process gets fully executed make its remaining_burst time = 0
                }
            }
        }

        // If all PIDs are done, then upar se done = false nhi hoga and this will become true and while loop will break 
        if (done == true) break;
            
    }
    // for TAT
    int TAT[n];
    for (int i = 0; i < n; i++)
    {
        TAT[i] = BT[i] + WT[i];
    }

    cout << ("PID Burst Time Waiting Time turnaround time\n");

    int total_WT = 0, total_TAT = 0;
    for (int i = 0; i < n; i++)
    {
        total_WT = total_WT + WT[i];
        total_TAT = total_TAT + TAT[i];
        cout << PID[i] << "\t\t\t" << BT[i] << "\t\t\t" << WT[i] << "\t\t\t" << TAT[i] << "\n";
    }

    cout << "\nAverage waiting time = " << (float)total_WT / n;
    cout << "\nAverage turnaround time = " << (float)total_TAT / n;
}

int main()
{
    int n = 3;
    int PID[] = {1, 2, 3};
    int BT[] = {8, 6, 12};
    int quantum = 2;

    result(n, PID, BT, quantum);

    return 0;
}
