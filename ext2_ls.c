#include "ext2_utils.h"

int main(int argc, char **argv) {

    if(argc != 2) {
        fprintf(stderr, "Usage: readimg <image file name>\n");
        exit(1);
    }
    ext2_init(argv[1]);

    return 0;
}