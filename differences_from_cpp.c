//[n] is differences count
#include<stdio.h>
int main()
{
   char name[100];
   scanf("%s",&name);
   // [1] cin>>name; 
   printf("My name is %s\n",name); 
   // [2] cout<<"My name is"<<name<<endl; 
   int var=75;
   int var2=56;
   int num;
   num=sizeof(var)?(var2>23 ? ((var==75) ? 'a':0):0):0;
   printf("%d",num);
   return 0;

}

// [3] Variables using symbols (also naming variabes starting with _ isnt valid):
//int variable %d
//char variable %c
//double variable %lf
//float variable %f
//string variable %s
//pointer variable %u or %p

// [4] C++ boiler plate:
// #include<iostream>
// using namespace std;
// int main(){return 0;}

// [5] Output decorem:
//\n for changing line and nt endl
//\t for leaving space of 1 spacebar

// [6] arithematic operation btwn:
//int and int is int
//int and float is int
//float and float is float
//by default a decimal is saved as a double

// [7] if you wanna use increament operator in general we use i++
//if you wanna use in printf for printing the incremented value we use ++i
//i++ --> first print then inc.
//++i --> first inc. then print

// [8] Break and continue:
//break statement leaves and stops the loop (irrespective of condition is true or false);
//Continue: Jumps to the next iteration once continue comes the code under the continue in the loop wont work anymore, and skip to next interation.

// [9] Random number generator:
// #include<stdio.h>
// #include<stdlib.h>
// #include<time.h>
// int main()
// {
//     int number;
//     srand(time(0));
//     number = rank()%100+1; //{TO GET A NUMBER FROM 0+1 TO 99+1}
//     ptintf("The number is %d", number);
//     return 0;
// }

// [10] Enumeration:
//enum <name>{a,b,c,d,e};
//By default a=0 and +1 for upcoming variables

//[11] Bitwise operators:
// &,|,^,~,<<,>>
//bitwise and: & eg:3&4=0
//bitwise or: | eg:3|4=7
//bitwise xor: ^ eg:3^4=7
//bitwise negation or negate every bit individually: ~ eg: ~5=250
//left shift by a bits: <<a eg:3<<2=12
//right shift by a bits: >>a eg:3>>2=0

//[12] Short circuit: 
//<cond1>&&<cond2> --> if cond1 gets false then we dont need to evauluate cond2 thus cond2 is neither checked nor evaluated.
//eg:
// int a = 2;
// if(3<4 && a++)
// {
//    printf("%d",a);
// };
//here answer will be 2 and not 3 as short ckt occured
//Similar cond, is possible for or where 1st cond turns out to be 1 or true.
//Also when uh try something like this:
//int i=5; [size of int is taken 4 here]
//int var=sizeof(i++);
//printf("%d %d",var,i);
//You may expect answer to be 4 6
//but it is 4 5 as sizeof is looking for size and size of every int is same thus it dont need to evaluate the i++ as it knows its an intger.

//[13] Conditional operator:
//var=conditons?<what to do if true>:<what to do if false>; 
//eg:
// int var=75;
// int var2=56;
// int num;
// num=sizeof(var)?(var2>23 ? (var==75) ? 'A':0):0):0);

//[14] binary and octal:
// for octal we use 0 in front of number like:
//int x=052; [52 TAKEN AS OCTAL VALUE]
//int y=0x43FF; [43FF TAKEN AS HEXADECIMAL VALUE]
//printf("%d",x)
//it prints: 2*(pow(8,0))+5*(pow(8,1)) ---> 4222 
//printf("%o",x) {this is format specifier of octals thus this prints 52 directly}

//[15] #define:
//eg:
#define PI 3.14159
//1. Dont use semicolon at end
//2. Dont use = for assignment
//3. #define can be used for defining functions too.
// eg: 
#define ADD(x,y) x+y //#define <name_of_functions> <return value>
//4.  When you use a defined value the compiller first replace the variables by the value assigned by define
int a=5*ADD(3,4);//here a will nt be 53 but 19 as a=5*3+4 [after compiller replaces ADD(x,y) with x+y] thus 19 and nt 35
//5. Predefined macros like
//printf("%s",__DATE__);
//printf("%s",__TIME__);

//[16] Reference variables arent present over here.
//int &x=34; is invalid

//[17] Thus only there is one method to make changes invariables using functions:
//Using pointers
//void exchange(int*x,int* y)
// {
//     int k = *x;
//     *x=*y;
//     *y=k;
// } 
// int main()
// {
//    int a,b;
//    scanf("%d %d",&a,&b);
//    exchange(&a,&b);
//    printf("%d %d",a,b);
//    return 0;
// }

//[18] Pointers:
// Pointer variable is taken as %u or %p in here in printf or scanf

//[19] Structure: [if you use typedef in front of struct defining then u can use name of struct as the variablt type like in c++]
// eg: 
// struct flowers
// {
//    char name[50];
//    char genome[50];
//    int petal_count;
//    char color[50];
// };
// int main()
// {
//    struct flowers v1;
//    printf("Enter name of flower: \n");
//    scanf("%s",v1.name);
//    printf("Enter genome of slower: \n");
//    scanf("%s",v1.genome);
//    printf("Petal count is: \n");
//    scanf("%d",&v1.petal_count);
//    printf("Color of thr flower is: \n");
//    scanf("%s",v1.color);
//    printf("%s %s %d %s",v1.name,v1.genome,v1.petal_count,v1.color); 
// }
//If you use pointers in structures then we use -> and not . for using members

//[20] Union: (in a union we can use only one member and nt every member for a variable)
//Also note that a member of a unon or struct can be a struct or a union for efficiency.
//union choice
//{
//    char tea[50];
//    char coffee[50];
//    char juice[50];
//    char shake[50];
//};
//int main()
//{    
//    union choice p1,p2;
//    printf("What tea will you take: \n");
//    scanf("%s",p1.tea);
//    printf("Enter coffee you want: \n");
//    scanf("%s",p2.coffee);
//    printf("%s %s",p1.tea,p2.coffee); 
//    return 0;
//}

//[21] Strings in C:
//You can directly use any keyword string here like c++, we have to make a char array only
//strings: arrays only so we have 2 methods 
//gets for input of multiline strings, we use gets(string_name) and not scanf("%s",&string_name);
//puts is used output string of multi parts, we use puts(string_name) and not printf("%s",string_name);
//{a} strlen(string_name); from string.h library is an inbuilt function for telling the length of the string and it equals the integer
//{b} strcpy(target_string_name, source_string_name); is used to copy the string from source string to target string
//{c} strcat(string1,string2); [catenate] means string1 = string1 + string 2;
//{d} strcmp(string1, string2); [compare] if string 1 == string 2 then it returns 0, if not then a negative or positive value

//[22] DMA:
//int* ptr = new int[a]; //Old DMA dont works here like c++
//We use malloc here for memory allocation in heap
//Syntax:
//<var_type_of_array>*<ptr_name>=(<var_type_of_array>)malloc(n*sizeof(var_type_of_array));
//eg:
// #include <stdio.h>
// #include <malloc.h>
// int main()
// {
//    printf("Enter size of array: \n");
//    int n;
//    scanf("%d",n);
//    double*ptr=(double*)malloc(n*sizeof(double));
//    for (int i = 0; i < n; i++)
//    {
//       scanf("%lf",ptr[i]);
//    }
//    for (int i = 0; i < n; i++)
//    {
//       printf("%lf ",ptr[i]);
//    }
//    return 0;
// }

//[23] File handling:
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
//
//CODE:  
//#include<stdio.h>
// int main()
// {
//    different comfig. of file opening
//    FILE*ptr1=fopen("samplefile2.txt","r"); 
//    fclose(ptr1); 
//    FILE*ptr2=fopen("samplefile2.txt","rb");
//    fclose(ptr2);
//    FILE*ptr3 = fopen("samplefile2.txt","w");//writing(Overwritten):If the file exsists the contents will be overwritten
//    fclose(ptr3);
//    FILE*ptr4 = fopen("samplefile2.txt","wb");//write in binary(Overwritten):If the file exsists the contents will be overwritten
//    fclose(ptr4);
//    FILE*ptr5 = fopen("samplefile2.txt","a");//append (add without removing originial data):If the file doesnt exsist it will be created
//    fclose(ptr5);
//    
//    reading from a file
//    FILE*a;
//    a=fopen("samplefile2.txt","r");
//    char ch;
//    fscanf(a,"%c",&ch);
//    printf("%c\n",ch);
//    fclose(a);
//    
//    writing in a file
//    FILE*b;
//    b=fopen("samplefile2.txt","a");
//    char name[50];
//    printf("Enter your name: \n");
//    gets(name);
//    fprintf(b,"%s",name);
//    fclose(b);
//    
//    reading whole file content
//    FILE*c;
//    c=fopen("samplefile2.txt","r");
//    char letters;
//    while (letters!=EOF) //EOF is end of file
//    {
//        letters=fgetc(c); //CHARACTER BY CHARACTER STORAGE
//        printf("%c",letters); //CHARACTER BY CHARACTER PRINTING
//    }
//    return 0;
// }