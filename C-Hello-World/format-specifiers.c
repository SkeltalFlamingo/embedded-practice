# include<stdio.h>

int main() {


// use format specifiers for template string
// %d int
// %c char
// %s c-style string (null-terminated character array)
// %.<a>f float, where a is the number of decimal places shown

  int score, otherScore, thirdScore;
  score = otherScore = thirdScore = 450;

  char text[] = "foo";
  float perciseValue = 3.453f; // could also maybe use 3453e-3


  printf("score is: %d\ntext is: %s\nperciseVaule is: %.4f\n", score, text, perciseValue);
  return 0;
}