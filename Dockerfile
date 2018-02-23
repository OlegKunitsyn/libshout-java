FROM debian
RUN apt-get update
RUN apt-get install -y git libshout-dev gcc openjdk-8-jdk maven
RUN mkdir /libshout-java
COPY . ./libshout-java
WORKDIR /libshout-java
