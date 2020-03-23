#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>
#include <string.h>
#include <errno.h>
#include <signal.h>

int score = 0;

void end_game(int sig)
{
  printf("\nScore final : %d\n", score);
  exit(0);
}

void times_up(int sig)
{
  puts("\nTemps écoulé !");
  raise(SIGINT);
}

int catch_signal(int sig, void (*handler)(int))
{
  struct sigaction action;

  action.sa_handler = handler;
  sigemptyset(&action.sa_mask);
  action.sa_flags = 0;

  return sigaction (sig, &action, NULL);
}

int main()
{
  catch_signal(SIGALRM, times_up);
  catch_signal(SIGINT, end_game);
  srandom (time(0));

  while(1) {
    int a = random() % 11;
    int b = random() % 11;
    int answer;
    char txt[4];

    alarm(5);
    printf("\nCombien font %d fois %d : ", a, b);
    fgets(txt, 4, stdin);
    answer = atoi(txt);

    if (answer == a * b)
      score++;
    else
      printf("\nFaux ! Score : %d\n", score);
  }
  return 0;

}