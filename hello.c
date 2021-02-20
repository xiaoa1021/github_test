#include "stdio.h"
#include "stdint.h"
#include "unistd.h"

int main(void)
{
  int32_t i=0;

  while(1)
    {
	printf("%d,hello,gcc!\n",i++);
	sleep(2);
    }
    return 0;
}
