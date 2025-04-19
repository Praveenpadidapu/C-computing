#include <stdio.h>

#define MAX_PROCESSES 10

#define MAX_RESOURCES 10

void calculateNeed(int need[MAX_PROCESSES][MAX_RESOURCES], int 

max[MAX_PROCESSES][MAX_RESOURCES], int

allocated[MAX_PROCESSES][MAX_RESOURCES], int processes, int resources) { 

for (int i = 0; i < processes; i++) {

for (int j = 0; j < resources; j++) { 

need[i][j] = max[i][j] - allocated[i][j];

}

}

}

int isSafeState(int processes, int resources, int available[MAX_RESOURCES], int 

max[MAX_PROCESSES][MAX_RESOURCES], int 

allocated[MAX_PROCESSES][MAX_RESOURCES]) {

int need[MAX_PROCESSES][MAX_RESOURCES];

calculateNeed(need, max, allocated, processes, resources);

int work[MAX_RESOURCES];

int finish[MAX_PROCESSES] = {0}; // Initialize all processes as not finished 

int safeSequence[MAX_PROCESSES];

int count = 0;

// Copy available resources to work 

for (int i = 0; i < resources; i++) {

work[i] = available[i];

}

while (count < processes) { 

int found = 0;

for (int i = 0; i < processes; i++) { 

if (!finish[i]) {

int j;

for (j = 0; j < resources; j++) { 

if (need[i][j] > work[j]) {

break;

}

}

if (j == resources) {

for (int k = 0; k < resources; k++) { 

work[k] += allocated[i][k];

}

safeSequence[count++] = i;
finish[i] = 1;

found = 1;

}

}

}

if (!found) {

printf("System is in an unsafe state. Deadlock may occur.\n"); 

return 0;

}

}

printf("System is in a safe state.\nSafe sequence is: "); 

for (int i = 0; i < processes; i++) {

printf("P%d ", safeSequence[i]);

}

printf("\n"); 

return 1;

}

int main() {

int processes, resources;

int allocated[MAX_PROCESSES][MAX_RESOURCES], 

max[MAX_PROCESSES][MAX_RESOURCES], available[MAX_RESOURCES];

// Input

printf("Enter the number of processes: "); 

scanf("%d", &processes);

printf("Enter the number of resources: "); 

scanf("%d", &resources);

printf("Enter the allocated resource matrix:\n"); 

for (int i = 0; i < processes; i++) {

for (int j = 0; j < resources; j++) { 

scanf("%d", &allocated[i][j]);

}

}

printf("Enter the maximum resource matrix:\n"); 

for (int i = 0; i < processes; i++) {

for (int j = 0; j < resources; j++) { 

scanf("%d", &max[i][j]);

}

}
printf("Enter the available resources: "); 

for (int i = 0; i < resources; i++) {

scanf("%d", &available[i]);

}

isSafeState(processes, resources, available, max, allocated); // Check safe state

return 0;

}

Input:

Enter the number of processes: 5 

Enter the number of resources: 3

Enter the allocated resource matrix: 

0 1 0

2 0 0

3 0 2

2 1 1

0 0 2

Enter the maximum resource matrix: 

7 5 3

3 2 2

9 0 2

2 2 2

4 3 3

Enter the available resources: 3 3 2

Output:

System is in a safe state.

Safe sequence is: P1 P3 P4 P0 P2
