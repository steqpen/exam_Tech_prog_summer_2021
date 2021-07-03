FROM ubuntu
LABEL maintainer="201-331 Kravtsova"

RUN apt-get update
RUN apt-get -y install g++
ADD Exam_proj_QtLess .

RUN g++ -o main main.cpp square.h square.cpp

CMD ["./main", "Kravtsova"]