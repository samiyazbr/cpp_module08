NAME		=	span

SRCS		=	main.cpp Span.cpp

OBJS		=	$(SRCS:%.cpp=%.o)

CC			=	c++

FLAGS		=	-std=c++98 -Wall -Wextra -Werror

RM			=	rm -rf

%.o : %.cpp
			$(CC) $(FLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
			@$(RM) $(OBJS)
			@echo "Deleted CPP 08 object files"

fclean:		clean
			@$(RM) $(NAME)
			@echo "Deleted CPP 08 executable"

re:			fclean all

.PHONY:		all clean fclean re
