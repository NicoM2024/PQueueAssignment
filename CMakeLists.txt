cmake_minimum_required(VERSION 3.30)
project(PQueueAssignment.git C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(test
        pqueue-unit-tests.c
        list.kschne11-nlmilazz.c
        thing.c
        pqueue.kschne11-nlmilazz.c)
