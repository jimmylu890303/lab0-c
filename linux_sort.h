#include "list.h"

typedef int
    __attribute__((nonnull(1, 2))) (*list_cmp_func_t)(const struct list_head *,
                                                      const struct list_head *);

__attribute__((nonnull(1, 2))) void list_sort(struct list_head *head,
                                              list_cmp_func_t cmp);
