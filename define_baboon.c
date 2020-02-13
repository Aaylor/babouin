extern int printf(const char *, ...);

#define HOSTNAME(ARG)  printf("Hello " str(ARG) "\n");
#define str(s) #s

int
main()
{
    HOSTNAME(WORLD);
    return 0;
}
