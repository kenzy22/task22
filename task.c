#include<stdio.h>
#include<string.h>
typedef union {
	int check1 ;
	char check2[20];

} flag ;
struct account
{
   char Email[20];
   char Password[20];
   flag check ;
};


int main(){
    struct account acc1 , acc2 ;
    char checkEmail[20];
    char checkPassword[20] ;
	flag checkUserFlag;
	


    strcpy(acc2.Email, "kenzy@yahoo.com");
    strcpy(acc2.Password , "123456") ;
    strcpy(acc2.check.check2 , "1") ;
         
	printf("\n\n*****************Registration page **********************");
     printf("\n\n Enter username : ");
    scanf("%s", &acc1.Email);
    printf("\n Enter password : ");
    scanf("%s", &acc1.Password);
    printf("\n Enter activiation state : ");
	scanf("%s", &checkUserFlag);

    while(1){
    	if(strcmp(checkUserFlag.check2,"0")==0||strcmp(checkUserFlag.check2,"1")==0||strcmp(checkUserFlag.check2,"true")==0||strcmp(checkUserFlag.check2,"false")==0){
    	 strcpy(acc1.check.check2,checkUserFlag.check2);
    	printf("\n Succesfull Registration  ");
    	 break;

		}else{
				printf(" Enter activiation state : ");
				scanf("%s", &checkUserFlag);
}
	}
	
	printf("\n\n\n\n\n ***********************Login page ************************ : ");
     printf("\n\n Enter username : ");
    scanf("%s", &checkEmail);
    printf("\n Enter password : ");
    scanf("%s", &checkPassword);
    
  
    if (strcmp(checkEmail,acc1.Email)==0 && strcmp(checkPassword,acc1.Password)==0 &&strcmp(acc1.check.check2,"true")==0 ||strcmp(acc1.check.check2,"1")==0  ){
        printf("\n Succesful login");
    }else if (strcmp(checkEmail,acc2.Email)==0 && strcmp(checkPassword,acc2.Password) &&strcmp(acc2.check.check2,"true")==0 || strcmp(acc2.check.check2,"1")==0 )
    {
     printf("\n Succesful login");
    }else{
        printf("\n Unsuccessfil login");
    }

    
    return 0;
}