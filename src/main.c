#include "loader.h"

int main(int ac, char * av[]) {
    (void) ac;
    (void) av;

    my_printf("Integer: %d \nChar: %c\nString: %s\nEmpty: %\n", 666, 'a', "ca marche ici");

    return 0;
}
