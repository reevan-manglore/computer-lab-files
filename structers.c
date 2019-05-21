#include <stdio.h>

struct Student {
  int total;
  char name[50];
  int marks_sub[10];

};

int main(int argc, char const *argv[]) {
  int i,j,n,class_total=0;
  float average=0;
  struct Student stud[10];
  printf("enter number of Students = ");
  scanf("%d",&n);
  for ( i = 0; i < n; i++) {
    printf("enter student %d details\n",i+1);
    printf("enter student name = ");
    scanf("%s",stud[i].name);
    stud[i].total=0;
    printf("enter %s's marks = ");
    for ( j = 0; j <5; j++) {
      scanf("%d",&stud[i].marks_sub[j]);
    }
  }

  for ( i = 0; i < n; i++) {
    for ( j = 0; j < 5; j++) {
      stud[i].total=stud[i].total+stud[i].marks_sub[j];
    }
    class_total+=stud[i].total;
    printf("\ntotal marks of %s is %d",stud[i].name,stud[i].total);
  }
  average=(float)class_total/n;
  printf("\naverage of class is = %f ",average);
  for (int i = 0; i < n; i++) {
    if (stud[i].total>average) {
      printf("\n %s scored above average",stud[i].name);
    }
    else{
      printf("\n %s scored below average",stud[i].name);
    }
  }
  return 0;
}
