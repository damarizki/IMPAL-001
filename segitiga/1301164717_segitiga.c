#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ganti,a, b, c;
    float g[4];
    int i, j;

    printf("masukan A: ");
    scanf("%f",&g[0]);

    printf("masukan B: ");
    scanf("%f",&g[1]);

    printf("masukan C: ");
    scanf("%f",&g[2]);

    for (i = 0 ; i < 2; i++){
        for (j = 0 ; j < 3 - i - 1; j++){
            if (g[j] > g[j+1]){
                ganti   = g[j];
                g[j]  = g[j+1];
                g[j+1] = ganti;
            }
        }
    }

    a=g[0]; b=g[1];c=g[2];



    printf ("ANGKA MASUKAN: %f , %f , %f", a, b, c);

    if ( (a<=0) || (b<=0) || (c<=0)|| (c>=a+b)){
        printf("\ntidak ada segitiga yang bisa dibangun.");
    }
            else if((a==b) && (b==c))
            {
                printf("\nSEGITIGA SAMA SISI");
                }
                    else if(((a==b)&&(a!=c))||((a==c)&&(a!=b))||((b==c)&&(a!=c)))
                        {
                        printf("\nSEGITIGA SAMA KAKI");
                            }
                                else if((c*c)==(a*a)+(b*b)){
                                    printf("\n SEGITIGA SIKU - SIKU");
                                }
                                    else
                                {
                                    printf("\nSEGITIGA BEBAS");
                                            }
}
