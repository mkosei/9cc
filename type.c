#include "9cc.h"
#include <_stdio.h>
#include <_string.h>
#include <alloca.h>
#include <ctype.h>
#include <malloc/_malloc_type.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Type *ty_int = &(Type){TY_INT};

Type *new_type(TypeKind kind) {
  Type *ty = calloc(1, sizeof(Type));
  ty->ty_kind = kind;
  return ty;
}

Type *pointer_to(Type *base) {
  Type *ty = malloc(sizeof(Type));
  ty->ty_kind = TY_PTR;
  ty->base = base;
  return ty;
}
