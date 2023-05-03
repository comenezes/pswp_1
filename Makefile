SRCS =  check_dupl.c\
		check_is_sorted.c\
		ft_populatestack.c\
  		val_args.c\
		check_dupl.c\
		ft_atol.c\
		ft_create_node.c\
		ft_isdigit.c\
		push_swap.c

OBJS = ${SRCS:.c=.o}

NAME = push_swap

AR = ar rcs

CC = cc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror -g


$(NAME):	${OBJS}
			${CC} ${CFLAGS} ${OBJS}	-o ${NAME}
			
all: 		${NAME}

clean: 		
			${RM} ${OBJS}

fclean: 	clean
	    	${RM} $(NAME) 
			${RM} -r push_swap.dSYM

re: 		fclean all