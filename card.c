#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#define ROWS 600
#define COLS 1050
float max_frequency=1.0;
float random_uniform(){return (float) rand()/RAND_MAX;}
float fmodn(float x, float o){return fmod(fmod(x,o)+o, o);}
float t=1./22.;float p=0.04;
void chaos_game(float (*matrix)[COLS*3][4]){float IFS[25][10]={
{0.,-0.14,0.13,0.,-3.3,1.,t,1.,0.8,0.24},
{0.,-0.14,0.045,0.,-2.2,1.54,t,0.98,0.51,0.44},
{0.065,0.,0.,0.14,-3.,2.,t,0.76,0.33,0.61},
{0.065,0.,0.,0.14,-3.,1.,t,0.49,0.33,0.62},
{0.034,-0.135,0.126,0.036,-1.25,1.,t,1.,0.8,0.24},
{0.055,0.127,-0.118,0.059,-0.75,1.6,t,0.98,0.51,0.44},
{.039,0.,0.,0.14,-1.,0.9,t,0.76,0.33,0.61},
{0.13,0.,0.,0.14,0.75,2.,t,0.49,0.33,0.62},
{0.,-0.14,0.104,0.,1.25,1.,t,1.,0.8,0.24},
{0.,-0.14,0.13,0.,2.7,1.,t,0.98,0.51,0.44},
{0.,-0.14,0.045,0.,3.8,1.54,t,0.76,0.33,0.61},
{0.065,0.,0.,0.14,3.,2.,t,0.49,0.33,0.62},
{0.065,0.,0.,0.14,3.,1.,t,1.,0.8,0.24},
{0.079,0.07,-0.045,0.121,3.,0.7,t,0.98,0.51,0.44},
{0.,-0.14,0.104,0.,5.,0.8,t,0.76,0.33,0.61},
{0.065,0.,0.,0.14,6.75,2.,t,0.49,0.33,0.62},
{0.065,0.,0.,0.14,6.75,0.4,t,1.,0.8,0.24},
{0.,-0.14,0.13,0.,6.5,1.,t,0.98,0.51,0.44},
{0.013,0.,0.,0.14,4.75,2.,t,0.76,0.33,0.61},
{0.,-0.14,0.13,0.,8.5,1.,t,0.49,0.33,0.62},
{0.064,-0.099,0.064,0.099,9.,1.4,t,1.,0.8,0.24},
{0.064,0.099,-0.064,0.099,9.,1.,t,0.98,0.51,0.44}};
float IFS2[25][10]={
{0.,-0.14,0.13,0.,-3.3,1.,p,1.,0.8,0.24},
{0.,-0.14,0.045,0.,-2.4,1.54,p,0.98,0.51,0.44},
{0.065,0.,0.,0.14,-3.,2.,p,0.76,0.33,0.61},
{0.065,0.,0.,0.14,-3.,1.,p,0.49,0.33,0.62},
{0.065,0.,0.,0.14,-3.,0.25,p,1.,0.8,0.24},
{0.,-0.14,0.045,0.,-2.2,0.6,p,0.98,0.51,0.44},
{0.034,-0.135,0.126,0.036,-1.25,1.,p,0.76,0.33,0.61},
{0.055,0.127,-0.118,0.059,-0.75,1.6,p,0.49,0.33,0.62},
{0.039,0.,0.,0.14,-1.,0.9,p,1.,0.8,0.24},
{0.13,0.,0.,0.14,0.75,2.,p,0.98,0.51,0.44},
{0.,-0.14,0.104,0.,1.25,1.,p,0.76,0.33,0.61},
{0.065,0.,0.,0.14,3.,2.,p,0.49,0.33,0.62},
{0.065,0.,0.,0.14,3.,0.4,p,1.,0.8,0.24},
{0.,-0.14,0.13,0.,2.75,1.,p,0.98,0.51,0.44},
{0.039,0.,0.,0.14,3.,1.2,p,0.76,0.33,0.61},
{0.,-0.14,0.13,0.,4.4,1.,p,0.49,0.33,0.62},
{0.,-0.14,0.13,0.,5.6,1.,p,1.,0.8,0.24},
{0.022,-0.132,0.061,0.048,5.4,1.52,p,0.98,0.51,0.44},
{0.031,0.132,-0.086,0.048,4.5,1.76,p,0.76,0.33,0.61},
{0.034,-0.135,0.126,0.036,6.75,1.,p,0.49,0.33,0.62},
{0.055,0.127,-0.118,0.059,7.25,1.6,p,1.,0.8,0.24},
{0.039,0.,0.,0.14,7.,0.9,p,0.98,0.51,0.44},
{0.,-0.14,0.13,0.,8.5,1.,p,0.76,0.33,0.61},
{0.,-0.14,0.13,0.,9.4,1.,p,0.49,0.33,0.62},
{0.027,0.135,-0.1,0.036,8.5,1.7,p,1.,0.8,0.24}};
float x_coordinate=random_uniform();float y_coordinate=random_uniform();
float color[3]={random_uniform(),random_uniform(),random_uniform()};int i=0;
int size=22;float y_offset=0.4;float x_offset=-0.15;
while(i<10000000){if(i==5000000){memmove(&IFS, &IFS2, sizeof(IFS2));
size=25;y_offset=-0.1;}float r=random_uniform();float cumulative_p=0.;
for(int z=0;z<size;z++){cumulative_p=cumulative_p+IFS[z][6];if(r<cumulative_p){
float x_t=x_coordinate*IFS[z][0]+y_coordinate*IFS[z][1]+IFS[z][4];
y_coordinate=x_coordinate*IFS[z][2]+y_coordinate*IFS[z][3]+IFS[z][5];
x_coordinate=x_t;color[0]=(color[0]+IFS[z][7])*0.5;
color[1]=(color[1]+IFS[z][8])*0.5;color[2]=(color[2]+IFS[z][9])*0.5;
break;}}float zoom=0.1;matrix[(int) (fmodn((1.0-y_coordinate*zoom+y_offset), 1.0)*ROWS*3)][(int) (fmodn(x_coordinate*zoom*ROWS/COLS+0.5+x_offset, 1.0)*COLS*3)][0]=color[0];
matrix[(int) (fmodn((1.0-y_coordinate*zoom+y_offset), 1.0)*ROWS*3)][(int) (fmodn(x_coordinate*zoom*ROWS/COLS+0.5+x_offset, 1.0)*COLS*3)][1]=color[1];
matrix[(int) (fmodn((1.0-y_coordinate*zoom+y_offset), 1.0)*ROWS*3)][(int) (fmodn(x_coordinate*zoom*ROWS/COLS+0.5+x_offset, 1.0)*COLS*3)][2]=color[2];
matrix[(int) (fmodn((1.0-y_coordinate*zoom+y_offset), 1.0)*ROWS*3)][(int) (fmodn(x_coordinate*zoom*ROWS/COLS+0.5+x_offset, 1.0)*COLS*3)][3]=matrix[(int) (fmodn((1.0-y_coordinate*zoom+y_offset), 1.0)*ROWS*3)][(int) (fmodn(x_coordinate*zoom*ROWS/COLS+0.5+x_offset, 1.0)*COLS*3)][3]+1;
if(matrix[(int) (fmodn((1.0-y_coordinate*zoom+y_offset), 1.0)*ROWS*3)][(int) (fmodn(x_coordinate*zoom*ROWS/COLS+0.5+x_offset, 1.0)*COLS*3)][3]>max_frequency){
max_frequency=matrix[(int) (fmodn((1.0-y_coordinate*zoom+y_offset), 1.0)*ROWS*3)][(int) (fmodn(x_coordinate*zoom*ROWS/COLS+0.5+x_offset, 1.0)*COLS*3)][3];}
i=i+1;}}int main(){printf("P6 %i %i 255 ", COLS, ROWS);
float (*matrix)[COLS*3][4];matrix=malloc(ROWS*3 * sizeof *matrix);
chaos_game(matrix);for(int x=1; x < ROWS*3-1; x+=3){
for(int y=1; y < COLS*3-1; y+=3){float r=0.0;
float g=0.0;float b=0.0;float freq=0.0;
for(int i=-1; i<2; i++){for(int j=-1; j<2; j++){
r=r+matrix[x+i][y+j][0];g=g+matrix[x+i][y+j][1];
b=b+matrix[x+i][y+j][2];freq=freq+matrix[x+i][y+j][3];}}
printf("%c%c%c",(int) (r/9.0*pow(log(freq/9.0)/log(max_frequency),1./2.2)*255.),
(int) (g/9.0*pow(log(freq/9.0)/log(max_frequency),1./2.2)*255.),
(int) (b/9.0*pow(log(freq/9.0)/log(max_frequency),1./2.2)*255.));}}free(matrix);}