SRC_DIR		:=	src
SRC			:=	get_next_line.c \
				gnl_utils.c
SRC			:=	$(addprefix $(SRC_DIR)/, $(SRC))

OBJ_DIR		:=	obj
OBJ			:=	$(addprefix $(OBJ_DIR$)/, $(SRC .c=.o))

print:
	echo $(OBJ)
