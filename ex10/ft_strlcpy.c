/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 08:50:31 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 18:46:21 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (src[index] != '\0')
		index++;
	if (size == 0)
	{
		return (index);
	}
	index = 0;
	while (dest[index] != '\0' && index < (size - 1))
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (index);
}
