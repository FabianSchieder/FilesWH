# WH Files in C #

```c
int main()
{

  FILE *fp;
  int i, temp;

  fp = fopen("zahlen.txt", "r");

  if(fp == NULL)
  {
    printf("Datei konnte nicht geöffnet werden");
  }
  else
  {
    for(int i = 0; i < 10; i++)
      {
        fscan(fp, "%d\n", &temp);
        printf("zahl: %d\n", temp);
      }
  }
  
}
```

```c
char buffer[80];

...

while(fget(buffer, 80, fp) != NULL)
{
  printf("%s", buffer);
}

...
```
