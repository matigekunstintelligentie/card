#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define Z printf(
typedef float f;typedef int d;d R=600;d C=1050;
f O=1.;f m=1.;f r(){return (f)rand()/RAND_MAX;}
f z(f x,f o){return fmod(fmod(x,o)+o,o);}
f t=1./22.;f p=0.04;f N=0.;f H=0.5;
void c(f (*q)[C*3][4]){f I[25][10]={
{N,-0.14,0.13,N,-3.3,O,t,O,0.8,0.24},
{N,-0.14,0.05,N,-2.2,1.54,t,0.98,H,0.44},
{0.065,N,N,0.14,-3.,2.,t,0.76,0.33,0.61},
{0.065,N,N,0.14,-3.,O,t,0.49,0.33,0.62},
{0.034,-0.135,0.126,0.036,-1.25,O,t,O,0.8,0.24},
{0.055,0.127,-0.118,0.059,-0.75,1.6,t,0.98,H,0.44},
{.039,N,N,0.14,-O,0.9,t,0.76,0.33,0.61},
{0.13,N,N,0.14,0.75,2.,t,0.49,0.33,0.62},
{N,-0.14,0.104,N,1.25,O,t,O,0.8,0.24},
{N,-0.14,0.13,N,2.7,O,t,0.98,H,0.44},
{N,-0.14,0.05,N,3.8,1.54,t,0.76,0.33,0.61},
{0.065,N,N,0.14,3.,2.,t,0.49,0.33,0.62},
{0.065,N,N,0.14,3.,O,t,O,0.8,0.24},
{0.079,0.07,-0.05,0.121,3.,0.7,t,0.98,H,0.44},
{N,-0.14,0.104,N,5.,0.8,t,0.76,0.33,0.61},
{0.065,N,N,0.14,6.75,2.,t,0.49,0.33,0.62},
{0.065,N,N,0.14,6.75,0.4,t,O,0.8,0.24},
{N,-0.14,0.13,N,6.5,O,t,0.98,H,0.44},
{0.013,N,N,0.14,4.75,2.,t,0.76,0.33,0.61},
{N,-0.14,0.13,N,8.5,O,t,0.49,0.33,0.62},
{0.064,-0.1,0.064,0.1,9.,1.4,t,O,0.8,0.24},
{0.064,0.1,-0.064,0.1,9.,O,t,0.98,H,0.44}};
f J[25][10]={{N,-0.14,0.13,N,-3.3,O,p,O,0.8,0.24},
{N,-0.14,0.05,N,-2.4,1.54,p,0.98,H,0.44},
{0.065,N,N,0.14,-3.,2.,p,0.76,0.33,0.61},
{0.065,N,N,0.14,-3.,O,p,0.49,0.33,0.62},
{0.065,N,N,0.14,-3.,0.25,p,O,0.8,0.24},
{N,-0.14,0.05,N,-2.2,0.6,p,0.98,H,0.44},
{0.034,-0.135,0.126,0.036,-1.25,O,p,0.76,0.33,0.61},
{0.055,0.127,-0.118,0.059,-0.75,1.6,p,0.49,0.33,0.62},
{0.039,N,N,0.14,-O,0.9,p,O,0.8,0.24},
{0.13,N,N,0.14,0.75,2.,p,0.98,H,0.44},
{N,-0.14,0.104,N,1.25,O,p,0.76,0.33,0.61},
{0.065,N,N,0.14,3.,2.,p,0.49,0.33,0.62},
{0.065,N,N,0.14,3.,0.4,p,O,0.8,0.24},
{N,-0.14,0.13,N,2.75,O,p,0.98,H,0.44},
{0.039,N,N,0.14,3.,1.2,p,0.76,0.33,0.61},
{N,-0.14,0.13,N,4.4,O,p,0.49,0.33,0.62},
{N,-0.14,0.13,N,5.6,O,p,O,0.8,0.24},
{0.022,-0.132,0.061,0.05,5.4,1.52,p,0.98,H,0.44},
{0.031,0.132,-0.086,0.05,4.5,1.76,p,0.76,0.33,0.61},
{0.034,-0.135,0.126,0.036,6.75,O,p,0.49,0.33,0.62},
{0.055,0.127,-0.118,0.059,7.25,1.6,p,O,0.8,0.24},
{0.039,N,N,0.14,7.,0.9,p,0.98,H,0.44},
{N,-0.14,0.13,N,8.5,O,p,0.76,0.33,0.61},
{N,-0.14,0.13,N,9.4,O,p,0.49,0.33,0.62},
{0.027,0.135,-0.1,0.036,8.5,1.7,p,O,0.8,0.24}};
f t=r();f s=r();f w[3]={r(),r(),r()};d i=0;
d S=22;f Y=0.4;f X=-0.15;f L=5000000;
while(i<2*L){if(i==L){memmove(&I,&J,sizeof(J));
S=25;Y=-0.1;}f a=r();f P=N;
for(d z=0;z<S;z++){P=P+I[z][6];if(a<P){
f x_t=t*I[z][0]+s*I[z][1]+I[z][4];
s=t*I[z][2]+s*I[z][3]+I[z][5];
t=x_t;w[0]=(w[0]+I[z][7])*H;
w[1]=(w[1]+I[z][8])*H;w[2]=(w[2]+I[z][9])*H;break;}}
d W=(d)(z((O-s*0.1+Y),O)*R*3);d B=(d)(z(t*0.1*R/C+H+X,O)*C*3);
q[W][B][0]=w[0];q[W][B][1]=w[1];q[W][B][2]=w[2];
q[W][B][3]+=1;if(q[W][B][3]>m){m=q[W][B][3];}
i=i+1;}}d main(){Z"P6 %i %i 255 ",C,R);
f (*q)[C*3][4];q=malloc(R*3*50400);
c(q);for(d x=1;x<R*3-1;x+=3){
for(d y=1;y<C*3-1;y+=3){ f r=O;f g=O;f b=O;f U=O;
for(d i=-1;i<2;i++){for(d j=-1;j<2;j++){d G=x+i;d F=y+j;
r+=q[G][F][0];g+=q[G][F][1];b+=q[G][F][2];U+=q[G][F][3];}}
f E=pow(log(U/9.0)/log(m),1./2.2)*28.3;
Z"%c%c%c",(d)(r*E),(d)(g*E),(d)(b*E));}}free(q);}