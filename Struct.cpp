#include<stdio.h>
#include<string.h>

struct node {
  int age;
  char *name;
  double score;
};

int main() {
  node *ptr;
  ptr->age = 18;
  strcpy(ptr->name, "John");
  ptr->score = 99.5;
  printf("%d %s %f.\n", ptr->age, ptr->name, ptr->score);
  node temp;
  temp.score = ptr->score;
  if (temp.score <= 100) {
    printf("%d %s %f.\n", temp.age, temp.name, temp.score);
  }
  else
    printf("nothing.\n");
}
