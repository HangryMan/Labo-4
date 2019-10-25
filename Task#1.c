#include <stdio.h>

void main(void)
{
    int n = 0, 
    k =0, 
    count = 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
    float accum = 0;

    scanf("%d", &n);

    float a[n];

    for (int j = 0; j < n; j++)
    {
        for (int i = j; i < n; i++)
        {
            if (a[i] < 0)
            {
                count++;
                accum = a[i];
                for (int q = i; q > j; q--)
                {
                    
                }
                


                // if (count-1 == k)
                // {
                //     accum = a[i];
                //     if (i == k)
                //     {
                //         k++;
                //     }
                //     else
                //     {
                //         for (int j = 0; i < count; i++)
                //         {  
                //         }   
                //     }
                // }
            }
        }    
    }
}
