#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i, j, k, asal;

    for (i = 1; i < 1000; i++)
    {
        printf("%d. sayiyi girin", i);
        scanf("%d", &sayi);

        for (j = 2; j < sayi; j++)
        {
            asal = 1;
            for (k = 2; k <= j / 2; k++)
            {
                if (j % k == 0)
                {
                    asal = 0;
                    break;
                }
            }
            if (asal == 1)
            {
            }
        }
        if (asal == 1)
        {
            break;
        }
    }
    printf("%d adet sayi girdiniz", i);
}
