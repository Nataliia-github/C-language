/* FOR TEST					*/
/* DELETE FROM REPO			*/

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int		fd;
	char	*res;

	fd = open("get_next_line.c", O_RDONLY);
	res = get_next_line(fd);
	printf("%s", res);
	free (res);
	close (fd);
}
