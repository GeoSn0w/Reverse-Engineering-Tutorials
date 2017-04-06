//GeoSn0w's Reverse Engineering Tutorial
//Use the code as you want, WTFPL
#include <string.h>
#include <stdio.h>
#include <time.h>

int main(int argc, char *argv[]) {
if(argc==2) {
  printf("Preparing to check access key: %s\n", argv[1]);
  int hex = 0;
  for(int access=0; access<strlen(argv[1]); access++){
	hex += (int)argv[1][access];
  }
  if(hex==1568) {
    printf("Welcome! F.C.E. 365 Tool v35.1\n");
    printf("What are you doing today?\n");
    time_t timer;
    char buffer[26];
    struct tm* tm_info;
    time(&timer);
    tm_info = localtime(&timer);
    strftime(buffer, 26, "%Y-%m-%d %H:%M:%S", tm_info);
    puts(buffer);
    return 0;
  }
  else {
    printf("The access key is not correct!\n");
    printf("You are not allowed to use this software.\n");
  }
 } 
else {
   printf("To access the program you need the access key. Pass it with: <key>\n");
}
return 0;
}
