//I saw a meme with an equation asking for integer solutions
//it got too messy to solve algebraicly (for me) so I wrote this to confirm my suspicious that there are none
//not a proof, but it seems there are not any

#include <stdio.h>
#include <math.h>

#define MAX_A 1000
#define MAX_B 1000
#define MAX_C 1000
#define EPSILON 0.000000000001


float eqn(float a, float b, float c) {
    float sum = a/(b+c) + b/(a+c) + c/(a+b);
    //return (abs(sum-4) < EPSILON);
    return sum;
}


int main(int argv, char** argc) {
    float a,b,c;
    for(a = 0; a < MAX_A; a++) {
        for(b = 0; b < MAX_B; b++) {
            for(c = 0; c < MAX_C; c++) {
                if(eqn(a,b,c)) {
                    float result = eqn(a,b,c);
                    if(fabs(result - 4) < EPSILON)
                        printf("values %f, %f, and %f make %f\n", a, b, c, result);
                } 
            }
        }
    }

    return 0;
}