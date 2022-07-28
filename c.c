#include <stdlib.h>
#include <math.h>//gcc -o c c.c -lm;./c>c.ppm
typedef float f;typedef int d;d R=600,C=1050;
f z(f x,f o){return fmod(fmod(x,o)+o,o);}
f o=1/22.,p=.04,H=.5,V=.25,Z=1.5;
d main(){printf("P6 %i 600 255 ",C
);f (*q)[C][4];q=malloc(R*144*C);f e=.07;f b=.14;f I[25][6]
={{0,-b,b,0,-3,1},{0,-b,p,0,-2,Z},{e,0,0,b,
-3,2},{e,0,0,b,-3,1},{p,-b,b,p,-1,1},{p,b,-b,p
,-1,1.6},{p,0,0,b,-1,1},{b,0,0,b,1,2},{0,-b,
b,0,Z,1},{0,-b,b,0,3,1,o},{0,-b,p,0,4,Z},
{e,0,0,b,3,2},{e,0,0,b,3,1},{b,p,-p,b,3,1},
{0,-b,b,0,5,1},{e,0,0,b,7,2},{e,0,0,b,7,
H},{0,-b,b,0,6.5,1},{0,-b,b,0,8.5,1},{e,-p,e,
b,9,Z},{e,b,-e,b,9,1}};f J[25][6]={{0,-b,b,
0,-3,1},{e,0,0,b,-3,1},{e,0,0,b,-3,V},{0,-b,p,0
,-2,H},{p,-b,b,p,-1,1},{p,b,-b,p,-1,Z},{p,
0,0,b,-1,1},{b,0,0,b,1,2},{0,-b,b,0,Z,1},{e,0
,0,b,3,2},{e,0,0,b,3,H},{0,-b,b,0,3,1},{p,0,
0,b,3,1},{0,-b,b,0,4.4,1},{0,-b,b,0,6,1},{
p,-b,p,p,5.4,Z},{p,b,-b,p,4.5,1.8},{p,-b,b,p,
7,1},{p,b,-b,p,7.3,Z},{p,0,0,b,7,1},{0,-b,b
,0,8.5,1},{0,-b,b,0,9.5,1},{p,b,-b,p,8.5,Z}};f
t=H;f s=H;d i=0;d S=22;f Y=H;f X=-b;f L=R*C;f 
k=o;while(i<2*L){if(i==L){k=p;memcpy(&I,&J,
R);S=25;Y=0;}f a=(f)rand()/RAND_MAX;f P=0;for(
d z=0;z<S;z++){P+=k;if(a<P){f G=t*I[z][0]+s*I[z]
[1]+I[z][4];s=t*I[z][2]+s*I[z][3]+I[z][5];t=G;
break;}}d W=(d)(z((1-s*.1+Y),1)*R);d B=(d)(z(t*
.1*R/C+H+X,1)*C);q[W][B][0]=1;q[W][B][1]=1;q[W][
B][2]=1;i++;}for(d x=0;
x<R;x++){for(d y=0;y<C;y++){f E=255;printf(
"%c%c%c",(d)(q[x][y][0]*E),(d)(q[x][y][1]*E),(d)
(q[x][y][2]*E));}}}