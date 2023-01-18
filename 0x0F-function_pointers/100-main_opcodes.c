#include <stdlib.h>
#include <stdio.h>
#include <udis86.h>

/**
 * main - prints opcodes of its own function
 * @argc - int type
 * @argv - char * type
 *
 * Return: 0
 **/
int main(int argc, char *argv[])
{
ud_t ud_obj;
int i = 0;
if (argc == 2)
{
i = atoi(argv[1]);
if (i < 0)
{
printf("Error\n");
exit(2);
}
ud_unit(&ud_obj);
ud_set_input_file(&ud_obj, argv[1], i);
ud_set_mode(&ud_obj, 64);
ud_set_syntax(&ud_obj, UD_SYN_INTEL);
while (ud_disassemble(&ud_obj))
{
printf("\t%s\n", ud_insn_asm(&ud_obj));
}
}
return (0);
}
