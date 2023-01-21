#ifndef FILE_F_POINTERS
#define FILE_F_POINTERS

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif //ifndef FILE_F_POINTERS
