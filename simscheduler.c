


#include "headers.h"



int main(int argc, char *argv[]){

  os os_params = {2, 3, 4, 0};

  process processes[MAX] = {
        { "Process_0_1", 0, 0, 30, 10, 0, 0, 0, 0, 30, 10, 0, 0, 0, 44, 35, 'I' },
        { "Process_0_2", 0, 0, 15, 15, 0, 0, 0, 0, 15, 15, 0, 0, 0, 35, 41, 'I' },
        { "Process_0_3", 0, 0, 5, 20, 0, 0, 0, 0, 5, 20, 0, 0, 0, 23, 64, 'I' },

        { "Process_1_1", 1, 1, 24, 14, 0, 0, 0, 0, 24, 14, 0, 0, 0, 61, 78, 'I' },
        { "Process_1_2", 1, 1, 30, 30, 0, 0, 0, 0, 30, 30, 0, 0, 0, 35, 75, 'I' },
        { "Process_1_3", 1, 1, 12, 25, 0, 0, 0, 0, 12, 25, 0, 0, 0, 55, 43, 'I' },

        { "Process_2_1", 2, 2, 45, 12, 0, 0, 0, 0, 45, 12, 0, 0, 0, 56, 33, 'I' },
        { "Process_2_2", 2, 2, 13, 13, 0, 0, 0, 0, 13, 13, 0, 0, 0, 45, 64, 'I' },
        { "Process_2_3", 2, 2, 19, 24, 0, 0, 0, 0, 19, 24, 0, 0, 0, 54, 32, 'I' },

        { "Process_3_1", 3, 3, 34, 29, 0, 0, 0, 0, 34, 29, 0, 0, 0, 36, 65, 'I' },
        { "Process_3_2", 3, 3, 20, 20, 0, 0, 0, 0, 20, 20, 0, 0, 0, 46, 34, 'I' },
        { "Process_3_3", 3, 3, 12, 30, 0, 0, 0, 0, 12, 30, 0, 0, 0, 45, 22, 'I' },

        { "Process_4_1", 4, 4, 30, 10, 0, 0, 0, 0, 30, 10, 0, 0, 0, 76, 23, 'I' },
        { "Process_4_2", 4, 4, 15, 15, 0, 0, 0, 0, 15, 15, 0, 0, 0, 75, 43, 'I' },
        { "Process_4_3", 4, 4, 5, 20, 0, 0, 0, 0, 5, 20, 0, 0, 0, 67, 22, 'I' },

        { "Process_5_1", 5, 5, 24, 14, 0, 0, 0, 0, 24, 14, 0, 0, 0, 76, 45, 'I' },
        { "Process_5_2", 5, 5, 30, 30, 0, 0, 0, 0, 30, 30, 0, 0, 0, 56, 34, 'I' },
        { "Process_5_3", 5, 5, 12, 25, 0, 0, 0, 0, 12, 25, 0, 0, 0, 65, 45, 'I' },

        { "Process_6_1", 6, 6, 45, 12, 0, 0, 0, 0, 45, 12, 0, 0, 0, 77, 23, 'I' },
        { "Process_6_2", 6, 6, 13, 13, 0, 0, 0, 0, 13, 13, 0, 0, 0, 54, 44, 'I' },
        { "Process_6_3", 6, 6, 19, 24, 0, 0, 0, 0, 19, 24, 0, 0, 0, 46, 34, 'I' },

        { "Process_7_1", 7, 7, 34, 29, 0, 0, 0, 0, 34, 29, 0, 0, 0, 45, 33, 'I' },
        { "Process_7_2", 7, 7, 20, 20, 0, 0, 0, 0, 20, 20, 0, 0, 0, 67, 34, 'I' },
        { "Process_7_3", 7, 7, 12, 30, 0, 0, 0, 0, 12, 30, 0, 0, 0, 45, 22, 'I' },

        { "Process_8_1", 8, 8, 30, 10, 0, 0, 0, 0, 30, 10, 0, 0, 0, 45, 34, 'I' },
        { "Process_8_2", 8, 8, 15, 15, 0, 0, 0, 0, 15, 15, 0, 0, 0, 74, 12, 'I' },
        { "Process_8_3", 8, 8, 5, 20, 0, 0, 0, 0, 5, 20, 0, 0, 0, 34, 23, 'I' },

        { "Process_9_1", 9, 9, 24, 14, 0, 0, 0, 0, 24, 14, 0, 0, 0, 34, 11, 'I' },
        { "Process_9_2", 9, 9, 30, 30, 0, 0, 0, 0, 30, 30, 0, 0, 0, 56, 32, 'I' },
        { "Process_9_3", 9, 9, 12, 25, 0, 0, 0, 0, 12, 25, 0, 0, 0, 61, 15, 'I' },

        { "Process10_1", 10, 10, 45, 12, 0, 0, 0, 0, 45, 12, 0, 0, 0, 61, 13, 'I' },
        { "Process10_2", 10, 10, 13, 13, 0, 0, 0, 0, 13, 13, 0, 0, 0, 53, 23, 'I' },
        { "Process10_3", 10, 10, 19, 24, 0, 0, 0, 0, 19, 24, 0, 0, 0, 65, 23, 'I' },

        { "Process11_1", 11, 11, 34, 29, 0, 0, 0, 0, 34, 29, 0, 0, 0, 52, 11, 'I' },
        { "Process11_2", 11, 11, 20, 20, 0, 0, 0, 0, 20, 20, 0, 0, 0, 53, 23, 'I' },
        { "Process11_3", 11, 11, 12, 30, 0, 0, 0, 0, 12, 30, 0, 0, 0, 23, 11, 'I' },

        { "Process12_1", 12, 12, 30, 10, 0, 0, 0, 0, 30, 10, 0, 0, 0, 34, 23, 'I' },
        { "Process12_2", 12, 12, 15, 15, 0, 0, 0, 0, 15, 15, 0, 0, 0, 53, 34, 'I' },
        { "Process12_3", 12, 12, 5, 20, 0, 0, 0, 0, 5, 20, 0, 0, 0, 53, 23, 'I' },

        { "Process13_1", 13, 13, 24, 14, 0, 0, 0, 0, 24, 14, 0, 0, 0, 34, 22, 'I' },
        { "Process13_2", 13, 13, 30, 30, 0, 0, 0, 0, 30, 30, 0, 0, 0, 36, 12, 'I' },
        { "Process13_3", 13, 13, 12, 25, 0, 0, 0, 0, 12, 25, 0, 0, 0, 35, 33, 'I' },

        { "Process14_1", 14, 14, 45, 12, 0, 0, 0, 0, 45, 12, 0, 0, 0, 43, 23, 'I' },
        { "Process14_2", 14, 14, 13, 13, 0, 0, 0, 0, 13, 13, 0, 0, 0, 23, 11, 'I' },
        { "Process14_3", 14, 14, 19, 24, 0, 0, 0, 0, 19, 24, 0, 0, 0, 56, 25, 'I' },

        { "Process15_1", 15, 15, 34, 29, 0, 0, 0, 0, 34, 29, 0, 0, 0, 67, 23, 'I' },
        { "Process15_2", 15, 15, 20, 20, 0, 0, 0, 0, 20, 20, 0, 0, 0, 56, 22, 'I' },
        { "Process15_3", 15, 15, 12, 30, 0, 0, 0, 0, 12, 30, 0, 0, 0, 34, 11, 'I' },
    };

    process readyqueue[MAX];
    process terminated[MAX];
    process * current_process = &process_null;

    int front, back, size, endedsize;

    init(&front, &back, &size, &endedsize);

    while(size > 0 || current_process->starting_priority != -1){

      os_params.current_time++;

      update_io_processes(processes, size);

      update_ready_queue(readyqueue, &front, back);

      move_io_processes_to_ready(os_params, readyqueue, processes, &front, &back, &size);

      if(current_process->starting_priority == -1){
        process temp = pop(readyqueue, &front, &back);
        current_process = &temp;

        if(current_process->starting_priority != 1){
          current_process->state = 'C';
          current_process->current_priority = current_process->starting_priority;
          current_process->total_ready_queue_time += current_process->current_ready_queue_time;

          if(current_process->current_ready_queue_time < current_process->min_ready_queue_time){
            current_process->min_ready_queue_time = current_process->current_ready_queue_time;
          }

          if(current_process->current_ready_queue_time > current_process->max_ready_queue_time){
            current_process->max_ready_queue_time = current_process->current_ready_queue_time;
          }

          current_process->current_ready_queue_time = 0;
        }
      }
      else{
        current_process->current_cpu_time++;

        if(current_process->current_cpu_time != os_params.max_cpu_time){
          current_process->left_cpu_time -= current_process->current_cpu_time;
          move_process_from_cpu(readyqueue, terminated, processes, current_process, &front, &back, &endedsize, &size);
          current_process = &process_null;
        }
      }
      check_rejected_processes(os_params, readyqueue, terminated, &front, &back, &endedsize);
    }
    display_processes(os_params, terminated, endedsize);
    return 0;
  }







/*****************FUNCTIONS**********************/







/**************************************************************/
  void init(int *front, int *rear, int *io_size, int *ended_current_size){
      (*front) = (*rear) = -1;
      (*io_size) = MAX;
      (*ended_current_size) = 0;
  }
/**************************************************************/


/**************************************************************/
  void push(process ready_queue[], process p, int *front, int *rear){
      if ((*rear) >= MAX - 1){
          printf("\nQueue overflow no more elements can be inserted");

      }else{
          if (((*rear) == -1) && ((*rear) == -1)){
              (*front)++;
              (*rear)++;
              ready_queue[(*rear)] = p;

          }else{
              check(ready_queue, p, (*rear));
              (*rear)++;
          }
      }
  }
/**************************************************************/


/**************************************************************/
  void check(process ready_queue[], process p, int rear){
      int i,j;
      bool added = false;
      for (i = 0; i <= rear && !added; i++){

          if (p.current_priority > ready_queue[i].current_priority){

              for (j = rear + 1; j > i; j--){
                  ready_queue[j] = ready_queue[j - 1];
              }

              ready_queue[i] = p;
              added = true;
          }
      }

      if(!added){
          ready_queue[i] = p;
      }
  }
/**************************************************************/


/**************************************************************/
  process pop(process ready_queue[], int *front, int *rear){
      process p = process_null;

      if ((*front) != -1){
          int i;
          p = ready_queue[0];

          for(i = 0; i < (*rear); i++){
              ready_queue[i] = ready_queue[i+1];
          }

          ready_queue[i] = process_null;
          (*rear)--;

          if((*rear) == -1){
              (*front) = -1;
          }
      }
      return p;
  }
/**************************************************************/


/**************************************************************/
  void display_processes(os my_os, process ended_processes[], int ended_current_size){
      printf("\nTIME LIMITS:     CPU:%d      IO:%d      READY QUEUE:%d     ENDED AFTER %d SECONDS\n\n", my_os.max_cpu_time, my_os.max_io_time, my_os.max_ready_queue_time, my_os.current_time);

      if (ended_current_size == 0){
          printf("No proceses to show\n");

      }else{
          printf("NAME          STARTING PRI.    TIME IN IO    TIME IN CPU    STATE     TOTAL CPU      TOTAL IO     TOTAL RQ    MIN/MAX \n");

          int i;
          for (i = 0; i < ended_current_size; i++){
              printf("%s %8d %14d %14d %11c %11d %14d %12d %10d/%d\n", ended_processes[i].name, ended_processes[i].starting_priority, ended_processes[i].time_io_takes, ended_processes[i].time_cpu_takes, ended_processes[i].state, ended_processes[i].time_cpu_takes, ended_processes[i].time_io_takes,
                     (ended_processes[i].total_ready_queue_time + ended_processes[i].time_io_takes), ended_processes[i].min_ready_queue_time, ended_processes[i].max_ready_queue_time);
          }
      }
  }
  /**************************************************************/


  /**************************************************************/
  void update_io_processes(process io_processes[], int io_size){
      int i;
      for(i = 0; i < io_size; i++){
          io_processes[i].current_io_time++;
      }
  }
  /**************************************************************/


  /**************************************************************/
  void move_io_processes_to_ready(os my_os, process ready_queue[], process io_processes[], int *front, int *rear, int *io_size){
      int i;
      for(i = 0; i < (*io_size); i++){

          if(io_processes[i].current_io_time == my_os.max_io_time || io_processes[i].current_io_time == io_processes[i].left_io_time){
              io_processes[i].left_io_time -= io_processes[i].current_io_time;
              io_processes[i].state = 'Q';
              io_processes[i].total_cpu_io_time += io_processes[i].current_io_time;
              io_processes[i].total_io_time += io_processes[i].current_io_time;
              io_processes[i].current_io_time = 0;

              push(ready_queue, io_processes[i], front, rear);
              int j;

              for(j = i; j < (*io_size) - 1; j++){
                  io_processes[j] = io_processes[j + 1];
              }

              i--;
              (*io_size)--;
              io_processes[(*io_size)] = process_null;
          }
      }
  }
  /**************************************************************/


  /**************************************************************/
  void move_process_from_cpu(process ready_queue[], process ended_processes[], process io_processes[], process *current_process, int *front, int *rear, int *ended_current_size, int *io_size){
      current_process->total_cpu_io_time += current_process->current_cpu_time;
      current_process->total_cpu_time += current_process->current_cpu_time;
      current_process->current_cpu_time = 0;

      if(current_process->left_cpu_time == 0){
          current_process->state = 'E';
          ended_processes[(*ended_current_size)++] = (*current_process);
      }

      else if(current_process->left_io_time > 0){
          current_process->state = 'I';
          io_processes[(*io_size)++] = (*current_process);

      }else{
          current_process->state = 'Q';
          push(ready_queue, (*current_process), front, rear);
      }
  }
  /**************************************************************/


  /**************************************************************/
  void update_ready_queue(process ready_queue[], int *front, int rear){
      if ((*front) != -1){

          for (; (*front) <= rear; (*front)++){
              ready_queue[(*front)].current_ready_queue_time++;

              if(ready_queue[(*front)].current_priority < 15){
                  ready_queue[(*front)].current_priority++;
              }
          }

          (*front) = 0;
      }
  }
  /**************************************************************/


  /**************************************************************/
  void check_rejected_processes(os my_os, process ready_queue[], process ended_processes[], int *front, int *rear, int *ended_current_size){
      if ((*front) > -1){

          for (; (*front) <= (*rear) && (*rear) >= 0; (*front)++){

              if(ready_queue[(*front)].current_ready_queue_time > my_os.max_ready_queue_time){
                  ready_queue[(*front)].state = 'E';
                  ready_queue[(*front)].total_ready_queue_time += ready_queue[(*front)].current_ready_queue_time;

                  if(ready_queue[(*front)].current_ready_queue_time < ready_queue[(*front)].min_ready_queue_time){
                      ready_queue[(*front)].min_ready_queue_time = ready_queue[(*front)].current_ready_queue_time;
                  }

                  if(ready_queue[(*front)].current_ready_queue_time > ready_queue[(*front)].max_ready_queue_time){
                      ready_queue[(*front)].max_ready_queue_time = ready_queue[(*front)].current_ready_queue_time;
                  }

                  ready_queue[(*front)].current_ready_queue_time = 0;
                  ended_processes[(*ended_current_size)++] = ready_queue[(*front)];

                  int i;
                  for(i = (*front); i < (*rear); i++){
                      ready_queue[i] = ready_queue[i+1];
                  }

                  (*rear)--;
                  (*front)--;
              }
          }

          if((*rear) == -1){
              (*front) = -1;

          }else{
              (*front) = 0;
          }
      }
  }
/**************************************************************/
