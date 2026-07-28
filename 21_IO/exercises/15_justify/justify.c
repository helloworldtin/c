#include <string.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(int argc, char *argv[])
{
    if(argc != 3) {
        fprintf(stderr, "Usage justify <inputfile> <outputfile>\n");
        return -1;
    }
    char word[MAX_WORD_LEN + 2], *input_filename = argv[1], *output_filename = argv[2];
    FILE *input_fp, *output_fp;
    int word_len;

    if((input_fp = fopen(input_filename, "r")) == NULL) {
        fprintf(stderr, "Can't open %s\n", input_filename);
        return -1;
    }

    if((output_fp = fopen(output_filename, "w")) == NULL) {
        fprintf(stderr, "Can't open %s\n", output_filename);
        return -1;
    }

    clear_line();
    for(;;) {
        read_word(word, MAX_WORD_LEN + 1, input_fp);
        word_len = strlen(word);
        if(word_len == 0) {
            flush_line(output_fp);
            return 0;
        }

        if(word_len > MAX_WORD_LEN)
            word[MAX_WORD_LEN] = '*';
        if(word_len + 1 > space_remaning()) {
            write_line(output_fp);
            clear_line();
        }

        add_word(word);
    }
    fclose(input_fp);
    fclose(ouput_fp);
    return 0;
}
