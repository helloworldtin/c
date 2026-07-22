#include <stdio.h>
#include <stdlib.h>
// hello world
int line_length(const char *filename, int n)
{
    FILE *fp = fopen(filename, "r");
    
    int ch, line_ch_count = 0, line_number = 1; // line_number = 1 because line always start from one
    
    if(fp == NULL)
    {
        fprintf(stderr, "unable to open file %s\n", filename);
        exit(EXIT_FAILURE);
    }
    
    if(n == 1)
    {
        while(getc(fp) != '\n')
            line_ch_count += 1;
            
        fclose(fp);
        return line_ch_count;
    }
    
        
    while((ch = getc(fp)) != EOF)
    {
        if(ch == '\n')
            line_number += 1; 
        if(line_number == n)
        {
            while(getc(fp) != '\n')
                line_ch_count += 1;
            fclose(fp);
            return line_ch_count;
        }
    }
    
    return 0;
}

int main(void)
{
    const char *filename = "05_line_len.c";
    int result = line_length(filename, 3);
    printf("%d res is first\n", result);
    return 0;
}