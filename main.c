#include <stdio.h>
#include <unistd.h>
#include "ft_printf.h"
// int main()
// {
//     fclose(stdout);

//     int r = ft_printf("Hello!");
//     fprintf(stderr, "val[%d]", r);
//     return 0;
// }

//%  ### +++# +++ # +++ #+++ #+++ #+++ #+++ #+++ +#+++ #++ x


int main()
{
    // int r = ft_printf("\nevwbybrybe5b%%%% %% % %d rbw%%y%cvrvrby%   %\n", 500, 'r');
    ft_printf("%#####  ##  # # +  + ## ## # + ########+         +#  #  +  + ++ ++  x", 500);
    // printf("\nft_printf :%d && printf : %d", r, r1);
     // printf("%#####  ##  # # +  + ## ## # + ########+         +#  #X", 500)  ::::::::: 0X1F4
     //printf("%#####  ##  # # +  + ## ## # + ########+         +#  #x", 500); :::::::::::::: 0x1f4
     //printf("%    x", 500); //:::::::::::::::::;  1f4
    // printf("%    X", 500);// :::::::::::::::::; 1F4

     //skip " " and "+" if there a # it will print 0X befor the normal output for X and it will print 0x befor the normal output for x

}
//%d
// skip space and  #  and and print + if there is a + sign and the number is positif or - if it negative
// anythink befor the % it will print normaly 
// int main()
// {
// 	int r0 = 0;
// 	int r1 = 0;

// 	close(1);
// 	int p = 5;
// 	int *t = &p;
// 	//ft_printf("cspdiuxX%");
// 	//r1 = printf("\ncspdiuxX%");
// 	//r1 = ft_printf("\001\002\007\v\010\f\r\n");
//printf("my name is %d and i am %d and i am %d%% good at tech and my nick name is %X and same time they call me %x and they say that i am %c STAR\n", "anass", 21, 100, 500, 500, 'A');
// 	// r0 = ft_printf("\nmy memory addres is %p", t);
// 	// r1 = printf("\nmy memory addres is %p", t);
// 	//printf("\nprintf : %d", r1);

// 	//printf("%s", (char *)NULL);

// 	return (printf("a"));
// }


//%c   //
//%s  ////////
//%p
//%d  ///////////
//%i
//%u
//%x   //
//%X  ///////////////
//%%  //////////////





// no format
//ft_printf("\001\002\007\v\010\f\r\n")

//% format 
//c format
//s format
//p format
//d format
//i format
//u format
//x format
// X format
//random