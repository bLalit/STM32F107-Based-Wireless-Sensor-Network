"# STM32F107-Based-Wireless-Sensor-Network" 

Prog 1 - Implemented a simple packet parser to parse weather packets.
         The objective of this program is to implement the base station receiver for a wireless sensor network. In addition to the base
         station, there are multiple sensor nodes, each of which relays packets containing climactic data to the base station via the 
         RF network. I wrote a C program to run on the STM32F107 micro-controller that accepts messages from the sensor nodes and
         displays them on the screen. The program decodes incoming packets to interpret the messages.

prog 2 - Decreased parsing bottleneck by implementing buffers and designing a new I/O driver to recieve and transmit data.
         The purpose of this program is to develop an inproved RS232 driver, which will achieve a degree of overlap of the input, output
         and processing activities. This program consists of 3 separate cooperating tasks. Each of these tasks need to be a good citizen
         and not monopolize the CPU when it can do no useful work. If the Rx or Tx are not ready, then you give up the CPU to other tasks.
         Each of the 3 tasks takes data from some source, processes the data, and forwards processed data to a destination. Data is passed
         from one task to the next via buffers.

prog 3 - Decreased parsing latency by implementing interrupts based I/O drivers.
         This code performs exactly the same function as prog 2. prog 3, however, uses interrupt-driven I/O, rather than polled I/O. The
         objective is to demonstrate that overlapped input, output, and processing are possible.
         serviceRx() and ServiceTx() tasks are not called from the main program. Instead, they are called from the USART2 interrupt
         handler. This will allow the Tx and Rx to be serviced immediately, and will prevent other tasks form hogging the CPU when
         I/O services is needed.

Phase 4 - Improved parsing by parallelizing the task using uCOS-III (RTOS).
          This program performs a similar function as program 1. In program 4, however, instead of cooperative multi-tasking, you will use
          the uC/OS-III an preemptive multitasking.
