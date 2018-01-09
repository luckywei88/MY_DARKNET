#ifndef OPTION_LIST_H
#define OPTION_LIST_H
#include "list.h"

typedef struct{
    char *key;
    char *val;
    int used;
} kvp;


int read_option(char *s, yolo_list *options);
void option_insert(yolo_list *l, char *key, char *val);
char *option_find(yolo_list *l, char *key);
int option_find_int_quiet(yolo_list *l, char *key, int def);
float option_find_float(yolo_list *l, char *key, float def);
float option_find_float_quiet(yolo_list *l, char *key, float def);
void option_unused(yolo_list *l);

#endif
