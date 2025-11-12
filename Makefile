# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mpedraza <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/08 17:45:39 by mpedraza          #+#    #+#              #
#    Updated: 2025/11/12 19:59:52 by mpedraza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
CC := cc
CFLAGS := -Wall -Wextra -Werror
CPPFLAGS := -I .
CPP_LIB_FLAGS := -L . -l:$(NAME) 
FTS := ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen \
	   ft_strlcpy ft_strlcat ft_strncmp ft_strchr ft_strrchr ft_strnstr \
	   ft_atoi ft_toupper ft_tolower ft_memset ft_bzero ft_memcpy
SRCS := $(FTS:%=%.c)
OBJS := $(SRCS:%.c=%.o)
TESTNAME := test_libft
TEST_DIR := tests
TEST_SRCS := $(SRCS:%=$(TEST_DIR)/test_%)
TEST_OBJS := $(TEST_SRCS:%.c=%.o)
TEST_EXEC := $(TEST_DIR)/run_tests.sh
TEST_RUN := bash $(TEST_EXEC)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^

test: $(NAME) $(TEST_OBJS) $(TEST_EXEC)
	$(TEST_RUN)

$(TEST_DIR)/%.o: $(TEST_DIR)/%.c 
	$(CC) $(CFLAGS) $(CPPFLAGS) $< $(CPP_LIB_FLAGS) -o $@
	@echo "./$@" >> $(TEST_EXEC)

$(TEST_DIR)/run_tests.sh: $(TEST_OBJS)
	touch $@

clean:
	$(RM) $(OBJS) $(TEST_OBJS) 

fclean: clean
	$(RM) $(NAME) $(TEST_EXEC)

re: fclean all

.PHONY: all clean fclean re test
