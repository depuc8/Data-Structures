#include<stdio.h>
#include<string.h>
#include "hash-maps.h"

#define NAME_SIZE 50 
#define PHONE_SIZE 16

int main(int argc,char *argv[]){

	char name[NAME_SIZE];
	char phone[PHONE_SIZE];

	printf("Enter Name: ");
	if(fgets(name,NAME_SIZE,stdin) == NULL)
		return 1;

	printf("Enter Phone: ");
	if(fgets(phone,PHONE_SIZE,stdin)==NULL)
		return 1;

	name[strcspn(name),"\n"];
	phone[strcspn(phone),"\n"];


	printf("%s",name);
	printf("%s",phone);
	
	return 0;
	
}


