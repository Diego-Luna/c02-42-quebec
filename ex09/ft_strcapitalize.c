/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 07:19:08 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 08:47:40 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		else if ((str[i] >= 97 && str[i] <= 122)
			&& !(str[i - 1] >= 48 && str[i - 1] <= 122))
		{
			str[i] -= 32;
		}
		else if ((str[i] >= 65 & str[i] <= 90)
			&& (str[i - 1] >= 65 && str[i - 1] <= 122))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}