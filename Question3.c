/******************************************************************************

Programming Skills Challenge Siemens.
Question 3

*******************************************************************************/
#include <stdio.h>

int main()
{
    int count=1;
    while(count<=100){
      if((count % 3 == 0)&&(count % 5 == 0)){
        printf("FooBaa\n");
      }else if(count % 3 == 0 ){
         printf("Foo\n"); 
      }else if(count % 5 == 0 ){
         printf("Baa\n");
      }else{ 
      printf("%d\n",count);
      }
      count++;
    }

    return 0;
}
