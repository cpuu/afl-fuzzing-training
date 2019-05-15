# AFL workshop training materials

GLHF

Original Link : https://github.com/wrauner/afl-fuzzing-training

From : https://www.defcon.org/html/defcon-26/dc-26-workshops.html#botwicz

## Download
```$ sudo apt-get install docker.io ```

```$ git clone https://github.com/cpuu/afl-fuzzing-training.git```

## Building 
```$ cd afl-fuzzing-training/ ```

```$ sudo docker build -t fuzzing .```

( ~ 40 min)

## Running

```$ sudo docker run -it -v $(pwd)/workshop:/home/root/fuzz/workshop fuzzing```

## Open another console window
```$ sudo docker ps```


| CONTAINER ID | IMAGE | COMMAND | CREATED | STATUS | PORTS |NAMES
| ------ | ------ |----- |----- |----- |----- |----- |
| **ca702b5dbf4a** | fuzzing | "/bin/bash" | 38 seconds ago|Up 36 seconds||heuristic_mcclintock|


```$ sudo docker exec -it ca702b5dbf4a bash```

## Stop docker container
```$ docker stop ca702b5dbf4a```

## Start & Attach docker container
```$ docker start ca702b5dbf4a```

```$ docker attach ca702b5dbf4a```
