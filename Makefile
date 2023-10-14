SRC_DIR		:=	src
SRC			:=	get_next_line.c \
				gnl_utils.c
SRC			:=	$(addprefix $(SRC_DIR)/, $(SRC))

OBJ_DIR		:=	obj
OBJ			:=	$(SRC:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)
DEP			:=	$(OBJ:%.o=%.d)

HEAD_DIR	:= get_next_line.h

all: gnl

gnl: $(OBJ)
	cc -Wall -Wextra -Werror -I./include $(OBJ) -o gnl

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	mkdir -p obj
	cc -Wall -Wextra -Werror -I./include -c $< -o $@
-include $(DEP)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm gnl

