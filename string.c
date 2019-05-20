#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void stringLength(char str[]) {
  int size=0;
  int i=0;
  while (str[i]!='\0') {
    size++;
    i++;
  }
  printf("the size is %d",size);
}

void stringCompare(char str1[],char str2[]) {
  int result,len1,len2,i;
  len1=strlen(str1);
  len2=strlen(str2);
  if(len1!=len2){
    printf("strings are diffrent\n");
    }
   else{
      for(i=0;str1[i]!='\0';i++){
        if (str1[i]!=str2[i]) {
          printf("strings are diffrent");
          exit(0);
        }

      }
      printf("strings are equal");
    }
}


void stringCombine(char str1[],char str2[]) {
  char str3[100];
  int k=0,i;
  for ( i = 0; str1[i]!='\0'; i++) {
    str3[k]=str1[i];
    k++;
  }
  for ( i = 0; str2[i]!='\0'; i++) {
    str3[k]=str2[i];
    k++;
  }
  str3[k]='\0';
  printf("concatenated strings is %s", str3);
}

int main(int argc, char const *argv[]) {
  char str[100],str1[100],str2[100];
  int choice;
  printf("select the string function you want to use \n 1.stringLength\n 2.stringCompare\n 3.stringConcatenation\n");
  scanf("%d",&choice);
  switch (choice) {
    case 1:
      printf("enter string = ");
      scanf("%s",str);
      stringLength(str);
      break;
    case 2:
      printf("enter string 1 =");
      scanf("%s", str1);
      printf("enter string 2");
      scanf("%s",str2);
      stringCompare(str1,str2);
      break;
    case 3:
      printf("enter string 1 =");
      scanf("%s", str1);
      printf("enter string 2");
      scanf("%s",str2);
      stringCombine(str1,str2);
      break;
    defualt:
      printf("an invalid choice\n");
    }
  return 0;
}
