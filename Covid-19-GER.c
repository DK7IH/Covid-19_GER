//Summing up Covid-19 new infections and grouping
//them by week
//Peter Baier 2020

#include <stdio.h>

#define NMAX 155

int main()
{
    int data[] = {0, 0, 0, 0, 0, 2, 2, 3, 6, 6, 8, 12, 13, 13, 13, 20, 45, 67, 94, 126, 149, 198, 253, 325, 389, 455, 583, 732, 872, 1017, 1158, 1342, 1434, 1607, 1861, 2107, 2373, 2544, 2673, 2799, 2969, 3254, 3569, 3868, 4110, 4294, 4404, 4598, 4879, 5094, 5321, 5500, 5640, 5750, 5913, 6115, 6288, 6431,5, 6575, 6649, 6692, 6831, 6996, 7119, 7266, 7369, 7395, 7417, 7533, 7634, 7723, 7824, 7881, 7914, 7935, 8007, 8090, 8147, 8174, 8216, 8247, 8257, 8302, 8349, 8411, 8450, 8489, 8500, 8511, 8522, 8551, 8581, 8613, 8646, 8668, 8674, 8711, 8729, 8755, 8763, 8781, 8787, 8791, 8800, 8830, 8856, 8856, 8883, 8882, 8885, 8895, 8914, 8927, 8948, 8954, 8957, 8961, 8973, 8995, 8994, 9003, 9010, 9012, 9016, 9024, 9036, 9048, 9054, 9060, 9063, 9064, 9068, 9071, 9078, 9082, 9083, 9084, 9086, 9090, 9095, 9101, 9111, 9118, 9118, 9118, 9122, 9128, 9134, 9141, 9141, 9141, 9148, 9156, 9168, 9175};

    int t1;
    int s[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int sc = 0, cnt = 0;
    
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
    }
    
    printf("\n");
    
    for(t1 = 0; t1 < 10; t1++)
    {
        printf("%d\n", s[t1]);
    }
    return 0;
}

/*
1305                                                                                                                         
8630                                                                                                                         
30259                                                                                                                        
39167                                                                                                                        
27625                                                                                                                        
18359                                                                                                                        
11947                                                                                                                        
6962                                                                                                                         
5852                                                                                                                         
4078  
*/
