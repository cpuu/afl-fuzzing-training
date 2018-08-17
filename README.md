# AFL workshop training materials

GLHF
Original Link : https://github.com/wrauner/afl-fuzzing-training

From : https://www.defcon.org/html/defcon-26/dc-26-workshops.html#botwicz

## Download
```$ git clone https://github.com/cpuu/afl-fuzzing-training.git```

## Building
```$ cd afl-fuzzing-training/ ```

```$ docker build -t fuzzing .```

## Running

```docker run -it -v $(pwd)/workshop:/home/root/fuzz/workshop fuzzing```

## Open another console window

```docker exec -it <container_id> bash```

