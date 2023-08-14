#include <stdio.h>
 
int main()
{
    float score;
     
    printf(" Enter score : ");
    scanf("%f", &score);
     
    if(score >= 80){
        printf("\n Grade : A (Excellent)");
    }
    else if(score >= 75){
        printf("\n Grade : B+ (Very Good)");
    }
    else if(score >= 70){
        printf("\n Grade : B (Good)");
    }
    else if(score >= 65){
        printf("\n Grade : C+ (Fairly Good)");
    }
    else if(score >= 60){
        printf("\n Grade : C (Fair)");
    }
    else if(score >= 55){
        printf("\n Grade : D+ (Poor)");
    }
    else if(score >= 50){
        printf("\n Grade : D (Very Poor)");
    }
    else{
        printf("\n Grade : F (Fail)");
    }
   
    return 0;
}