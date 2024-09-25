#include <stdio.h>
int main(void) {
int password;
  printf("Enter your password: ");
    scanf("%d",&password);
      if (password==123){
        printf("ACCESS ALLOWED\n");
      }
      else{
        printf("ACCESS DENIED\n\n");
      }  
        printf("Entered password: %d",password);
  return 0;
}
