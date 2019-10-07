/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adda-sil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 17:37:30 by adda-sil          #+#    #+#             */
/*   Updated: 2019/10/07 18:48:42 by adda-sil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return (c == '\t'
			|| c == '\n'
			|| c == '\v'
			|| c == '\f'
			|| c == '\r'
			|| c == ' ');
}

int	is_num(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	sign;
	unsigned int	count;

	i = 0;
	count = 0;
	sign = 1;
	while (is_space(str[i]))
		i++;
	if (is_sign(str[i]))
		if (str[i++] == '-')
			sign = -1;
	while (is_num(str[i]))
		count = count * 10 + (str[i++] - '0');
	return (count * sign);
}
