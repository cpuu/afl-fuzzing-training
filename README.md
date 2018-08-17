# AFL workshop training materials

GLHF

## Download
```$ git clone https://github.com/cpuu/afl-fuzzing-training.git```

## Building

```docker build -t fuzzing .```

## Running

```docker run -it -v $(pwd)/workshop:/home/root/fuzz/workshop fuzzing```

## Open another console window

```docker exec -it <container_id> bash```

