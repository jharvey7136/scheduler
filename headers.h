#ifndef HEADERS_H
#define HEADERS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <stdbool.h>

#define MAX 48

struct process {
    char* name;
    int starting_priority;
    int current_priority;
    int time_cpu_takes;
    int time_io_takes;
    int total_cpu_io_time;
    int current_cpu_time;
    int current_io_time;
    int current_ready_queue_time;
    int left_cpu_time;
    int left_io_time;
    int total_cpu_time;
    int total_io_time;
    int total_ready_queue_time;
    int min_ready_queue_time;
    int max_ready_queue_time;
    char state; 
}process_null = { "null", -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 'N' };
typedef struct process process;

typedef struct {
    int max_io_time;
    int max_cpu_time;
    int max_ready_queue_time;
    int current_time;
} os;


void init(int*, int*, int*, int*);

void push(process[], process, int*, int*);

void check(process[], process, int);

process pop(process[], int*, int*);

void display_processes(os, process[], int);

void update_io_processes(process[], int);

void move_io_processes_to_ready(os, process[], process[], int*, int*, int*);

void move_process_from_cpu(process[], process[], process[], process*, int*, int*, int*, int*);

void update_ready_queue(process[], int*, int);


void check_rejected_processes(os, process[], process[], int*, int*, int*);

#endif
