int main() {
  int i;
  char **args; 

  while(1) {
    printf("yongfeng's shell:~$ ");
    args = get_line();
    if (strcmp(args[0], "exit") == 0) exit(0);     
    if('&&') parse_out_two_commands: cmd1, cmd2;
    if (execute(cmd1) != -1)   
      execute(cmd2);       
  }
}

int execute(char **args){
  int pid;
  int status;   
  char **cmd;   

  if(pid=fork() < 0){   
    perror("Error: forking failed");
    return -1;
 }


 else if(pid==0){
   cmd = parse_out(args);


   if(execvp(*cmd, cmd) < 0){   
     perror("execution error");
     return -1;
   }
  return 0;
 }


 else{      
  if(strcmp(args[sizeof(args)],'&') == 0){
     
  }
   else if (pid = waitpid(pid, &status, 0) == -1) perror("wait error");
  }
}