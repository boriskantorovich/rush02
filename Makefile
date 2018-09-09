# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dfisher <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/09 14:00:46 by dfisher           #+#    #+#              #
#    Updated: 2018/09/09 14:00:48 by dfisher          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=colle-2
CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRC=./src/rush00/*.c
INCLUDES= ./includes


all: 
	$(CC) $(CFLAGS) -I$(INCLUDES) $(SRC) ./src/rush00/rush00/*.c -o colle-00
	$(CC) $(CFLAGS) -I$(INCLUDES) $(SRC) ./src/rush00/rush01/*.c -o colle-01
	$(CC) $(CFLAGS) -I$(INCLUDES) $(SRC) ./src/rush00/rush02/*.c -o colle-02
	$(CC) $(CFLAGS) -I$(INCLUDES) $(SRC) ./src/rush00/rush03/*.c -o colle-03
	$(CC) $(CFLAGS) -I$(INCLUDES) $(SRC) ./src/rush00/rush04/*.c -o colle-04
	$(CC) $(CFLAGS) -I$(INCLUDES) ./src/rush02/*.c -o colle-2	
	
clean:
	/bin/rm -rf $(OBJECTS)

fclean: clean 
	/bin/rm -rf $(NAME)

re: fclean all
