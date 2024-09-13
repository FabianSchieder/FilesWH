char buffer[80];
.
.
.
while(fget(buffer, 80, fp) != NULL)
{
  printf("%s", buffer);
}
.
.
.
