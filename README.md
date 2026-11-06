# Quoridor in C

A simple terminal-based implementation of the board game Quoridor, written in C. Built to handle basic board rendering, input parsing, and wall/movement validation in the command line.

## Controls

When the game starts, use the following text commands to play:

- **Move left:** `m l`
- **Move right:** `m r`
- **Move up:** `m u`
- **Move down:** `m d`
- **Place vertical wall:** `w v [row] [col]` (Example: `w v 1 2`)
- **Place horizontal wall:** `w h [row] [col]` (Example: `w h 1 2`)

## How to Compile and Run

If you are using the multi-file modular version, compile all the source files together with `gcc`:

```bash
gcc main.c board.c actions.c -o quoridor
./quoridor
