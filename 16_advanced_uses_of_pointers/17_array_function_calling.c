#include <stdio.h>
#include <string.h>
#define N 20
void new_cmd()
{
    printf("New command is running\n");
}

void open_cmd()
{
    printf("Something is opening\n");
}

void close_cmd()
{
    printf("Please close this thing\n");
}

void close_all_cmd()
{
    printf("All thing is closing\n");
}

void save_cmd()
{
    printf("Something is saving\n");
}

void save_as_cmd()
{
    printf("This is saving as\n");
}

void save_all_cmd()
{
    printf("All is saving\n");
}

void print_cmd()
{
    printf("Print the thing\n");
}

void exit_cmd()
{
    printf("App is exiting\n");
}

struct {
    char *cmd_name;
    void (*cmd_pointer)(void);
} file_cmd[] = {
    {"new", new_cmd},
    {"open", open_cmd},
    {"close", close_cmd},
    {"close all", close_all_cmd},
    {"save", save_cmd},
    {"save as", save_as_cmd},
    {"save all", save_all_cmd},
    {"print", print_cmd},
    {"exit", exit_cmd},

};

int read_line(char *str, int n){
    int ch, i = 0;
    while((ch = getchar()) != '\n'){
        if(i < n)
            str[i++] = ch;
    }
    str[i] = '\0';

    return n;
}

int main(void)
{
    char command[N + 1];
    printf("Enter the command you want to execute: ");
    read_line(command, N);

    for(int i = 0; i < 9; i++){
        if(strcmp(command, file_cmd[i].cmd_name) == 0){
            file_cmd[i].cmd_pointer();
            return 0;
        }
    }
    return 0;
}
