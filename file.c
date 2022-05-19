//file handling:
//To persist data in files so it done goes away
//when uh ve to use a file we always have to create  apointer for this purpose
//FILE*ptr_name;
//for openng file we use:
//ptr_name=fopen("file_name","r") //r means read mode and if file dont exsists then returns null
//ptr_name=fopen("file_name","rb") //rb means read in binary and if file ont exsists then null
//ptr_name=fopen("file_name","w") //w means write and if file exsists the old tetx will be overwritten
//ptr_name=fopen("file_name","wb") //wb means write in binary and overwrite previous
//ptr_name=fopen("file_name","a") //a means append or add without removing og data, if file dont exsists it will be created

#include<stdio.h>
int main()
{
    // //different comfig. of file opening
    // FILE*ptr1=fopen("samplefile2.txt","r"); 
    // fclose(ptr1); 
    // FILE*ptr2=fopen("samplefile2.txt","rb");
    // fclose(ptr2);
    // FILE*ptr3 = fopen("samplefile2.txt","w");//writing(Overwritten):If the file exsists the contents will be overwritten
    // fclose(ptr3);
    // FILE*ptr4 = fopen("samplefile2.txt","wb");//write in binary(Overwritten):If the file exsists the contents will be overwritten
    // fclose(ptr4);
    // FILE*ptr5 = fopen("samplefile2.txt","a");//append (add without removing originial data):If the file doesnt exsist it will be created
    // fclose(ptr5);

   //reading from a file
   FILE*a;
   a=fopen("samplefile2.txt","r");
   char ch;
   fscanf(a,"%c",&ch);
   printf("%c\n",ch);
   fclose(a);

   //writing in a file
   FILE*b;
   b=fopen("samplefile2.txt","a");
   char name[50];
   printf("Enter your name: \n");
   gets(name);
   fprintf(b,"%s",name);
   fclose(b);

   //reading whole file content
   FILE*c;
   c=fopen("samplefile2.txt","r");
   char letters;
   while (letters!=EOF) //EOF is end of file
   {
       letters=fgetc(c); //CHARACTER BY CHARACTER STORAGE
       printf("%c",letters); //CHARACTER BY CHARACTER PRINTING
   }

   return 0;
}