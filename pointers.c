#include <stdio.h>
#include <stdlib.h>

	
 	// call by value
 	void convertValue(int a, int b){
 	
 	int temporary = a;
 		
 	a = b;
 	
 	b = temporary;
 	
 	printf("a => %d, b => %d  \n",a,b);
 	
 	}
 
 
 
	// call by reference
  	void convertValue2(int *a, int *b){
 	
	*a = 4;
	*b = 4;

	}
 
 
 


int main(int argc, char *argv[]) {
	
	
	//int => 4byte
	
	//pointer => 2byte
	
	// & ampersant => de�i�kenin adres bilgisini verir
	
	// * => adresteki de�eri verir
	
	
	
	/*
	int a = 4;
	
	int *apointer = &a;
	
	
	int *cpointer = apointer;
	
	int b = &a;
	
	
	printf("%u \n",cpointer);
	
	//pointer i�indeki de�eri * ile ald�
	printf("%d \n",*apointer);
	//printf("%d \n",cpointer);
	
	printf("%p",&a);
	
	*/
	
	
	
	/*
	
	int i, j=1;
	
	int *ip, *jp = &j;
	
	
	ip = jp;
	
	
	i = ++(*jp);
	
	
	*jp = *ip +i;
	
	
	printf(" i = %d , j = %d , *ip = %d , *jp = %d ", i, j, *ip, *jp );
	
	
	
	*/
	
	
	
	
	
	
	// ------------- CALL BY VALUE ----------------
	// Call By Value => referans� olmadan (pointer olmadan) gitti�i i�in sadece de�eri fonksiyona gidiyor
	// yani x ve y nin referans�ndaki de�er de�i�medi�i i�in ayn� kal�yor
	//fonksiyon bittikten sonra a ve b de�erleri silinir
	
	// !! C ve C++ da garbage collector	olmad��� i�in bellek s�z�nt�s� denen olay oluyor.
	// !! bir referans�n kullan�m� bittikten sonra bellekten silinmiyor bo� kal�yor
/*
 	printf("CALL BY VALUE\n");
	int x = 5, y = 15;
	
	printf("x => %d, y => %d \n",x,y);
	
	convertValue(x,y);
	
	printf("x => %d, y => %d \n",x,y);
		*/
	

	// ------------- CALL BY REFERENCE ----------------
	
 
	printf("CALL BY REFERENCE\n");
	int u = 10, j = 20;
	printf("u => %d, j => %d \n",u,j);
	convertValue2(&u,&j);
	printf("u => %d, j => %d \n",u,j);
	 
		
	
	
	
	
	
	
 
	
	return 0;
}



 






