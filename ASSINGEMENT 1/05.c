// #include <stdio.h>
// typedef struct temperatre
// {
//     float max, min;
// } temp;
// void input(temp *p)
// {
//     printf("______________________");
//     printf("\nMaximum Temprature :: ");
//     scanf("%f",p->max);
//     fflush(stdin);
//     printf("\nMinimumTemprature :: ");
//     scanf("%f", p->max);
//     printf("______________________");
// }
// // int minAvg(temp d[],int day){
// //        temp *p;
// //        p= &d.min;
// //        int i;
// //        float sum=0;
// //        for(i=0;i<day;i++){
// //            sum=sum +*p[i];
// //        }
// //        return (sum/day);
// // }
// int main()
// {
//     temp day[3];
//     temp *p;
//     p = day;

//     int i, s_avg, l_avg;
//     for (i = 0; i < 3; i++)
//     {

//         input(p);
//     }
//     // s_avg =minAvg(day,3);
//     // printf("Minimun avg of several day is %f\n",s_avg);

//     return 0;
// }
#include <stdio.h>
struct temp{
int max;
int min;
};


float minAVG(struct temp d[], int TOTALDAYS )
{
    
    float sumN=0;
    float avrMIN=0;
    sumN+=d->min;
    avrMIN=sumN/(float)TOTALDAYS;
    return avrMIN;
}
float maxAVG(struct temp d[],int TOTALDAYS){
    
  static float sumM=0;
  float avrMAX=0;
  sumM+=d->max;
  avrMAX=sumM/(float)TOTALDAYS;
  return avrMAX;
}

void input( struct temp *p){
      printf("\nenter the maximum tempture for day ");
      scanf("%d",&p->max);
      
      
      printf("\nIn enter the minimum temp for the day:");
      scanf("%d",&p->min);
}

int main(int argc, const char * argv[]) {
        struct temp t[10];
        struct temp *p;
        p=&t[0];
        int days,i;
        float AVGminimum=0,AVGmaximum=0;
        
        printf("\nenter the number of days:");
        scanf("%d",&days);
        
        for(i=0; i<days; i++){
        input(p);
        }

        AVGminimum=minAVG(p, days);
        AVGmaximum=maxAVG(p, days);
        
        printf("\n%.2f minimum",AVGminimum);
        printf("\n%.2f maximum",AVGmaximum);
        printf("\nHello, World! ");
        return 0;
}