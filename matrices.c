#include <stdio.h>
#include <math.h>
int main(){
    float mat[3][3]={{1.0,2.0,0.0},{-2.0,1.0,2.0},{1.0,3.0,1.0}};
    float eig[3]={1.0,1.0,1.0};
    float v1 , v2, v3;
    for (int i = 0; i < 15; i++)
    {
        v1=mat[0][0]*eig[0]+mat[0][1]*eig[1]+mat[0][2]*eig[2];
        v2=mat[1][0]*eig[0]+mat[1][1]*eig[1]+mat[1][2]*eig[2];
        v3=mat[2][0]*eig[0]+mat[2][1]*eig[1]+mat[2][2]*eig[2];

        eig[0]=v1;
        eig[1]=v2;
        eig[2]=v3;
        printf("eigen vector is = %f,%f,%f \n",eig[0],eig[1],eig[2]);

    }
    return 0;

}