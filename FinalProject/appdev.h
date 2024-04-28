#pragma once

#define N 20

typedef struct {
  char rname[N];
  int min;
  int max;
} rock;

void send_data(rock);
