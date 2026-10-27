CC = gcc
CFLAGS = -Wall -Wextra
SRC = var-bit-print.c

# Navn på de ferdige programmene
BIN64 = var-bit-print-64
BIN32 = var-bit-print-32

.PHONY: all clean run

# Standardmål: kompilerer begge versjoner
all: $(BIN64) $(BIN32)

# Kompiler 64-bit versjon
$(BIN64): $(SRC)
	$(CC) $(CFLAGS) -m64 $(SRC) -o $(BIN64)

# Kompiler 32-bit versjon
$(BIN32): $(SRC)
	$(CC) $(CFLAGS) -m32 $(SRC) -o $(BIN32)

# Kompiler og kjør begge for å sammenligne
run: all
	@echo "=== Running 64-bit version ==="
	./$(BIN64)
	@echo ""
	@echo "=== Running 32-bit version ==="
	./$(BIN32)

# Rydd opp kompilerte filer
clean:
	rm -f $(BIN64) $(BIN32)