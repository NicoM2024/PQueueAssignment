cmake_minimum_required(VERSION 3.30.5)
project(PQueueAssignment C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(PQueueAssignment
        pqueue-unit-tests.c
        thing.c
        list.kschne11-nlmilazz.c
        pqueue.kschne11-nlmilazz.c)
