#include <stdlib.h> //gcc -o card card.c -lm	
#include <math.h>	//./card > card.ppm
#define Z printf(
typedef float f;typedef int d;d R=600;d C=1050;
f O=1.;f m=1.;f r(){return (f)rand()/RAND_MAX;}
f z(f x,f o){return fmod(fmod(x,o)+o,o);}f t=
1./22.;f p=0.04;f N=0.;f H=0.5;f V=0.25;void c(f 
(*q)[C*3][4]){f e=0.065;f b=0.14;f I[25][10]={{N,
-b,b,N,-3.3,O,t},{N,-b,p,N,-2.2,1.54,t},{e,N,N,b,
-3.,2.,t},{e,N,N,b,-3.,O,t},{p,-b,b,p,-m,O,t},{p,
b,-b,p,-0.75,1.6,t},{.039,N,N,b,-O,m,t},{b,N,N,b,
0.75,2.,t},{N,-b,0.104,N,m,O,t},{N,-b,b,N,2.7,O,t
},{N,-b,p,N,3.8,1.54,t},{e,N,N,b,3.,2.,t},{e,N,N,
b,3.,O,t},{0.079,0.07,-p,b,3.,0.7,t},{N,-b,0.104,
N,5.,0.8,t},{e,N,N,b,6.75,2.,t},{e,N,N,b,6.75,0.4
,t},{N,-b,b,N,6.5,O,t},{N,-b,b,N,8.5,O,t},{e,-0.1
,e,0.1,9.,1.4,t},{e,0.1,-e,0.1,9.,O,t}};
f J[25][10]={{N,-b,b,N,-3.3,O,p},{e,N,N,b,-3.,O,p}
,{e,N,N,b,-3.,V,p},{N,-b,p,N,-2.2,H,p},{p,-b,b,p,-
m,O,p},{p,b,-b,p,-0.75,1.6,p},{p,N,N,b,-O,m,p},{b,
N,N,b,0.75,2.,p},{N,-b,0.104,N,m,O,p},{e,N,N,b,3.,
2.,p},{e,N,N,b,3.,0.4,p},{N,-b,b,N,2.75,O,p},{p,N,
N,b,3.,1.2,p},{N,-b,b,N,4.4,O,p},{N,-b,b,N,5.6,O,p
},{0.022,-b,p,p,5.4,1.52,p},{0.031,b,-0.086,p,4.5,
1.76,p},{p,-b,b,p,6.75,O,p},{p,b,-b,p,7.25,1.6,p},
{p,N,N,b,7.,m,p},{N,-b,b,N,8.5,O,p},{N,-b,b,N,9.4,
O,p},{0.03,b,-0.1,p,8.5,1.7,p}};f D[4][3]={{m,0.8,
V},{m,H,0.44},{0.76,0.33,0.61},{H,0.33,0.62}};
f t=r();f s=r();f w[3]={r(),r(),r()};d i=0;d S=22;
f Y=0.4;f X=-b;f L=R*C;while(i<2*L){if(i==L){
memmove(&I,&J,sizeof(J));S=25;Y=-0.1;}f a=r();f P=
N;for(d z=0;z<S;z++){P=P+I[z][6];if(a<P){f x_t=t*
I[z][0]+s*I[z][1]+I[z][4];s=t*I[z][2]+s*I[z][3]+
I[z][5];t=x_t;w[0]=(w[0]+D[z%4][0])*H;w[1]=(w[1]+
D[z%4][1])*H;w[2]=(w[2]+D[z%4][2])*H;break;}}d W=
(d)(z((O-s*0.1+Y),O)*R*3);d B=(d)(z(t*0.1*R/C+H+X,
O)*C*3);q[W][B][0]=w[0];q[W][B][1]=w[1];q[W][B][2]
=w[2];q[W][B][3]+=1;if(q[W][B][3]>m){m=q[W][B][3];}
i++;}}d main(){Z"P6 %i %i 255 ",C,R);f (*q)[C*3][4];
q=malloc(R*144*C);c(q);for(d x=1;x<R*3-1;x+=3){for(
d y=1;y<C*3-1;y+=3){ f r=O;f g=O;f b=O;f U=O;for(d
 i=-1;i<2;i++){for(d j=-1;j<2;j++){d G=x+i;d F=y+j;
r+=q[G][F][0];g+=q[G][F][1];b+=q[G][F][2];U+=
q[G][F][3];}}f E=pow(log(U/9.)/log(m),1./2.2)*28.3;
Z"%c%c%c",(d)(r*E),(d)(g*E),(d)(b*E));}}}