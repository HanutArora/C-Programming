//
//  achint.c
//  c language
//
//  Created by Achint Basoya on 20/09/19.
//  Copyright © 2019 Achint Basoya. All rights reserved.
//
#include<string.h>
#include<stdio.h>

int main()
{
    int a[5],o[5]={01},e[5]={0},i, j=0,k=0;
    printf("enter 5 elements\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            e[j]=a[i];
            j++;
            
        }
        else
        {
            o[k]=a[i];
            k++;
        }
    }
        printf("the array with even elements is ");
        for(i=0;i<5;i++)
        {
            printf(" %d ",e[i]);
        }
        printf("\nthe array with even elements is ");
        for(i=0;i<5;i++)
        {
            printf(" %d ",o[i]);
            
        }
    }


