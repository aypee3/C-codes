# include<stdio.h> // preprocedure directives or header file

int main()  // starting point of a program

{
		int x,n;
		float D;
		
		printf("enter the number and required nth root\n");
		scanf(  "%d%d", &x, &n);
		
		D= pow(x,1.0/n) ;
		
		printf ("nth root= %0.2f\n", D);	
		
		return 0;
		
}
