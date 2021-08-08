NAME	= ./a.out

SRCS	= srcs/ft_strlen.s\
			srcs/ft_strcpy.s\
			srcs/ft_write.s\
			srcs/ft_read.s\
			srcs/ft_strdup.s\
			srcs/ft_strcmp.s

OBJS	= srcs/*.o

GCC		= gcc

all: 	$(NAME)

$(NAME):
		@nasm -f elf64 srcs/ft_strlen.s
		@nasm -f elf64 srcs/ft_strcpy.s
		@nasm -f elf64 srcs/ft_strcmp.s
		@nasm -f elf64 srcs/ft_write.s
		@nasm -f elf64 srcs/ft_read.s
		@nasm -f elf64 srcs/ft_strdup.s
		@$(GCC) main.c $(OBJS)
		@$(NAME)
		
clean:	
		@rm -f $(OBJS)

fclean:		clean
		@rm -f $(NAME)

re:		fclean all

.PHONY:	all clean fclean re
