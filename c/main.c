#include <stdio.h>
#include <math.h>
#include <time.h>

int main()
{
    clock_t begin = clock();
    int i;
    for(i=0 ; i<100000000 ; i++)
    {
        sqrt(i);
    }
    clock_t end = clock();
    double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
    printf("finished in %f seconds" , time_spent);
    return 0;
}