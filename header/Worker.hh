#ifndef WORKER_H
#define WORKER_H

extern int GoodWork;
extern int Part1;
class Worker {
  public:
    Worker(){};
	static const int Part2 = 0x22;
	static int Part3;
	int part1() { return Part1; }
	int part2();
	int part3();
};

// int Worker::Part1;
#endif //WORKER_H
