#include<stdio.h>

int main(){
    float swap,a,b,c,s[4];
    int e,z;
    printf("Masukan Nilai A, B dan C\n");
    scanf("%f%f%f",&s[0],&s[1],&s[2]);

    for (e = 0 ; e < 2; e++)
        for (z = 0 ; z < 3 - e - 1; z++){
            if (s[z] > s[z+1]){
                swap   = s[z];
                s[z]   = s[z+1];
                s[z+1] = swap;
            }
        }

    a=s[0]; b=s[1];c=s[2];

    if ((a<=0)||(b<=0)||(c<=0)||(c>a+b))
        printf("Tidak ada segitiga");
    else if (((a==b)&&(a!=c))||((a==c)&&(a!=b))||((b==c)&&(a!=c)))
        printf("Segitiga Sama kaki");
    else if ((a==b)&&(b==c))
        printf("Segitiga sama sisi");
    else if ((c*c)==(b*b)+(a*a))
        printf("Segitiga Sama siku");
    else if (c<a+b)
        printf("Segitiga sembarang");
    else
        printf("tidak ada segitiga dengan sisi tersbut!");
}
