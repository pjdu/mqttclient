/*
 * @Author: jiejie
 * @Github: https://github.com/jiejieTop
 * @Date: 2019-12-10 22:18:32
 * @LastEditTime: 2019-12-16 12:44:27
 * @Description: the code belongs to jiejie, please keep the author information and source code according to the license.
 */

#include <sys/time.h>
#include <stdio.h>
#include <unistd.h>

typedef struct platform_timer {
    struct timeval time;
} platform_timer_t;

void platform_timer_init(platform_timer_t* timer);
void platform_timer_cutdown(platform_timer_t* timer, unsigned int timeout);
char platform_timer_is_expired(platform_timer_t* timer);
int platform_timer_timer_remain(platform_timer_t* timer);


