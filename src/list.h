#ifndef LIST_H
#define LIST_H
#include "darknet.h"

yolo_list *make_list();
int list_find(yolo_list *l, void *val);

void list_insert(yolo_list *, void *);


void free_list_contents(yolo_list *l);

#endif
