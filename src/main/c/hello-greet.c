#include "hello-greet.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char * get_greet(char *who) {
    int len = strlen(who) + 5 + 2; /* 2 = 1 for the space, one for terminal null */
    char *s = malloc(len);
    snprintf(s, len, "%s %s", "Hello", who);
    return s;
}
