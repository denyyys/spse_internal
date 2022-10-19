#include <rtl.h>
// .. include school kit support

#define ON  (0)
#define OFF (1)

#define INTERVAL (5000)

/* Global parameters */
const enum pin leds[] = {
  LED_EX_0,
  LED_EX_1,
  LED_EX_2,
  LED_EX_3
};

OS_TID task_1bit;
OS_TID task_2bit,
OS_TID task_3bit;
OS_TID task_4bit;

/* Universal task */
__task void counter_4bit__1bit_task(void *argv) {
  int active = *(int *)argv;
  
  for (;;) {
    io_set(leds[active], OFF);
    delay(INTERVAL/(active + 1)); // When LED is `0` interval is Full, when LED is `3` interval is I\4
    io_set(leds[active], ON);
    delay(INTERVAL/(active + 1));
  }
}

__task void init(void) {
  int task_leds[] = {0, 1, 2, 3};
  task_1bit = os_tsk_create_ex(counter_4bit__1bit_task, 1, &task_leds[0]);
  task_2bit = os_tsk_create_ex(counter_4bit__1bit_task, 1, &task_leds[1]);
  task_3bit = os_tsk_create_ex(counter_4bit__1bit_task, 1, &task_leds[2]);
  task_4bit = os_tsk_create_ex(counter_4bit__1bit_task, 1, &task_leds[3]);
  os_tsk_self_delete();
}
