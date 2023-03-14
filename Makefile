#Variables
NAME	= webser
SRC_DIR	= src/

OBJ_DIRF	= obj_ft/

CPPFLAGS	= -g -Wall -Wextra -Werror -I include/
CPPFLAGS	+= -std=c++98
CC 			= c++
RM 			= rm -fr

#Souces FIles
SRC_FILES	= MainServer WebServer TCPSocket

#OBJS
##OBJ = $(SRC:.cpp=.o)
SRC 		= $(addprefix $(SRC_DIR), $(addsuffix .cpp, $(SRC_FILES)))
OBJ_FT			= $(addprefix $(OBJ_DIRF), $(addsuffix .o, $(SRC_FILES)))

# make for version ft::
$(OBJ_DIRF)%.o:	$(SRC_DIR)%.cpp | $(OBJ_DIRF)
				@$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME):	$(OBJ_FT)
			@$(CC) $^ -o $@

$(OBJ_DIRF):
			@mkdir -p $(OBJ_DIRF)

all:		$(NAME)

clean:
		@$(RM) $(OBJ_DIRF)

fclean: clean
		@$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
