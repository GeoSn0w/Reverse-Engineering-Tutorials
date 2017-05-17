//GeoSn0w's Reverse Engineering Tutorial
//Use the code as you want, WTFPL
#include <string.h>
#include <stdio.h>
#include <sys/utsname.h>

int main(int argc, char *argv[]) {
printf("Welcome to the iOS Reverse Engineering Level 3! \n");
printf("Created by GeoSn0w (@FCE365)\n\n");
printf("The challenge is to hack this application so that you can use it without any serial number and obtain the flag! \n\n");
printf("**************** START **************** \n\n");
if(argc==2) {
  printf("Preparing to check access key: %s\n", argv[1]);
  int hex = 0;
  for(int access=0; access<strlen(argv[1]); access++){
	hex += (int)argv[1][access];
  }
  if(hex==1268) {
    printf("Welcome! F.C.E. 365 Tool v36.1\n");
    printf("\n");
    printf("Blimey! You're not a good man! You've hacked the app!\n \n");
    printf("Flag: 0x038948FFFF83--DS \n");
    printf("System Identity:\n");
    struct utsname u;
  	uname (&u);
  	printf ("%s Release %s (Version %s) on %s\n", u.sysname, u.release, u.version, u.machine);
 	return 0;
  }
  else {
    printf("The serial number is not correct!\n");
    printf("The application is locked!\n");
    
  }
 } 
else {
   printf("This application requires a serial number to work! You can validate it with <key>\n");
   printf("Or you can do what hackers do the best...\n");
}
return 0;
}