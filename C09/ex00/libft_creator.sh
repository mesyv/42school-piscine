# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ksmolag <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 20:49:27 by ksmolag           #+#    #+#              #
#    Updated: 2021/09/28 10:59:31 by ksmolag          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c -Wall -Wextra -Werror ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a *.o
ranlib libft.a
rm -f *.o
