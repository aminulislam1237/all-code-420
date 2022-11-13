#include <stdio.h>
int main()
{
  char ara[5];
  printf("Enter three char o, g, n in order ");
  for(int i = 0; i < 3; i++){
    scanf(" %c", &ara[i]);
  }
  printf("Deleted One char from end\n");
  printf("Enter two char n, a in order ");
  for(int i = 2; i < 4; i++){
    scanf(" %c", &ara[i]);
  }
  printf("Deleted One char from end\n");
  printf("Enter two char a, m in order ");
  for(int i = 3; i < 5; i++){
    scanf(" %c", &ara[i]);
  }
  printf("Deleted One char from end\n");
  printf("Enter one char m in order ");
  ara[4]='m';
  printf("Do you want to insert some other char ?\n\t1.YES\n\t0.NO ");
  int n;
  while(scanf("%d", &n) && n){
    printf("Overflow!!!!!!\n");
  }
  for(int i = 4; i >= 0; i--){
    printf("%c", ara[i]);
  }
  printf("\n");
  return 0;
}
