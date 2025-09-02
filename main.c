#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int	nb, nm;
	int	x;

	// -------------------- TESTE %c --------------------
	printf("TESTE c\n\n");

	printf("Expected: ");
	nb = printf("%c\n", 'k');
	printf("Result:   ");
	nm = ft_printf("%c\n", 'k');
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%c\n", 'K');
	printf("Result:   ");
	nm = ft_printf("%c\n", 'K');
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%c\n", '\0');
	printf("Result:   ");
	nm = ft_printf("%c\n", '\0');
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	// -------------------- TESTE %s --------------------
	printf("TESTE s\n\n");

	printf("Expected: ");
	nb = printf("%s\n", "Hello, 42!");
	printf("Result:   ");
	nm = ft_printf("%s\n", "Hello, 42!");
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%s\n", "");
	printf("Result:   ");
	nm = ft_printf("%s\n", "");
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%s\n", (char *)NULL);
	printf("Result:   ");
	nm = ft_printf("%s\n", (char *)NULL);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	// -------------------- TESTE %p --------------------
	printf("TESTE p\n\n");
	x = 42;

	printf("Expected: ");
	nb = printf("%p\n", &x);
	printf("Result:   ");
	nm = ft_printf("%p\n", &x);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%p\n", NULL);
	printf("Result:   ");
	nm = ft_printf("%p\n", NULL);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	// -------------------- TESTE %d --------------------
	printf("TESTE d\n\n");

	printf("Expected: ");
	nb = printf("%d\n", 10);
	printf("Result:   ");
	nm = ft_printf("%d\n", 10);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%d\n", -1);
	printf("Result:   ");
	nm = ft_printf("%d\n", -1);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%d\n", 0);
	printf("Result:   ");
	nm = ft_printf("%d\n", 0);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%d\n", INT_MIN);
	printf("Result:   ");
	nm = ft_printf("%d\n", INT_MIN);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%d\n", INT_MAX);
	printf("Result:   ");
	nm = ft_printf("%d\n", INT_MAX);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	// -------------------- TESTE %i --------------------
	printf("TESTE i\n\n");

	printf("Expected: ");
	nb = printf("%i\n", 42);
	printf("Result:   ");
	nm = ft_printf("%i\n", 42);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%i\n", -1);
	printf("Result:   ");
	nm = ft_printf("%i\n", -1);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%i\n", 0);
	printf("Result:   ");
	nm = ft_printf("%i\n", 0);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%i\n", INT_MIN);
	printf("Result:   ");
	nm = ft_printf("%i\n", INT_MIN);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%i\n", INT_MAX);
	printf("Result:   ");
	nm = ft_printf("%i\n", INT_MAX);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	// -------------------- TESTE %u --------------------
	printf("TESTE u\n\n");

	printf("Expected: ");
	nb = printf("%u\n", 42);
	printf("Result:   ");
	nm = ft_printf("%u\n", 42);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%u\n", -1);
	printf("Result:   ");
	nm = ft_printf("%u\n", -1);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%u\n", 0);
	printf("Result:   ");
	nm = ft_printf("%u\n", 0);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%u\n", INT_MIN);
	printf("Result:   ");
	nm = ft_printf("%u\n", INT_MIN);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%u\n", INT_MAX);
	printf("Result:   ");
	nm = ft_printf("%u\n", INT_MAX);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	// -------------------- TESTE %x --------------------
	printf("TESTE x\n\n");

	printf("Expected: ");
	nb = printf("%x\n", 42);
	printf("Result:   ");
	nm = ft_printf("%x\n", 42);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%x\n", -1);
	printf("Result:   ");
	nm = ft_printf("%x\n", -1);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%x\n", 0);
	printf("Result:   ");
	nm = ft_printf("%x\n", 0);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%x\n", INT_MIN);
	printf("Result:   ");
	nm = ft_printf("%x\n", INT_MIN);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	printf("Expected: ");
	nb = printf("%x\n", INT_MAX);
	printf("Result:   ");
	nm = ft_printf("%x\n", INT_MAX);
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	// -------------------- TESTE %% --------------------
	printf("TESTE %%\n\n");

	printf("Expected: ");
	nb = printf("%% %% %% %%\n");
	printf("Result:   ");
	nm = ft_printf("%% %% %% %%\n");
	printf("Retorno original = %d\n", nb);
	printf("Meu retorno       = %d\n\n", nm);

	return (0);
}
