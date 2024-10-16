#include <stdio.h>
#include <stdlib.h>

#define NUM_DEPARTURE_TIMES 8

int main(void) {
  int departure[NUM_DEPARTURE_TIMES] = {480, 583, 679, 767, 840, 945, 1140, 1305};
  int arrival[NUM_DEPARTURE_TIMES] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
  int user_time, hour, minute;
  int d_hour, d_min, a_hour, a_min;

  printf("Enter a 24-hour time: ");
  scanf("%d :%d", &hour, &minute);
  user_time = hour * 60 + minute;

  printf("Closest departure time is ");

  for(int i = 0; i < NUM_DEPARTURE_TIMES - 1; i++) {
    if(user_time <= departure[i] + (departure[i + 1] - departure[i]) / 2) {
      d_hour = departure[i] / 60 > 12 ? departure[i] / 60 - 12 : departure[i] / 60;
      d_min = departure[i] % 60;
      a_hour = arrival[i] / 60 > 12 ? arrival[i] / 60 - 12 : arrival[i] / 60;
      a_min = arrival[i] % 60;

      printf("%d:%.2d %c.m, arriving at %d:%.2d %c.m.\n",
             d_hour, d_min, departure[i] / 60 > 11 ? 'p' : 'a',
             a_hour, a_min, arrival[i] / 60 > 11 ? 'p' : 'a');
      return 0;
    }
  }

  d_hour = departure[7] / 60 > 12 ? departure[7] / 60 - 12 : departure[7] / 60;
  d_min = departure[7] % 60;
  a_hour = arrival[7] / 60 > 12 ? arrival[7] / 60 - 12 : arrival[7] / 60;
  a_min = arrival[7] % 60;

  printf("%d:%.2d %c.m, arriving at %d:%.2d %c.m.\n",
         d_hour, d_min, departure[7] / 60 > 11 ? 'p' : 'a',
         a_hour, a_min, arrival[7] / 60 > 11 ? 'p' : 'a');
  return 0;

}
