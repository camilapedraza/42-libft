# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/08 17:45:39 by mpedraza          #+#    #+#              #
#    Updated: 2025/11/08 19:59:07 by mpedraza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -I .
CPP_LIB_FLAGS = -L . -l:$(NAME) 
FTS = ft_isalpha
SRCS = $(FTS:%=%.c)
OBJS = $(SRCS:%.c=%.o)
TESTNAME = test_libft
TEST_DIR = tests
TEST_SRCS = $(SRCS:%=$(TEST_DIR)/test_%)
TEST_OBJS = $(TEST_SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

test: $(TESTNAME)

$(TESTNAME): $(NAME) $(TEST_SRCS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(TEST_SRCS) $(CPP_LIB_FLAGS) -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) $(TESTNAME)

re: fclean all

.PHONY: all clean fclean re test
