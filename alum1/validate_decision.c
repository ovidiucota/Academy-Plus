#include "header.h"

int		validate_decision(char *decision)
{
	if (ft_strlen(decision) != 1)
		return (0);
	if (*decision != '1' && *decision != '0')
		return (0);
	return (1);
}
