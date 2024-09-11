/**********************************/
/* Name:     Hager Khaled         */
/*subject:   pointers exercises   */
/*********************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /****************1.Write a C program to create, initialize and demonstrate the use of pointers.*****************/
    /*
    int op=1;
    int *ptr = &op;
    printf("op=%d\n",op);
    printf("&op=%d\n",&op);
    printf("ptr=%d\n",ptr);
    printf("*ptr=%d\n",*ptr);
    printf("&ptr=%d\n",&ptr);
    */

    /****************2.Write a C program to read two numbers from user and add them using pointers.*******************/
    /*
    int num1,num2;
    int *ptr1=&num1;
    int *ptr2 =&num2;
    printf("Input num1:");
    scanf("%d",&num1);
    printf("Input num2:");
    scanf("%d",&num2);
    printf("sum=%d\n",*ptr1 + *ptr2);
    printf("Difference=%d\n",*ptr1 - *ptr2);
    printf("Product=%d\n",*ptr1 * *ptr2);
    printf("Quotient=%d\n",*ptr1 / *ptr2);
    */

    /*********************************3.Write a C program to swap two numbers.**********************************/
   /*
    int num1,num2,temp;
    int *ptr1=&num1 , *ptr2=&num2;
    printf("Input num1:");
    scanf("%d",&num1);
    printf("Input num2:");
    scanf("%d",&num2);
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("After swapping in swap function \n");
    printf("num1 = %d \n", *ptr1);
    printf("num2 = %d \n", *ptr2);
    */

    /******************4.Write a C program to input elements in an array and print array using pointers.************/
   /*
    int size, arr[20];
    int *ptr = arr;
    printf("Input array size: ");
    scanf("%d",&size);
    printf("Input elements: ");
    for(int i=0;i<size;i++)
    {
        // without pointer :: scanf("%d",&arr[i]);
        scanf("%d",(ptr+i));
    }
    printf("Array elements: ");
    for(int i=0;i<size;i++)
    {
        printf("%d, ",*(ptr+i));
    }
    */

    /*****************5.Write a C program to copy one array elements to another array using pointers. ************/
    /*
    int arr[10];
    int *ptr1=arr;
    int *ptr2=ptr1;
    printf("Input array1 elements:");
    for(int i=0;i<10;i++)
    {
        scanf("%d",(ptr1+i));
    }
    printf("Array1:");
    for(int i=0;i<10;i++)
    {
        printf(" %d",*(ptr1+i));
    }

    printf("\nArray2:");
    for(int i=0;i<10;i++)
    {
        printf(" %d",*(ptr2+i));
    }
    */

    /*******************6.Write a C program to swap corresponding elements of two arrays using pointers.***************/
     /*

    int size1=10,size2=10,arr1[10],arr2[10];
    int *ptr1=arr1 , *ptr2=arr2;
    int temp1[10]={0} ,temp2[10]={0};
    //printf("input size1");
    //scanf("%d",&size1);

    printf("Input first array:");
    for(int i=0;i<size1;i++)
    {
        scanf("%d",(ptr1+i));
    }

    //printf("input size2");
    //scanf("%d",&size2);
    printf("Input secound array:");
    for(int i=0;i<size2;i++)
    {
        scanf("%d",(ptr2+i));
    }
    printf("First array after swapping:");
    for(int i=0;i<size1;i++)
    {
        temp1[i]=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp1[i];
        printf("%d",*(ptr1+i));
    }
    printf("\n")
    printf("secound array after swapping:");
    for(int i=0;i<size1;i++)
    {
        temp2[i]=*ptr1;
        *ptr1=*ptr2;
        *ptr2=temp2[i];
        printf("%d",*(ptr2+i));
    }
    */

    /*******************7.Write a C program to input elements in an array and reverse the array using pointers.***************/
    /*
    int size;
    printf("Input array size: ");
    scanf("%d",&size);
    int arr[size];
    int *ptr = arr;
    printf("Input elements: ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Reversed array:  ");
    for(int i=size-1;i>=0;i--)
    {
        printf("%d, ",*(ptr+i));
    }
    */

    /*****************8.Write a C program to input elements in array and search an element in array using pointers*************/
    /*
    int size , c;
    printf("Input array size: ");
    scanf("%d",&size);
    int arr[size];
    int *ptr = arr;
    printf("Input array elements:  ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Input element to search:");
    scanf("%d",&c);
    for(int i=0;i<size;i++)
    {
        if(*(ptr+i)==c)
         {
          printf("%d does exists in array. ",c);
          return 0;
         }
    }
    printf("%d does not exists in array. ",c);
    */

    /***************************9.How to access two dimensional array using pointers in C programming?************************/
    /*
    int arr[3][3];
    printf("Input elements in 3x3 matrix: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(*(arr+i)+j));
        }
    }
    printf("Elements of 3x3 matrix: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",*(*(arr+i)+j));
        }
        printf("\n");
    }
    */

    /***************************10.Write a C program to add two matrix using pointers and find sum of both matrices using pointers. **************************/
    /*
    int arr1[3][3] , arr2[3][3];

    printf("Input matrix1: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(*(arr1+i)+j));
        }
    }

    printf("Input matrix2: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(*(arr2+i)+j));
        }
    }

    printf("Sum of both matrices:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",(*(*(arr1+i)+j))+(*(*(arr2+i)+j)));
        }
        printf("\n");
    }
    */

    /*************************11.Write a C program to multiply two matrix using pointers.************************/
    /*
    int arr1[3][3] , arr2[3][3];
    int res[3][3]={0};
    printf("Input elements of matrix1: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(*(arr1+i)+j));
        }
    }

    printf("Input elements of matrix2: ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",(*(arr2+i)+j));
        }
    }

    // Multiply the two matrices
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                 *(*(res+i)+j)+=(*(*(arr1+i)+k)) * (*(*(arr2+k)+j));
            }
        }
        printf("\n");
    }

    // Print the result matrix
    printf("Product of matrices is :\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",*(*(res+i)+j));
        }
        printf("\n");
    }

    */

    /************************12.Write a C program to find length of a string using loop. *****************************/
    /*
    char arr[100];
    int count=0;
    char *ptr = arr;
    printf("Input string: ");
    gets(arr);
    while(*(ptr++))
        count++;
    printf("Length of string: %d",count);
    */

    /***************************13.Write a C program to copy one string to another string using loop.********************/
   /*
    char arr1[100] , arr2[100];
    char *ptr1=arr1;
    char *ptr2=arr2;
    printf("Input string:");
    gets(arr1);
                            //Copy text1 to text2 using strcpy():
                            //strcpy(text2, text1);

     // Copy arr1 to arr2 character by character using pointer
     //asign string from arr1 to arr2
     while(*(ptr2++) = *(ptr1++));

     printf("Original string :%s\n",arr1);
     printf("Copied string: %s",arr2);
    */

    /**************************14.C program to concatenate two strings****************************/
    /*
    char arr1[100] , arr2[100];
    char *ptr1=arr1;
    char *ptr2=arr2;
    printf("Input string1:");
    gets(arr1);
    printf("Input string2:");
    gets(arr2);
    // move pointer ptr1 to end of the first string (arr1)
    while(*ptr1)
        ptr1++;
    // copy secound poiner to first string (arr1)
    while(*(ptr1++) = *(ptr2++));
    //add NULL at the end
    *ptr1='\0';

    printf("Concatenated string:%s ",arr1);
    */

    /****************15.Write a C program to compare two strings using loop character by character.**************/
    /*
    char arr1[100] , arr2[100];
    char *ptr1=arr1;
    char *ptr2=arr2;
    printf("Input string1:");
    gets(arr1);
    printf("Input string2:");
    gets(arr2);
    while(*ptr1 && *ptr2)
    {
        if(*(ptr1++) == *(ptr2++))
        {
            printf("Both strings are lexographically equal.");
            break;
        }
        else if(*(ptr1++) < *(ptr2++))
        {
            printf("First string is lexicographically smaller than second.");
            break;
        }

        else
        {
             printf("secound string is lexicographically smaller than first.");
             break;
        }

    }
    */

    /********************16.Write a C program to find reverse of a given string using loop***********************/
    /*
    char arr[100] ;//reverse[100];
    char *ptr=arr;
    //char *rev=reverse;
    int len=0;
    printf("Input string:");
    gets(arr);

    // find length
    while(*(ptr)!='\0')
    {
        len++;
        ptr++;
    }

    // print string reverse string
    ptr = arr +len-1;
    //print last character
    printf("Reverse string: ");
    while(len>0)
    {
        printf("%c",*ptr);
        ptr--;
        len--;
    }
    */

    /*************************************17.C program to sort an array using pointers**************************************/
    int size ,order , temp;
    printf("Input array size: ");
    scanf("%d",&size);
    int arr[size];
    int *ptr1 ;
    int *ptr2 ;
    printf("Input array elements:  ");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("if  descending order:pass 1   , if  ascending order:pass 0 \n");
    scanf("%d",&order);
    if(order ==1)
    {
        for(int i=0;i<size-1;i++)
        {
            //*ptr1=&arr[i];  wrong
            for(int j=0;j<(size-i-1);j++)
            {
                ptr1=&arr[j];
                ptr2=&arr[j+1];
                //ptr2=&arr[j];    wrong
                if(*ptr1 > *ptr2)
                {
                    temp=*ptr1;
                    *ptr1=*ptr2;
                    *ptr2=temp;
                }
            }
        }

        // output sort array
        printf("Array in descending order:");
        for(int i=size-1;i>=0;i--)
        {
            printf("%d ",arr[i]);
        }
    }


    else if(order ==0)
    {
        for(int i=0;i<size-1;i++)
        {
            //*ptr1=&arr[i];
            for(int j=0;j<(size-i-1);j++)
            {
                ptr1=&arr[j];
                ptr2=&arr[j+1];
                //ptr2=&arr[j];
                if(*ptr1 > *ptr2)
                {
                    temp=*ptr1;
                    *ptr1=*ptr2;
                    *ptr2=temp;
                }
            }
        }

        // output sort array
        printf("Array in ascending order:");
        for(int i=0;i<size;i++)
        {
            printf("%d ",arr[i]);
        }
    }


    return 0;
}
