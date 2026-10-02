cmake_minimum_required(VERSION 4.3)
project(PQueueAssignment C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(PQueueAssignment
        pqueue-unit-tests.c
        thing.c
        thing.h
        pqueue.kschne11-nlmilazz.h
        pqueue.kschne11-nlmilazz.c)
