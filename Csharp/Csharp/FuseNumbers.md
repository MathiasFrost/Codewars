# Fuse Numbers

The task is to 'fuse' two numbers like so:

```
2020 ->                     <- 99999
 202 -> 0 -> 9         <- 9 <- 9999
  20 -> 2 -> 1 1       <- 9 <- 999
   2 -> 0 ->     9     <- 9 <- 99
     -> 2 ->     1 1   <- 9 <- 9
     -> 0 ->         9 <- 9 <-   
```

Note that if the fusion of two digits results in a number with more than one digit, the first digit overflows to the
right, like so:

```
initial  ->   9 1 9 1 9
overflow ->   1   1
result   -> 1 0 2 0 1 9
```

## Examples

```c#
Fuse(123, 123); // -> 444
Fuse(1_234, 123); // -> 5_551
Fuse(690, 876); // -> 972
Fuse(6_690, 876) // -> 9_726
Fuse(2_020, 99_999); // -> 102_019
```