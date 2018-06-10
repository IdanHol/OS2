#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    pid_t id;
    printf("start\n");
    id = fork();
    if (!id) { //2
        id = fork(); //create 4	
        if (!id) { //4
            id = fork(); //create 8
            if (!id) { //8
                id = fork(); //create 14
                if (!id) //14
                    printf("Node 14 id  %d  have 0\n", getpid());
                else { //8
                    id = fork(); //create 15
                    if (!id) //14
                        printf("Node 15 id  %d  have 0\n", getpid());
                    else //8
                        printf("Node 8 id  %d  have 2\n", getpid());
                }
            } 
            else {//4

                id = fork(); //create 9
                if (!id) { //9
                    id = fork(); //create 16
                    if (!id) { //16
                        id = fork(); //create 22
                        if (!id) { //22
                            id = fork(); //create 26
                            if (!id) //26
                                printf("Node 26 id  %d  have 0\n", getpid());
                            else { //22
                                id = fork(); //create 27
                                if (!id) //27
                                    printf("Node 27 id  %d  have 0\n", getpid());
                                else //22
                                    printf("Node 22 id  %d  have 2\n", getpid());
                            }
                        } 
                        else { //16
                            id = fork(); //create 23
                            if (!id) //23
                                printf("Node 23 id  %d  have 0\n", getpid());
                            else //16
                                printf("Node 16 id  %d  have 4\n", getpid());
                        }
                    } 
                    else { //9
                        id = fork(); //create 17
                        if (!id) //17
                            printf("Node 17 id  %d  have 0\n", getpid());
                        else //9
                            printf("Node 9 id  %d  have 6\n", getpid());
                    }
                } 
                else { //4
                    printf("Node 4 id  %d  have 10\n", getpid());
                }  
			}
        } 
        else {//2
            id = fork(); //create 5
            if (!id) { //5
                id = fork(); //create 10
                if (!id)  //10
                    printf("Node 10 id  %d  have 0\n", getpid());
			    else{//5
   			        id = fork(); //create 11
                    if (!id) { //11
                        id = fork(); //create 18
                        if (!id) { //18
                            id = fork(); //create 24			
				            if (!id)  //24
                                printf("Node 24 id  %d  have 0\n", getpid());
				            else{//18
                                id = fork(); //create 25		
				                if (!id)  //25
                                    printf("Node 25 id  %d  have 0\n", getpid());
                                else //18
                                    printf("Node 18 id  %d  have 2\n", getpid());
			                }
                        }
			            else{
                            id = fork(); //create 19		
				            if (!id)  //19
                                printf("Node 19 id  %d  have 0\n", getpid());
                            else //11
                                printf("Node 11 id  %d  have 4\n", getpid());						
			            }
                    }
                    else//5
                        printf("Node 5 id  %d  have 6\n", getpid());
                }
            }
	        else //2
                printf("Node 2 id  %d  have 18\n", getpid());				
			
		}               
	}
    else {//1
        printf("Node 1 id  %d  have 26\n", getpid());
		id = fork(); //create 3		
		if (!id) { //3
			id = fork(); //create 6		
			if (!id)  //6
                printf("Node 6 id  %d  have 0\n", getpid());
			else//3
                printf("Node 3 id  %d  have 6\n", getpid());
		}
		else{
			id = fork(); //create 7		
			if (!id) { //7
			    id = fork(); //create 12		
				if (!id){  //12
			        id = fork(); //create 20		
				    if (!id)  //20
                        printf("Node 20 id  %d  have 0\n", getpid());
				    else{//12
			            id = fork(); //create 21		
				        if (!id)  //21
			                printf("Node 21 id  %d  have 0\n", getpid());
				        else//12
                            printf("Node 12 id  %d  have 2\n", getpid());
				    }
				}
				else{//7
			        id = fork(); //create 13		
				    if (!id)  //13
			            printf("Node 13 id  %d  have 0\n", getpid());
				    else//7
                        printf("Node 7 id  %d  have 4\n", getpid());
				}
			}
		}
    }
    exit(0);
}

  
