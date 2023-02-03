#include <stdio.h>
void Fragmentaion(int blockSize[], int processSize[], int n, int m, int 
allocation[])
{
int total_intfrag = 0, total_extfrag = 0, ext = 0, flag = 0, intFrag[25] = {0}, 
extFrag[25] = {0};
for (int i = 0; i < m; i++)
{
total_intfrag += blockSize[i];
intFrag[i] = blockSize[i];
}
printf("\nProcess No.\tProcess Size\tBlock no.\n");
for (int i = 0; i < n; i++)
{
printf(" %i\t\t", i + 1);
printf("%i\t\t", processSize[i]);
if (allocation[i] != -1)
printf("%i", allocation[i] + 1);
else
{
printf("Not Allocated");
ext = 1;
}
printf("\n");
}
printf("\n");
if (total_intfrag > 0)
{
printf("Yes, there is an Internal Fragmentation \n");
printf("Total internal fragmentation : %d\n", total_intfrag);
printf("\nBlock no.\tInternal Fragmentation\n");
for (int j = 0; j < m; j++)
{
printf(" %i\t\t", j + 1);
printf("%i", intFrag[j]);
printf("\n");
}
}
else
printf("No Internal Fragmentation\n");
if (ext == 1)
{
for (int i = 0; i < n; i++)
if (allocation[i] == -1)
if (total_intfrag >= processSize[i])
flag = 1;
if (flag == 1)
printf("\nYes, there is an External Fragmentation\n");
else
printf("\nNo External Fragmentation\n");
}
else
printf("\nNo External Fragmentation\n");
}
void firstfit(int blockSize[], int processSize[], int n, int m, int allocation[], int 
tempblockSize[])
{
for (int i = 0; i < n; i++)
for (int j = 0; j < m; j++)
if (blockSize[j] >= processSize[i] && blockSize[j] == tempblockSize[j])
{
allocation[i] = j;
blockSize[j] -= processSize[i];
break;
}
Fragmentaion(blockSize, processSize, n, m, allocation);
}
void bestfit(int blockSize[], int processSize[], int n, int m, int allocation[], int 
tempblockSize[])
{
for (int i = 0; i < n; i++)
{
int bestIdx = -1;
for (int j = 0; j < m; j++)
{
if (blockSize[j] >= processSize[i] && blockSize[j] == tempblockSize[j])
{
if (bestIdx == -1)
bestIdx = j;
else if (blockSize[bestIdx] > blockSize[j])
bestIdx = j;
}
}
if (bestIdx != -1)
{
allocation[i] = bestIdx;
blockSize[bestIdx] -= processSize[i];
}
}
Fragmentaion(blockSize, processSize, n, m, allocation);
}
int main()
{
int bsize[25], bsize2[25], bsize3[25], psize[25], bno, pno, allocation[25];
for (int i = 0; i < 25; i++)
allocation[i] = -1;
printf("Enter no of blocks : ");
scanf("%d", &bno);
printf("Enter size of each block : ");
for (int i = 0; i < bno; i++)
{
scanf("%d", &bsize[i]);
bsize2[i] = bsize[i];
bsize3[i] = bsize[i];
}
printf("Enter no of process : ");
scanf("%d", &pno);
printf("Enter size of each process : ");
for (int i = 0; i < pno; i++)
scanf("%d", &psize[i]);
printf("\nMemory Placement Using First Fit Algorithm\n");
firstfit(bsize, psize, pno, bno, allocation, bsize3);
for (int i = 0; i < 25; i++)
allocation[i] = -1;
printf("\n----------------------------\n");
printf("\nMemory Placement Using Best Fit Algorithm\n");
printf("\n----------------------------\n");
bestfit(bsize2, psize, pno, bno, allocation, bsize3);
return 0;
}
