void add1 (int *var){
  printf("adding\n" );
  *var=*var+1;
  return;
}
int main () {

   int  var;
   int  *ptr;
   int  **pptr;


   var = 3000;

   /* take the address of var */
   ptr = &var;

   /* take the address of ptr using address of operator & */
   pptr = &ptr;

   /* take the value using pptr */
   add1(&var);
   printf("Value of var = %d\n", var );
   printf("Value available at *ptr = %d\n", *ptr );
   printf("Value available at **pptr = %d\n", **pptr);

   return 0;
}
