#include <stdio.h>
#include <stdbool.h>

struct time {
  int hour;
  int minutes;
  int seconds;
};

int main(void) {
  struct time timeUpdate (struct time now);
  struct time currentTime, nextTime;

  printf ("Enter the time (hh:mm:ss): ");
  scanf("%i:%i:%i", &currentTime.hour, &currentTime.minutes, &currentTime.seconds);
