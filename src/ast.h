#include <stdint.h>
#ifndef AST_H
#define AST_H

struct AstMachine;
typedef struct AstMachine AstMachine;
long ast_save_tx(AstMachine *ast);
void ast_rollback_tx(AstMachine *ast, long tx);
void ast_commit_tx(AstMachine *ast, uint8_t index, long tx);
void ast_log_replace(AstMachine *ast, char *str);
void ast_log_capture(AstMachine *ast, char *cur);
void ast_log_new(AstMachine *ast, char *cur);
void ast_log_pop(AstMachine *ast, uint8_t index);
void ast_log_push(AstMachine *ast);
void ast_log_swap(AstMachine *ast, char *cur);
void ast_log_tag(AstMachine *ast, char *tag);
void ast_log_link(AstMachine *ast, uint8_t index, void *result);
void *ast_get_last_linked_node(AstMachine *ast);

#endif /* end of include guard */