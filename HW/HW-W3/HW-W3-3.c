#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[9],b[9],c[9],d[9],e[9];
    char f[9],g[9],h[9],i[9],j[9];
    char k[9],l[9],m[9],n[9],o[9];
    char p[9],q[9],r[9],s[9],t[9];

    scanf("%s %s %s %s %s", &a, &b, &c, &d, &e);
    scanf("%s %s %s %s %s", &f, &g, &h, &i, &j);
    scanf("%s %s %s %s %s", &k, &l, &m, &n, &o);
    scanf("%s %s %s %s %s", &p, &q, &r, &s, &t);

    float ef, jf, of, tf ;

    ef = atof(e);
    jf = atof(j);
    of = atof(o);
    tf = atof(t);

    printf("姓名        學號   分數 加減分   百分比\n");
    printf("%-6s %9s %5s %7s %7.1f%%\n",a,b,c,d,ef);
    printf("%-6s %9s %5s %7s %7.1f%%\n",f,g,h,i,jf);
    printf("%-6s %9s %5s %7s %7.1f%%\n",k,l,m,n,of);
    printf("%-6s %9s %5s %7s %7.1f%%\n",p,q,r,s,tf);

    return 0;

}