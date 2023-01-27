#include <stdio.h>
#include <stdlib.h>

// กำหนดค่าคงที่ PI มีค่า 22.0/7
#define PI 22.0/7

int main()
{
    float radius = 1.5;
    float radius_3 = radius * radius * radius ;
    float volume = (4.0/3.0) * (PI) * (radius_3) ;

    printf("The volume of this sphere is %.2f " , volume) ;

    return 0;
}