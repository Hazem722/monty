# Minimal makefile for Monty

PROGRAM = monty.run
FILES.c = monty.c open_file.c checking.c count_stack.c pick_func.c op_rotl.c op_rotr.c op_pchar.c op_pstr.c op_push.c op_pall.c op_pint.c op_pop.c op_swap.c op_add.c op_nop.c op_sub.c op_div.c op_mul.c op_mod.c handle_error.c handle_execution.c frees_stack.c
FILES.h = monty.h

CC = gcc
WFLAG1 = -Wall
WFLAG2 = -Wextra
WFLAG3 = -Werror
WFLAG4 = -pedantic
WFLAG5 = -Wstrict-prototypes
WFLAG6 = -Wmissing-prototypes
WFLAG7 = -g
WFLAGS = ${WFLAG1} ${WFLAG2} ${WFLAG3} ${WFLAG4} ${WFLAG5} ${WFLAG6} ${WFLAG7}

all:
	${CC} ${WFLAGS} ${FILES.c} -o ${PROGRAM}
