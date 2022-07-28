#include <stdlib.h>
#include <math.h>//gcc -o c c.c -lm;./c>c.ppm
typedef float f;typedef int d;d R=600;d C=1050;
f O=1.;f m=1.;
f z(f x,f o){return fmod(fmod(x,o)+o,o);}f o=
1/22.;f p=.04;f N=.0;f H=.5;f V=.25;void c(f 
(*q)[C*3][4]){f e=.07;f b=.14;f I[25][6]={{N,
-b,b,N,-3.3,O},{N,-b,p,N,-2.2,1.5},{e,N,N,b,
-3.,2.},{e,N,N,b,-3.,O},{p,-b,b,p,-m,O},{p,
b,-b,p,-.8,1.6},{p,N,N,b,-O,m},{b,N,N,b,
.8,2.},{N,-b,.1,N,m,O},{N,-b,b,N,2.7,O,o
},{N,-b,p,N,3.8,1.5},{e,N,N,b,3.,2.},{e,N,N,
b,3.,O},{.1,.07,-p,b,3.,.7},{N,-b,.1,
N,5.,.8},{e,N,N,b,6.8,2.},{e,N,N,b,6.8,.4
},{N,-b,b,N,6.5,O},{N,-b,b,N,8.5,O},{e,-.1
,e,.1,9.,1.4},{e,.1,-e,.1,9.,O}};
f J[25][6]={{N,-b,b,N,-3.3,O},{e,N,N,b,-3.,O}
,{e,N,N,b,-3.,V},{N,-b,p,N,-2.2,H},{p,-b,b,p,-
m,O},{p,b,-b,p,-.8,1.6},{p,N,N,b,-O,m},{b,
N,N,b,.8,2.},{N,-b,.10,N,m,O},{e,N,N,b,3.,
2.},{e,N,N,b,3.,.4},{N,-b,b,N,2.8,O},{p,N,
N,b,3.,1.2},{N,-b,b,N,4.4,O},{N,-b,b,N,5.6,O,p
},{p,-b,p,p,5.4,1.5},{p,b,-.1,p,4.5,
1.8},{p,-b,b,p,6.8,O},{p,b,-b,p,7.3,1.6},
{p,N,N,b,7.,m},{N,-b,b,N,8.5,O},{N,-b,b,N,9.4,
O},{p,b,-.1,p,8.5,1.7}};f t=H;f s=H;d i=0;d 
S=22;f Y=.4;f X=-b;f L=R*C;f k = 1/22.;
while(i<2*L){if(i==L){k=p;
memmove(&I,&J,sizeof(J));S=25;Y=-.1;}f a=(f)rand()/RAND_MAX;f P=
N;for(d z=0;z<S;z++){P+=k;if(a<P){f G=t*I
[z][0]+s*I[z][1]+I[z][4];s=t*I[z][2]+s*I[z][3]+I[
z][5];t=G;break;}}d W=(d)(z((O-s*.1+Y),O)*R*3);
d B=(d)(z(t*.1*R/C+H+X,O)*C*3);q[W][B][0]=m;q[W][
B][1]=m;q[W][B][2]=m;i++;}}d main(){printf("P6 %i %i 255 ",C,R);f (*q)[C*3][4];
q=malloc(R*144*C);c(q);for(d x=1;x<R*3-1;x+=3){for(
d y=1;y<C*3-1;y+=3){f r=O;f g=O;f b=O;for(d
 i=-1;i<2;i++){for(d j=-1;j<2;j++){d G=x+i;d F=y+j;
r+=q[G][F][0];g+=q[G][F][1];b+=q[G][F][2];}}f E=28.3;printf("%c%c%c",(d)(r*E),(d)(g*E),(d)(b*E));}}}