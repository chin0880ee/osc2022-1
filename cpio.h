#include "tmpfs.h"

void cat_file();
void list_file();
void load_file();
void load_cpio(char* target);
void jump_cpio(char* target);
void build_file_tree(vnode* root);