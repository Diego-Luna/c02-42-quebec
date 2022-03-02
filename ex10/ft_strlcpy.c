/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 08:50:31 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/03/02 10:00:42 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;

	index = 0;
	while (dest[index] != '\0' && index != size)
	{
		dest[index] = src[index];
		index++;
	}
	index = 0;
	while (src[index] != '\0')
		index++;
	return (index);
}
