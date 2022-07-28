#include <stdlib.h>
#include <math.h>//gcc -o c c.c -lm;./c>c.ppm
typedef float f;typedef int d;d R=600;d C=1050;
f O=1.;f m=1.;
f z(f x,f o){return fmod(fmod(x,o)+o,o);}f t=
1/22.;f p=.04;f N=.0;f H=.5;f V=.25;void c(f 
(*q)[C*3][4]){f e=.07;f b=.14;f I[25][10]={{N,
-b,b,N,-3.3,O,t},{N,-b,p,N,-2.2,1.5,t},{e,N,N,b,
-3.,2.,t},{e,N,N,b,-3.,O,t},{p,-b,b,p,-m,O,t},{p,
b,-b,p,-.8,1.6,t},{p,N,N,b,-O,m,t},{b,N,N,b,
.8,2.,t},{N,-b,.1,N,m,O,t},{N,-b,b,N,2.7,O,t
},{N,-b,p,N,3.8,1.5,t},{e,N,N,b,3.,2.,t},{e,N,N,
b,3.,O,t},{.1,.07,-p,b,3.,.7,t},{N,-b,.1,
N,5.,.8,t},{e,N,N,b,6.8,2.,t},{e,N,N,b,6.8,.4
,t},{N,-b,b,N,6.5,O,t},{N,-b,b,N,8.5,O,t},{e,-.1
,e,.1,9.,1.4,t},{e,.1,-e,.1,9.,O,t}};
f J[25][10]={{N,-b,b,N,-3.3,O,p},{e,N,N,b,-3.,O,p}
,{e,N,N,b,-3.,V,p},{N,-b,p,N,-2.2,H,p},{p,-b,b,p,-
m,O,p},{p,b,-b,p,-.8,1.6,p},{p,N,N,b,-O,m,p},{b,
N,N,b,.8,2.,p},{N,-b,.10,N,m,O,p},{e,N,N,b,3.,
2.,p},{e,N,N,b,3.,.4,p},{N,-b,b,N,2.8,O,p},{p,N,
N,b,3.,1.2,p},{N,-b,b,N,4.4,O,p},{N,-b,b,N,5.6,O,p
},{p,-b,p,p,5.4,1.5,p},{p,b,-.1,p,4.5,
1.8,p},{p,-b,b,p,6.8,O,p},{p,b,-b,p,7.3,1.6,p},
{p,N,N,b,7.,m,p},{N,-b,b,N,8.5,O,p},{N,-b,b,N,9.4,
O,p},{p,b,-.1,p,8.5,1.7,p}};f t=H;f s=H;d i=0;d 
S=22;f Y=.4;f X=-b;f L=R*C;while(i<2*L){if(i==L){
memmove(&I,&J,sizeof(J));S=25;Y=-.1;}f a=(f)rand()/RAND_MAX;f P=
N;for(d z=0;z<S;z++){P+=I[z][6];if(a<P){f x_t=t*I
[z][0]+s*I[z][1]+I[z][4];s=t*I[z][2]+s*I[z][3]+I[
z][5];t=x_t;break;}}d W=(d)(z((O-s*.1+Y),O)*R*3);
d B=(d)(z(t*.1*R/C+H+X,O)*C*3);q[W][B][0]=m;q[W][
B][1]=m;q[W][B][2]=m;i++;}}d main(){printf("P6 %i %i 255 ",C,R);f (*q)[C*3][4];
q=malloc(R*144*C);c(q);for(d x=1;x<R*3-1;x+=3){for(
d y=1;y<C*3-1;y+=3){f r=O;f g=O;f b=O;f U=O;for(d
 i=-1;i<2;i++){for(d j=-1;j<2;j++){d G=x+i;d F=y+j;
r+=q[G][F][0];g+=q[G][F][1];b+=q[G][F][2];U+=
q[G][F][3];}}f E=28.3;printf("%c%c%c",(d)(r*E),(d)(g*E),(d)(b*E));}}}