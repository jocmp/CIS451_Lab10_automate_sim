/* i.e., 16KB.  The array needs to be at least twice the size of the
   8KB cache so that the array doesn't fit in memory. */
#define ARRAY_SIZE 16*1024 

#define NUM_LOOPS 1000000


/****************************************************************************
 *
 *  Notice that the array is an array of characters.  This means that
 *  each item in the cache is exactly 1 byte.  This makes it easy to
 *  identify data items that will or will not conflict in the cache.
 *  For example, in an 8KB direct-mapped cache, array bytes 0 and 8192
 *  will conflict.
 *
 *  This program simply iterates through each byte in the cache 1000000
 *  times.
 *
 * Declaring the local variables as "register" variables encourages
 * the compiler to keep the values of these variables in a register,
 * thereby reducing their effect on the cache hit rate.
 ****************************************************************************/

int main()
{
  char array[ARRAY_SIZE];
  register int loop;
  register int solution = 0;

  for (loop = 0; loop < NUM_LOOPS; loop++)
    {
        solution += array[0]+array[8202];
    }
  return solution;
}
