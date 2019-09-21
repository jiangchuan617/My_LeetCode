#include <stdio.h>



char *a[]={'wel','to','n','g'};
char **aa[] = {a+1,a,a+3,a+2};
char ***aaa=aa;
int main(){
    printf("%s\n",**++aaa);
    printf("%s\n",*--*++aaa+1);
    printf("%s\n",*aaa[-2]+1);
    return 0;

}
