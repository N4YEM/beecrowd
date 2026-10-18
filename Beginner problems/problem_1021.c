#include <stdio.h>
int main() 
{
    double N,M;
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13;
    int m1,m2,m3,m4,m5,m6,m7,m8,m9,m10,m11,m12,m13;
    scanf("%lf",&N);
    
    n1=(int)N/100;
    n2=(int)N%100;
    n3=n2/50;
    n4=n2%50;
    n5=n4/20;
    n6=n4%20;
    n7=n6/10;
    n8=n6%10;
    n9=n8/5;
    n10=n8%5;
    n11=n10/2;
    n12=n10%2;
    n13=n12/1;

    M=(N * 100)-((int)N*100);
    m1=(int)M/50;
    m2=(int)M%50;
    m3=m2/25;
    m4=m2%25;
    m5=m4/10;
    m6=m4%10;
    m7=m6/5;
    m8=m6%5;
    m9=m8/1;
    m10=m8%1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n1);
    printf("%d nota(s) de R$ 50.00\n",n3);
    printf("%d nota(s) de R$ 20.00\n",n5);
    printf("%d nota(s) de R$ 10.00\n",n7);
    printf("%d nota(s) de R$ 5.00\n",n9);
    printf("%d nota(s) de R$ 2.00\n",n11);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",n13);
    printf("%d moeda(s) de R$ 0.50\n",m1);
    printf("%d moeda(s) de R$ 0.25\n",m3);
    printf("%d moeda(s) de R$ 0.10\n",m5);
    printf("%d moeda(s) de R$ 0.05\n",m7);
    printf("%d moeda(s) de R$ 0.01\n",m9);

    return 0;
}