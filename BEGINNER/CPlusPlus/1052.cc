#include <stdio.h>

int main(){
    int n = 0;
    char * mes[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    scanf ("%d", &n);
    printf("%s\n", mes[n - 1]);

return 0;
}//end main

