/* example based on examples/hello_ex.c in cdk lib sources */

#include "hello-time.h"
#include "hello-greet.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef __ANDROID__

int main(int argc, char** argv) {
    char *who = "world";
    if (argc > 1) {
	who = argv[1];
    }
    char *msg = get_greet(who);
    printf("%s\n", msg);
    free(msg);
    print_localtime();
    return 0;
}

#else
#include <cdk_test.h>

int main (int argc, char **argv)
{
   CDKSCREEN *cdkscreen;
   CDKLABEL *demo;
   const char *mesg[4];

   CDK_PARAMS params;

   CDKparseParams (argc, argv, &params, CDK_MIN_PARAMS);

   cdkscreen = initCDKScreen (NULL);

   /* Start CDK Colors. */
   initCDKColor ();

   /* Set the labels up. */
   mesg[0] = "</5><#UL><#HL(30)><#UR>";
   mesg[1] = "</5><#VL(10)>Hello World!<#VL(10)>";
   mesg[2] = "</5><#LL><#HL(30)><#LR>";

   /* Declare the labels. */
   demo = newCDKLabel (cdkscreen,
		       CDKparamValue (&params, 'X', CENTER),
		       CDKparamValue (&params, 'Y', CENTER),
		       (CDK_CSTRING2) mesg, 3,
		       CDKparamValue (&params, 'N', TRUE),
		       CDKparamValue (&params, 'S', TRUE));

   /* Is the label null? */
   if (demo == 0)
   {
      /* Clean up the memory. */
      destroyCDKScreen (cdkscreen);

      /* End curses... */
      endCDK ();

      printf ("Cannot create the label. Is the window too small?\n");
      ExitProgram (EXIT_FAILURE);
   }

   setCDKLabelBackgroundAttrib (demo, COLOR_PAIR (2));

   /* Draw the CDK screen. */
   refreshCDKScreen (cdkscreen);
   waitCDKLabel (demo, ' ');

   /* Clean up. */
   destroyCDKLabel (demo);
   destroyCDKScreen (cdkscreen);
   endCDK ();
   ExitProgram (EXIT_SUCCESS);
}
#endif
