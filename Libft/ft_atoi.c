/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Lia <Lia@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 01:17:09 by jaqrodri          #+#    #+#             */
/*   Updated: 2020/04/23 16:11:45 by Lia              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_isaccept(char c)
{
	return (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f'
		|| c == '\r') ? 1 : 0;
}

int				ft_atoi(const char *nptr)
{
	long int	unidade;
	int			i;
	int			sinal;

	i = 0;
	while (ft_isaccept(*(nptr + i)))
		i++;
	sinal = 1;
	if (*(nptr + i) == '-' || *(nptr + i) == '+')
	{
		if (*(nptr + i) == '-')
			sinal = -1;
		i += 1;
	}
	unidade = 0;
	while (*(nptr + i) >= 48 && *(nptr + i) <= 57)
	{
		unidade = unidade * 10 + *(nptr + i) - 48;
		if (unidade > 2147483648 && sinal == 1)
			return (-1);
		else if (unidade > 2147483648 && sinal == -1)
			return (0);
		i++;
	}
	return (unidade * sinal);
}
