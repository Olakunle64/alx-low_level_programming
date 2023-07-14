#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void simple_print_buffer(char *buffer, unsigned int size)
{
	    unsigned int i;

	        i = 0;
		    while (i < size)
			        {
					        if (i % 10)
							        {
									            printf(" ");
										            }
						        if (!(i % 10) && i)
								        {
										            printf("\n");
											            }
							        printf("0x%02x", buffer[i]);
								        i++;
									    }
		        printf("\n");
}

int main(void)
{
	    char *p;
	        int i;
		char *ptr;

		    p = malloc(sizeof(char) * 10);
		        ptr = _realloc(p, sizeof(char) * 10, sizeof(char) * 5);
			    i = 0;
			        while (i < 98)
					    {
						            p[i++] = 5;
							        }
				    simple_print_buffer(ptr, 5);
				        free(p);
					    return (0);
}
