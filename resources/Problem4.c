#define ARRAY_SIZE 16*1024
#define NUM_LOOPS 1000000

int main()
{
  char array[ARRAY_SIZE];
  register int loop;
  register int solution = 0;
  for(loop = 0; loop < NUM_LOOPS; loop ++)
  {
    solution *= array[0];
    solution *= array[8200];
  }
  return solution;
}
