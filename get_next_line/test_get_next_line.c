/* FOR TEST					*/
/* DELETE FROM REPO			*/

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	int	fd;

	fd = open("get_next_line.h", O_RDONLY);
	printf("%s", get_next_line(fd));
}
