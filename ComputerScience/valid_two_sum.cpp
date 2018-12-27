#include <iostream>

int number_pool[8]={2, 3, 4, 7, 1, 9,5, 8};

bool get_two_sum(int *array, int key)
{
    int i, j;
    bool result = false;

    for (i=0; i<8; i++)
    {
        for(j=i; j<8-1; j++)
        {
            if((array[i]+array[j+1])==key)
            {
                printf("Pair(%d,%d) makes the sum %d\n", array[i], array[j+1], key);
                result = true;
            }
        }
    }
    return result;
}

int main(void){
    int key = 10;
    bool result = false;

    result = get_two_sum(number_pool, key);

    if (result == false)
    {
        printf("There is no matched pair that sums to %d in this array", key);
    }

    return 0;
}