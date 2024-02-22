#include "kernel/types.h"
#include "user/user.h"

int main() {
    int uptime_sec = uptime();
    printf("System uptime: %d seconds\n", uptime_sec);
    exit(0);
}
