#include <stdio.h>
#include<math.h>
// finding distance
int main() {
    int x1,x2,y1,y2,distance;
    printf("enter :");
    scanf("%d%d%d%d",&x1,&x2,&y1,&y2);
    distance = sqrt ( pow(x2-x1,2) + pow(y2-y1,2) );
    printf("distance is = %d \n",distance);
}
