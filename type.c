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

// void add_type(Node *node) {
//   if (!node || node->ty)
//     return;
//
//   add_type(node->lhs);
//   add_type(node->rhs);
//
//   switch (node->kind) {
//   case ND_NUM:
//     node->ty = ty_int;
//     return;
//
//     // case ND_VAR:
//     //     node->ty = node->var_ty;
//     //     return;
//
//   case ND_ADD:
//   case ND_SUB:
//   case ND_MUL:
//   case ND_DIV:
//     node->ty = node->lhs->ty;
//     return;
//
//   case ND_ASSIGN:
//     node->ty = node->lhs->ty;
//     return;
//
//   case ND_ADDR:
//     node->ty = pointer_to(node->lhs->ty);
//     return;
//
//   case ND_DEREF:
//     node->ty = node->lhs->ty->base;
//     return;
//
//   default:
//     return;
//   }
// }
