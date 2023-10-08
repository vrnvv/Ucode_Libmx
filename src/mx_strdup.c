#include "libmx.h"

char *mx_strdup(const char *s1) {
    char *dst = NULL;
    char *pointer;
    int len;

    len = mx_strlen(s1);
    dst = mx_strnew(len);
    pointer = mx_strcpy(dst, s1);
    return pointer;
}
