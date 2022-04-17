// Copyright 2022 CheginArtyom
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

template<typename T, int size>
class TPQueue {
private:
int b;
int e;
T arr[5];

 public:
  TPQueue() {
    b = 0;
    e = -1;
    for (int i = 0; i < 5; i++)
      arr[i].prior = 0;
  }
  void p(T element) {
    int i = e;
    for (i; i >= b; i--) {
      if (element.prior > arr[i % size].prior)
        arr[(i + 1) % size] = arr[i % size];
      else
        break;
    }
    arr[(i + 1) % size] = element;
    e++;
  }
  T& pop() {
    arr[(begin) % size].prior = 0;
    return arr[(b++) % size];
  }
};

struct SYM {
  char ch;
  int prior;
};

#endif  // INCLUDE_TPQUEUE_H_
