//Summing up Covid-19 new infections and grouping
//them by week
//Peter Baier 2020
//Last change 2020-09-09

#include <stdio.h>

#define NMAX 190

int main()
{
    int data[] = {0, 0, 0, 0, 2, 0, 1, 3, 0, 2, 4, 1, 0, 0, 7, 25, 22, 27, 32, 23, 49, 55, 72, 64, 66, 128, 149, 140, 145, 141, 184, 92, 173, 254, 246, 266, 171, 129, 126, 170, 285, 315, 299, 242, 184, 110, 194, 281, 215, 227, 179, 140, 110, 163, 202, 173, 143,5, 143,5, 74, 43, 139, 165, 123, 147, 103, 26, 22, 116, 101, 89, 101, 57, 33, 21, 72, 83, 57, 27, 42, 31, 10, 45, 47, 62, 39, 39, 11, 11, 11, 29, 30, 32, 33, 22, 6, 37, 18, 26, 8, 18, 6, 4, 9, 30, 26, 0, 27, -1, 3, 10, 19, 13, 21, 6, 3, 4, 12, 22, -1, 9, 7, 2, 4, 8, 12, 12, 6, 6, 3, 1, 4, 3, 7, 4, 1, 1, 2, 4, 5, 6, 10, 7, 0, 0, 4, 6, 6, 7, 0, 0, 7, 8, 12, 7, 8, 2, 1, 11, 4, 6, 4, 14, 6, 0, 1, 4, 7, 10, 7, 7, 2, 3, 5, 3, 5, 3, 1, 6, 3, 4, 11, 8, -2, 5, 1, 0, 4, 9};

    int t1, x7;
    int s[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int sc = 0, cnt = 0;
    
    printf("\n\n");
    
    for(t1 = 0; t1 < NMAX; t1++)
    {
        printf("%d ", data[t1]);
        if(cnt < 7)
        {
            s[sc] += data[t1];
            cnt++;
        }
        else
        {
            sc++;
            cnt = 0;
        }
        
        //Break line after 7 items
        x7++;
        if(x7 >= 7)
        {
			printf("\n");
			x7 = 0;
		}	
    }
    
    printf("\n");
    
    for(t1 = 0; t1 < NMAX / 7; t1++)
    {
        printf("%d\n", s[t1]);
    }
    
    return 0;
}

/*
3
14
280
953
1365
1629
1236
552
638
424
276
157
119
94
78
41
30
29
23
45
35
41
*/
