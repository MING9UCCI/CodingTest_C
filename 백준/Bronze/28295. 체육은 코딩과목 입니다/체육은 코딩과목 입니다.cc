#include <stdio.h>

int main() {
    int t;
    int dir = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &t);
        switch(t) {
            case (1):
                dir = (dir + 1) % 4;
                break;
            case (2):
                dir = (dir + 2) % 4;
                break;
            case (3):
                dir = (dir - 1 + 4) % 4;
                break;
            default:
                break;
        }
    }
    switch(dir) {
        case (0):
            printf("N");
            break;
        case (1):
            printf("E");
            break;
        case (2):
            printf("S");
            break;
        case (3):
            printf("W");
            break;
        default:
            break;
    }
    
    
    return 0;
}