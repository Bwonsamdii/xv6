#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int main()
{
  printf(1, "La cantidad de procesos en ejecucion en la CPU es %i\n", getprocs());
  exit();
}
