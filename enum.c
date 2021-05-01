#include <stdio.h>

int main(void){

    enum weekday {saterday=10, sunday, monday, tuesday, wednesday, thursday, friday} today = sunday, tomorrow = today+1;
    

    
    enum weekday m = friday;

    m = 60;
    printf("%d\n", today);
    printf("%d", thursday);



    return 0;
}