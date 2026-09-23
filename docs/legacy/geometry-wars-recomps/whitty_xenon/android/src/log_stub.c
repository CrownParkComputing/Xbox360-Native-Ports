// log_stub.c - liblog, for the static qemu build.
//
// android_host.cpp sends the harness's output to logcat, which does not exist
// under qemu-user and has no static library on any host. Standard error is the
// closest true thing, and it is where a qemu run's output is being read anyway.
#include <stdarg.h>
#include <stdio.h>

int __android_log_write(int priority, const char* tag, const char* text) {
    (void)priority;
    fprintf(stderr, "[%s] %s\n", tag, text);
    return 0;
}

int __android_log_print(int priority, const char* tag, const char* format, ...) {
    (void)priority;
    va_list args;
    va_start(args, format);
    fprintf(stderr, "[%s] ", tag);
    vfprintf(stderr, format, args);
    fputc('\n', stderr);
    va_end(args);
    return 0;
}
