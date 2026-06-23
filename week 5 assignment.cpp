//Name:Lawrence Njeru
//reg no:BCS-05-0066/2025
//Week 5 assignment

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // =========================
    // 1D ARRAY - Weekly Revenue
    // =========================
    double revenue[7];
    double totalRevenue = 0;

    cout << "Enter revenue for 7 days:\n";

    for (int i = 0; i < 7; i++)
    {
        cout << "Day " << i + 1 << ": ";
        cin >> revenue[i];
        totalRevenue += revenue[i];
    }

    double averageRevenue = totalRevenue / 7;

    cout << "\n--- Weekly Revenue Report ---\n";
    cout << "Total Weekly Revenue: " << totalRevenue << endl;
    cout << "Average Daily Revenue: " << averageRevenue << endl;

    // =========================
    // 2D ARRAY - One Branch
    // =========================
    int occupancy[5][10];

    srand(time(0));

    cout << "\n--- Room Occupancy (One Branch) ---\n";

    // Generate random occupancy data
    for (int floor = 0; floor < 5; floor++)
    {
        for (int room = 0; room < 10; room++)
        {
            occupancy[floor][room] = rand() % 2; // 0 or 1
        }
    }

    // Display occupied and vacant rooms per floor
    for (int floor = 0; floor < 5; floor++)
    {
        int occupied = 0;
        int vacant = 0;

        for (int room = 0; room < 10; room++)
        {
            if (occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        cout << "Floor " << floor + 1
             << " -> Occupied: " << occupied
             << ", Vacant: " << vacant << endl;
    }

    // =========================
    // 3D ARRAY - Hotel Chain
    // =========================
    int chain[3][5][10];
    int totalOccupied = 0;

    // Assign random occupancy
    for (int branch = 0; branch < 3; branch++)
    {
        for (int floor = 0; floor < 5; floor++)
        {
            for (int room = 0; room < 10; room++)
            {
                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room] == 1)
                    totalOccupied++;
            }
        }
    }

    cout << "\n--- Hotel Chain Report ---\n";
    cout << "Total Occupied Rooms Across All Branches: "
         << totalOccupied << endl;

    return 0;
}
