#include <stdio.h>
#include <stdlib.h>
#include <admission.h>
int main()
{
    int n;
    char rec;
    FILE *fpt;
    fpt=fopen("C:\Users\TANAY\Desktop\COURSES\cprog\Desktop app1","ab");
    if(fpt==NULL)
    {
        printf("\n file opening error");
        exit(0);
    }

    printf("Number of courses to add: \n");
    scanf("%d",&n);
    fwrite((char*)&rec,sizeof(rec),n,fpt);
    return 0;

}
/* add_course steps
1) open a file "course.dat" using append and binary mode
2)check opening error, if any inform user
3)otherwise accept data from user
4)write that record into file

//remove record
1) open a file "course.dat" using read and binary mode
2)check opening error, if any inform user
3)otherwise  create a "temp.dat" using write and binary mode
  and copy those courses other than passed course
4)first remove course.dat and then rename a temp.dat file as course.dat

// show  records from file
1) open a file "course.dat" using read and binary mode
2)check opening error, if any inform user
3)otherwise read data from file and display on screen

*/
