#include <stdint.h>

#include "./server/start_it.c"

#define PORT 3333
#define BACKLOG 5

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: showip hostname\n");
        return 1;
    }

    start_serv(argv[1]);
    return 0;
}
