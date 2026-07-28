#ifndef LINE_H
#define LINE_H
#include <stdio.h>

// clear_line: Clears the current line
void clear_line(void);

// add_word: Adds word to end of the current line .
//           If this is not the first word on the line
//           puts one space before word.
void add_word(const char* word);

// space_remeaning: Return the number of character left
//                  in the current line.
int space_remaning(void);

// write_line: Writes the current line with
//             justificaiton.
void write_line(FILE *stream);

// flush_line: Writes the current line without
//             justifications. If the line is empty, does
//             nothing.
void flush_line(FILE *stream);

#endif

