#include <stdio.h>
#include <string.h>

struct Person {
  char first_name[50];
  char last_name[50];
};

void get_full_name(struct Person p) {
  printf("Full name: %s %s\n", p.first_name, p.last_name);
}

int main() {
  struct Person p1;

  printf("Write first name: ");
  fgets(p1.first_name, sizeof(p1.first_name), stdin);

  if (strchr(p1.first_name, '\n') == NULL) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
  } else {
    p1.first_name[strcspn(p1.first_name, "\n")] = '\0';
  }

  printf("Write last name: ");
  fgets(p1.last_name, sizeof(p1.last_name), stdin);
  p1.last_name[strcspn(p1.last_name, "\n")] = '\0';

  get_full_name(p1);
  return 0;
}
