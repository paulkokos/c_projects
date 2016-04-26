/*Given a time in AM/PM format, convert it to military (2424-hour) time.
Note: Midnight is 12:00:00AM12:00:00AM on a 1212-hour clock, and 00:00:0000:00:00 on a 2424-hour clock. Noon is 12:00:00PM12:00:00PM on a 1212-hour clock, and 12:00:0012:00:00 on a 2424-hour clock.
Input Format
A single string containing a time in 1212-hour clock format (i.e.: hh:mm:ssAMhh:mm:ssAM or hh:mm:ssPMhh:mm:ssPM), where 01≤hh≤1201≤hh≤12.
Output Format
Convert and print the given time in 2424-hour format, where 00≤hh≤2300≤hh≤23.

Sample Input
07:05:45PM
Sample Output
19:05:45*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main() {
    int hh, mm, ss ;
    char t12[3];
    scanf("%d:%d:%d%s", &hh, &mm, &ss, t12) ;

    if (strcmp(t12,"PM")==0 && hh!=12) hh += 12 ;
    if (strcmp(t12,"AM")==0 && hh==12) hh = 0 ;

    printf("%02d:%02d:%02d", hh, mm, ss) ;
    return 0;
}









//void time_conv(int *hours, int *mins, int *secs, char *s){
////    int result = 0;
//    if (strcmp(s,"AM")== 0){
//        *hours = *hours ;
//        *mins =  *mins;
//        *secs = *secs;
//    }else if (strcmp(s,"PM")== 0){
//        *hours = *hours + 12;
//        *mins = *mins;
//        *secs = *secs;
//    } else {
//        printf("Den kaname tpt");
//    }
//}
//
//int main(void) {
//    int hours = 0;
//    int mins = 0;
//    int secs = 0;
//    char s[2];
////    printf("Dose ora (hh : mm : ssAM/PM)");
//    scanf("%d",&hours);
//    scanf("%d",&mins);
//    scanf("%d",&secs);
//    scanf("%s",s);
//    time_conv(&hours, &mins, &secs, s);
//    printf("%d:%d: %d: %s \n", hours, mins, secs, s);
//    return 0;
//}