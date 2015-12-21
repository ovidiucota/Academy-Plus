#include "header.h"

t_board		*read_file(int *number)
{
	int		fd;
	t_board	*my_board;
	t_board	*begin;
	char	*line;
	int		line_as_int;

	my_board = l_init_list();
	begin = my_board;
	fd = open("file.txt", O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		if (validate_line(line))
		{
			*number += 1;
			line_as_int = ft_atoi(line);
			l_add_node(my_board, line_as_int);
			my_board = my_board->next;
		}
		else
		{
			write(1, "File is incorrect!", 14);
			return (0);
		}
	}
	return (begin);
}
