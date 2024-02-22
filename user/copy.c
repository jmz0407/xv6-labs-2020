//
// Created by 贾明卓 on 2024/2/23.
//
#include "kernel/types.h"
#include "user/user.h"
int
main(){
    char buf[64];
    while(1){
        //从 console 读取输入，通过 system call 的 read 函数的实现
        int n = read(0, buf, sizeof (buf));
        if(n <= 0){
            break;
        }
        write(1, buf, n);
    }

    exit(0);
}