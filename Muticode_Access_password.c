#include <stdio.h>
int main(){
    int a,b,odd_range1,odd_range2,odd_changer,pass_check=8520,password,pass_attempt=3,mulp_range1,mulp_range2,mulp_result,digit_mulp,digit1_mulp,digit2_mulp;


////////////////////////////////////////////////////////////Password Section :

    printf("Welcome.....!!!\n"
            "Enter Your 4 Digit Password : \n\n");
    scanf("%d", &password);
    if (pass_check==password){



///////////////////////////////////Paswword Acess Starting :    
    printf("\nHelloo...!!Access Granted,Welcome.\n\n"
            "What Do You Want To Do : \n"
            "A. Finding Odd/Even Numbers        >> Press 1\n"
            "B. Doing Sum of Numbers            >> Press 2\n"
            "C. Doing Multiplication of Numbers >> Press 3\n"
            "D. To Stop/Exit                    >> Press 4\n\n");
    scanf("%d", &b);
//for odd/even section :
    if (b==1){
    printf("\nWhat do you want to do?\n"
           "1. Find odd numbers >> Press 1\n"
           "2. Find even numbers >> Press 2\n"
           "3. To Stop/Exit      >> Press 0\n\n");
    scanf("%d", &a);

    if (a == 1) {
        printf("You selected to odd numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2==0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }
	
    }
    else if (a == 2) {
        printf("You selected even numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2 != 0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }  
    }
    else if (a==0) {
        printf("\nThank You !");
    }
    else {
        printf("\nWrong input.Give Right Input Again.\n\n");
//revibe section Starting :
    while (a>2 || a<1){
    printf("What do you want to do?\n"
           "1. Find odd numbers >> Press 1\n"
           "2. Find even numbers >> Press 2\n"
           "3. To Stop/Exit      >> Press 0\n\n");
    scanf("%d", &a);

    if (a == 1) {
        printf("You selected to odd numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2==0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }
	
    }
    else if (a == 2) {
        printf("You selected even numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2 != 0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
                }
            }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }  
    }
    else if (a==0) {
        printf("\nThank You !");
        a=2;
        }

    else {
        printf("\nWrong input.Give Right Input Again.\n\n");
        
        }        
    }
//revibe section ending  :
    }
    }
//for Sum Section :
    else if (b==2){
        printf("You Have Selected Sum of Numbers.\n");
    }
//////////////////////////////////for Multiplication Section :
    else if (b==3){
        printf("Which Type of Multiplication You Want To Do :\n"
               "A. Get The Multipliction of a Range                >> Press 1\n"
               "B. Get The Multiplication of That Number's Digits  >> Press 2\n"
               "C. To Stop/Exit                                    >> Press 0\n");
        scanf("%d", &a);
        if (a==1){
            printf("Enter The Starting Range : \n");
	        scanf("%d", &mulp_range1);
            printf("Enter The Ending Range : \n");
            scanf("%d", &mulp_range2);
	mulp_result=1;
	while(mulp_range1<=mulp_range2){
		mulp_result=mulp_result*mulp_range1;
		mulp_range1++;
	}
	printf("The Result is : %d",mulp_result);
    pass_attempt=0;
        }
        else if (a==2){
        printf("Enter a Number to Get Multiplication of That Number's Digits : \n");
        scanf("%d", &digit_mulp);
        digit2_mulp=1;
        if (digit_mulp==0){
            printf("The Number is Zero.");
            }
        else{
            if(digit_mulp<0){
                digit_mulp = -digit_mulp;
            }
            while(digit_mulp>0){
                digit1_mulp=digit_mulp%10;
                digit2_mulp=digit2_mulp*digit1_mulp;
                digit_mulp=digit_mulp/10;
            }
            printf("The Result is : %d\n",digit2_mulp);
                }
        }
       else if (a==0){
            printf("You Have selected Stop/Exit.\n");
            printf("Thank You !");
            }

////////////////Multiplication revibe section ::::::            
        else {
            printf("Wrong Input !! Try Again .");
            while (a<0 || a>2){
            printf("Which Type of Multiplication You Want To Do :\n"
               "A. Get The Multipliction of a Range                >> Press 1\n"
               "B. Get The Multiplication of That Number's Digits  >> Press 2\n"
               "C. To Stop/Exit                                    >> Press 0\n");
        scanf("%d", &a);
        if (a==1){
            printf("Enter The Starting Range : \n");
	        scanf("%d", &mulp_range1);
            printf("Enter The Ending Range : \n");
            scanf("%d", &mulp_range2);
	mulp_result=1;
	while(mulp_range1<=mulp_range2){
		mulp_result=mulp_result*mulp_range1;
		mulp_range1++;
	}
	printf("The Result is : %d",mulp_result);
    pass_attempt=0;
        }
        else if (a==2){
        printf("Enter a Number to Get Multiplication of That Number's Digits : \n");
        scanf("%d", &digit_mulp);
        digit2_mulp=1;
        if (digit_mulp==0){
            printf("The Number is Zero.");
            }
        else{
            if(digit_mulp<0){
                digit_mulp = -digit_mulp;
            }
            while(digit_mulp>0){
                digit1_mulp=digit_mulp%10;
                digit2_mulp=digit2_mulp*digit1_mulp;
                digit_mulp=digit_mulp/10;
            }
            printf("The Result is : %d\n",digit2_mulp);
                }
        }
       else if (a==0){
            printf("You Have selected Stop/Exit.\n");
            printf("Thank You !");
            }
        else {
            printf("Wrong Input !! Try Again .");
            } 
        }
            } 
        }
    
 /////Multiplication Ending Section ::::::   
//for Code Stop Sector :
    else if (b==4){
        printf("You Have selected Stop/Exit.\n");
        printf("Thank You !");
    }
//for nothing else free section :
    else {
        printf("Wrong input.Give Right Input Again.\n");
////////////////////////////////////////////revibe section starting (whole code) :
    while (b<1 || b>4){
    printf("Helloo...!!,Welcome.\n"
            "What Do You Want To Do : \n"
            "A. Finding Odd/Even Numbers        >> Press 1\n"
            "B. Doing Sum of Numbers            >> Press 2\n"
            "C. Doing Multiplication of Numbers >> Press 3\n"
            "D. To Stop/Exit                    >> Press 4\n");
    scanf("%d", &b);
//for odd/even section :
    if (b==1){
    printf("What do you want to do?\n"
           "1. Find odd numbers >> Press 1\n"
           "2. Find even numbers >> Press 2\n"
           "3. To Stop/Exit      >> Press 0\n");
    scanf("%d", &a);

    if (a == 1) {
        printf("You selected to odd numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2==0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }
	
    }
    else if (a == 2) {
        printf("You selected even numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2 != 0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }  
    }
    else if (a==0) {
        printf("Thank You !");
    }
    else {
        printf("Wrong input.Give Right Input Again.\n");
//revibe section Starting :
    while (a>2 || a<1){
    printf("What do you want to do?\n"
           "1. Find odd numbers >> Press 1\n"
           "2. Find even numbers >> Press 2\n");
    scanf("%d", &a);

    if (a == 1) {
        printf("You selected to odd numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2==0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }
	
    }
    else if (a == 2) {
        printf("You selected even numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2 != 0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }  
    }
    else {
        printf("Wrong input.Give Right Input Again.\n");
        
        }        
    }
//revibe section ending  :
    }
    }
//for Sum Section :
    else if (b==2){
        printf("You Have Selected Sum of Numbers.\n");
    }
////////////////////////for Multiplication Section :
    else if (b==3){
        printf("Which Type of Multiplication You Want To Do :\n"
               "A. Get The Multipliction of a Range                >> Press 1\n"
               "B. Get The Multiplication of That Number's Digits  >> Press 2\n"
               "C. To Stop/Exit                                    >> Press 0\n");
        scanf("%d", &a);
        if (a==1){
            printf("Enter The Starting Range : \n");
	        scanf("%d", &mulp_range1);
            printf("Enter The Ending Range : \n");
            scanf("%d", &mulp_range2);
	mulp_result=1;
	while(mulp_range1<=mulp_range2){
		mulp_result=mulp_result*mulp_range1;
		mulp_range1++;
	}
	printf("The Result is : %d",mulp_result);
    pass_attempt=0;
        }
        else if (a==2){
        printf("Enter a Number to Get Multiplication of That Number's Digits : \n");
        scanf("%d", &digit_mulp);
        digit2_mulp=1;
        if (digit_mulp==0){
            printf("The Number is Zero.");
            }
        else{
            if(digit_mulp<0){
                digit_mulp = -digit_mulp;
            }
            while(digit_mulp>0){
                digit1_mulp=digit_mulp%10;
                digit2_mulp=digit2_mulp*digit1_mulp;
                digit_mulp=digit_mulp/10;
            }
            printf("The Result is : %d\n",digit2_mulp);
                }
        }
       else if (a==0){
            printf("You Have selected Stop/Exit.\n");
            printf("Thank You !");
            }

////////////////Multiplication revibe section ::::::            
        else {
            printf("Wrong Input !! Try Again .");
            while (a<0 || a>2){
            printf("Which Type of Multiplication You Want To Do :\n"
               "A. Get The Multipliction of a Range                >> Press 1\n"
               "B. Get The Multiplication of That Number's Digits  >> Press 2\n"
               "C. To Stop/Exit                                    >> Press 0\n");
        scanf("%d", &a);
        if (a==1){
            printf("Enter The Starting Range : \n");
	        scanf("%d", &mulp_range1);
            printf("Enter The Ending Range : \n");
            scanf("%d", &mulp_range2);
	mulp_result=1;
	while(mulp_range1<=mulp_range2){
		mulp_result=mulp_result*mulp_range1;
		mulp_range1++;
	}
	printf("The Result is : %d",mulp_result);
    pass_attempt=0;
        }
        else if (a==2){
        printf("Enter a Number to Get Multiplication of That Number's Digits : \n");
        scanf("%d", &digit_mulp);
        digit2_mulp=1;
        if (digit_mulp==0){
            printf("The Number is Zero.");
            }
        else{
            if(digit_mulp<0){
                digit_mulp = -digit_mulp;
            }
            while(digit_mulp>0){
                digit1_mulp=digit_mulp%10;
                digit2_mulp=digit2_mulp*digit1_mulp;
                digit_mulp=digit_mulp/10;
            }
            printf("The Result is : %d\n",digit2_mulp);
                }
        }
       else if (a==0){
            printf("You Have selected Stop/Exit.\n");
            printf("Thank You !");
            }
        else {
            printf("Wrong Input !! Try Again .");
            } 
        }
            } 
        }
    
 /////Multiplication Ending Section ::::::  
//for Code Stop Sector :
    else if (b==4){
        printf("You Have selected Stop/Exit.\n");
        printf("Thank You !");
    }
//for nothing else free section :
    else {
        printf("Wrong input.Give Right Input Again.\n");
        }
    }    
////////////////////////////////revibe section ending (whole code)  :        
             }
    
////////////////////////////////////Password Acess Ending :
    }


























/////////////////////////////////////////////////////////Whole Paswword Attempt Revive Starting :::
else {
    printf("Wrong Password !!! Try Again You Have 3 Attempts Left..! ");
    while (pass_attempt>0 ){
        
    printf("Welcome.....!!!\n"
            "Enter Your 4 Digit Password : \n\n");
    scanf("%d", &password);
    if (pass_check == password){



///////////////////////////////////Paswword Acess Starting :    
    printf("\nHelloo...!!Access Granted,Welcome.\n\n"
            "What Do You Want To Do : \n"
            "A. Finding Odd/Even Numbers        >> Press 1\n"
            "B. Doing Sum of Numbers            >> Press 2\n"
            "C. Doing Multiplication of Numbers >> Press 3\n"
            "D. To Stop/Exit                    >> Press 4\n\n");
    scanf("%d", &b);
//for odd/even section :
    if (b==1){
    printf("\nWhat do you want to do?\n"
           "1. Find odd numbers >> Press 1\n"
           "2. Find even numbers >> Press 2\n"
           "3. To Stop/Exit      >> Press 0\n\n");
    scanf("%d", &a);

    if (a == 1) {
        printf("You selected to odd numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2==0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }
        pass_attempt=0;
    }
    else if (a == 2) {
        printf("You selected even numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2 != 0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        } 
        pass_attempt=0; 
    }
    else if (a==0) {
        printf("\nThank You !");
        pass_attempt=0;
    }
    else {
        printf("\nWrong input.Give Right Input Again.\n\n");
//revibe section Starting :
    while (a>2 || a<1){
    printf("What do you want to do?\n"
           "1. Find odd numbers >> Press 1\n"
           "2. Find even numbers >> Press 2\n"
           "3. To Stop/Exit      >> Press 0\n\n");
    scanf("%d", &a);

    if (a == 1) {
        printf("You selected to odd numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2==0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }
        pass_attempt=0;
    }
    else if (a == 2) {
        printf("You selected even numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2 != 0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
                }
            }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }  
        pass_attempt=0;
    }
    else if (a==0) {
        printf("\nThank You !");
        a=2;
        pass_attempt=0;
        }

    else {
        printf("\nWrong input.Give Right Input Again.\n\n");
        pass_attempt=0;
        }        
    }
//revibe section ending  :
    }
    }
//for Sum Section :
    else if (b==2){
        printf("You Have Selected Sum of Numbers.\n");
        pass_attempt=0;
    }
//for Multiplication Section :
    else if (b==3){
        printf("Which Type of Multiplication You Want To Do :\n"
               "A. Get The Multipliction of a Range                >> Press 1\n"
               "B. Get The Multiplication of That Number's Digits  >> Press 2\n"
               "C. To Stop/Exit                                    >> Press 0\n");
        scanf("%d", &a);
        if (a==1){
            printf("Enter The Starting Range : \n");
	        scanf("%d", &mulp_range1);
            printf("Enter The Ending Range : \n");
            scanf("%d", &mulp_range2);
	mulp_result=1;
	while(mulp_range1<=mulp_range2){
		mulp_result=mulp_result*mulp_range1;
		mulp_range1++;
	}
	printf("The Result is : %d",mulp_result);
    pass_attempt=0;
        }
        else if (a==2){
        printf("Enter a Number to Get Multiplication of That Number's Digits : \n");
        scanf("%d", &digit_mulp);
        digit2_mulp=1;
        if (digit_mulp==0){
            printf("The Number is Zero.");
            }
        else{
            if(digit_mulp<0){
                digit_mulp = -digit_mulp;
            }
            while(digit_mulp>0){
                digit1_mulp=digit_mulp%10;
                digit2_mulp=digit2_mulp*digit1_mulp;
                digit_mulp=digit_mulp/10;
            }
            printf("The Result is : %d\n",digit2_mulp);
                }
        }
       else if (a==0){
            printf("You Have selected Stop/Exit.\n");
            printf("Thank You !");
            }

////////////////Multiplication revibe section ::::::            
        else {
            printf("Wrong Input !! Try Again .");
            while (a<0 || a>2){
            printf("Which Type of Multiplication You Want To Do :\n"
               "A. Get The Multipliction of a Range                >> Press 1\n"
               "B. Get The Multiplication of That Number's Digits  >> Press 2\n"
               "C. To Stop/Exit                                    >> Press 0\n");
        scanf("%d", &a);
        if (a==1){
            printf("Enter The Starting Range : \n");
	        scanf("%d", &mulp_range1);
            printf("Enter The Ending Range : \n");
            scanf("%d", &mulp_range2);
	mulp_result=1;
	while(mulp_range1<=mulp_range2){
		mulp_result=mulp_result*mulp_range1;
		mulp_range1++;
	}
	printf("The Result is : %d",mulp_result);
    pass_attempt=0;
        }
        else if (a==2){
        printf("Enter a Number to Get Multiplication of That Number's Digits : \n");
        scanf("%d", &digit_mulp);
        digit2_mulp=1;
        if (digit_mulp==0){
            printf("The Number is Zero.");
            }
        else{
            if(digit_mulp<0){
                digit_mulp = -digit_mulp;
            }
            while(digit_mulp>0){
                digit1_mulp=digit_mulp%10;
                digit2_mulp=digit2_mulp*digit1_mulp;
                digit_mulp=digit_mulp/10;
            }
            printf("The Result is : %d\n",digit2_mulp);
                }
        }
       else if (a==0){
            printf("You Have selected Stop/Exit.\n");
            printf("Thank You !");
            }
        else {
            printf("Wrong Input !! Try Again .");
            } 
        }
            }
            pass_attempt=0; 
        }
    
 /////Multiplication Ending Section ::::::  
//for Code Stop Sector :
    else if (b==4){
        printf("You Have selected Stop/Exit.\n");
        printf("Thank You !");
        pass_attempt=0;
    }
//for nothing else free section :
    else {
        printf("Wrong input.Give Right Input Again.\n");
////////////////////////////////////////////revibe section starting (whole code) :
    while (b<1 || b>4){
    printf("Helloo...!!,Welcome.\n"
            "What Do You Want To Do : \n"
            "A. Finding Odd/Even Numbers        >> Press 1\n"
            "B. Doing Sum of Numbers            >> Press 2\n"
            "C. Doing Multiplication of Numbers >> Press 3\n"
            "D. To Stop/Exit                    >> Press 4\n");
    scanf("%d", &b);
//for odd/even section :
    if (b==1){
    printf("What do you want to do?\n"
           "1. Find odd numbers >> Press 1\n"
           "2. Find even numbers >> Press 2\n"
           "3. To Stop/Exit      >> Press 0\n");
    scanf("%d", &a);

    if (a == 1) {
        printf("You selected to odd numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2==0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }
        pass_attempt=0;
    }
    else if (a == 2) {
        printf("You selected even numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2 != 0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }  
        pass_attempt=0;
    }
    else if (a==0) {
        printf("Thank You !");
        pass_attempt=0;
    }
    else {
        printf("Wrong input.Give Right Input Again.\n");
//revibe section Starting :
    while (a>2 || a<1){
    printf("What do you want to do?\n"
           "1. Find odd numbers >> Press 1\n"
           "2. Find even numbers >> Press 2\n");
    scanf("%d", &a);

    if (a == 1) {
        printf("You selected to odd numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2==0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }
        pass_attempt=0;
    }
    else if (a == 2) {
        printf("You selected even numbers.\n");
        printf("Now You Enter the Starting Range Number : \n");
        scanf("%d",&odd_range1);
        printf("Good!,Now Enter the Endimg Range of Number : \n");
        scanf("%d",&odd_range2);
        if (odd_range1 % 2 != 0){
            odd_changer=odd_range1+1;
            while(odd_changer<=odd_range2){
		printf(" %d ",odd_changer);
		odd_changer+=2;
            }
        }
        else{
        while(odd_range1<=odd_range2){
		printf(" %d ",odd_range1);
		odd_range1 = odd_range1+2;
             }
        }
        pass_attempt=0;  
    }
    else {
        printf("Wrong input.Give Right Input Again.\n");
        pass_attempt=0;
        }        
    }
//revibe section ending  :
    }
    }
//for Sum Section :
    else if (b==2){
        printf("You Have Selected Sum of Numbers.\n");
        pass_attempt=0;
    }
//for Multiplication Section :
    else if (b==3){
        printf("Which Type of Multiplication You Want To Do :\n"
               "A. Get The Multipliction of a Range                >> Press 1\n"
               "B. Get The Multiplication of That Number's Digits  >> Press 2\n"
               "C. To Stop/Exit                                    >> Press 0\n");
        scanf("%d", &a);
        if (a==1){
            printf("Enter The Starting Range : \n");
	        scanf("%d", &mulp_range1);
            printf("Enter The Ending Range : \n");
            scanf("%d", &mulp_range2);
	mulp_result=1;
	while(mulp_range1<=mulp_range2){
		mulp_result=mulp_result*mulp_range1;
		mulp_range1++;
	}
	printf("The Result is : %d",mulp_result);
    pass_attempt=0;
        }
        else if (a==2){
        printf("Enter a Number to Get Multiplication of That Number's Digits : \n");
        scanf("%d", &digit_mulp);
        digit2_mulp=1;
        if (digit_mulp==0){
            printf("The Number is Zero.");
            }
        else{
            if(digit_mulp<0){
                digit_mulp = -digit_mulp;
            }
            while(digit_mulp>0){
                digit1_mulp=digit_mulp%10;
                digit2_mulp=digit2_mulp*digit1_mulp;
                digit_mulp=digit_mulp/10;
            }
            printf("The Result is : %d\n",digit2_mulp);
                }
        }
       else if (a==0){
            printf("You Have selected Stop/Exit.\n");
            printf("Thank You !");
            }

////////////////Multiplication revibe section ::::::            
        else {
            printf("Wrong Input !! Try Again .");
            while (a<0 || a>2){
            printf("Which Type of Multiplication You Want To Do :\n"
               "A. Get The Multipliction of a Range                >> Press 1\n"
               "B. Get The Multiplication of That Number's Digits  >> Press 2\n"
               "C. To Stop/Exit                                    >> Press 0\n");
        scanf("%d", &a);
        if (a==1){
            printf("Enter The Starting Range : \n");
	        scanf("%d", &mulp_range1);
            printf("Enter The Ending Range : \n");
            scanf("%d", &mulp_range2);
	mulp_result=1;
	while(mulp_range1<=mulp_range2){
		mulp_result=mulp_result*mulp_range1;
		mulp_range1++;
	}
	printf("The Result is : %d",mulp_result);
    pass_attempt=0;
        }
        else if (a==2){
        printf("Enter a Number to Get Multiplication of That Number's Digits : \n");
        scanf("%d", &digit_mulp);
        digit2_mulp=1;
        if (digit_mulp==0){
            printf("The Number is Zero.");
            }
        else{
            if(digit_mulp<0){
                digit_mulp = -digit_mulp;
            }
            while(digit_mulp>0){
                digit1_mulp=digit_mulp%10;
                digit2_mulp=digit2_mulp*digit1_mulp;
                digit_mulp=digit_mulp/10;
            }
            printf("The Result is : %d\n",digit2_mulp);
                }
        }
       else if (a==0){
            printf("You Have selected Stop/Exit.\n");
            printf("Thank You !");
            }
        else {
            printf("Wrong Input !! Try Again .");
            } 
        }
            }
            pass_attempt=0; 
        }
    
 /////Multiplication Ending Section ::::::  
//for Code Stop Sector :
    else if (b==4){
        printf("You Have selected Stop/Exit.\n");
        printf("Thank You !");
        pass_attempt=0;
    }
//for nothing else free section :
    else {
        printf("Wrong input.Give Right Input Again.\n");
        }
    }   
////////////////////////////////revibe section ending (whole code)  :        
             }
    }
////////////////////////////////////Password Acess Ending :


    
        else {
            pass_attempt--;
    printf("Wrong Password !!! Try Again You Have %d Attempts Left..! ",pass_attempt);
    
        }


    }
}
///////////////////////////////////////////////////////////Whole Paswword Attempt Revive Ending :::







    return 0;
}