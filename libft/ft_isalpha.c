/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocota <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 20:18:04 by ocota             #+#    #+#             */
/*   Updated: 2015/10/22 20:37:37 by ocota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		isalpha(int c)
{
	if (c <= 'z' && c >= 'a' || c <= 'Z' && c >= 'A')
		return (1)
	else
		return (0)
}