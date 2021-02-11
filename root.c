
#include<math.h>


float root(int x, int y){
    float z = pow(x, 1.0/y);
    printf("%d ^ 1/%d = %f \n", y,x,z);
    return z; 
}