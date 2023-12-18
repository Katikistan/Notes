We have decided to not explicitly test load/store instructions

Instructions tested in fib.dis for fib(10): \\
LUI, AUIPC, JALR, BEQ, BNE, BGE, BLTU, BGEU, LW, LBU, SB, SW, ADDI, SLLI, ADD, SUB, ECALL, DIVU, REMU
\\
Instructions not tested in fib.dis: \\
JAL, BLT, LB, LH, LHU, SH, SLTI, SLTIU, XORI, ORI, ANDI, SRLI, SRAI, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND, MUL, MULH, MULHSU, MULHU, DIV, REM
\\
Instructions tested in hello.dis: \\
LUI, AUIPC, JALR, BEQ, BNE, LB, LW, LBU, SW, ADDI, ECALL

Instructions not tested in hello.dis: \\
JAL, BLT, BGE, BLTU, BGEU, LH, LHU, SB, SH, SLTI, SLTIU, XORI, ORI, ANDI, SLLI, SRLI, SRAI, ADD, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND, MUL, MULH, MULHSU, MULHU, DIV, DIVU, REM, REMU

instructions tested in echo.dis:\\
LUI, AUIPC, JALR, BEQ, BNE, BGE, LW, LBU, SB, SW, ADDI, ANDI, ADD, ECALL \\

instructions not tested in echo.dis:\\
JAL, BLT, BLTU, BGEU, LB, LH, LHU, SH, SLTI, SLTIU, XORI, ORI, SLLI, SRLI, SRAI, SUB, SLL, SLT, SLTU, XOR, SRL, SRA, OR, AND, MUL, MULH, MULHSU, MULHU, DIV, DIVU, REM, REMU

instructions tested in radix.dis:\\
LUI, AUIPC, JALR, BEQ, BNE, BLT, BGE, BLTU, BGEU, LW, LBU, SB, SW, ADDI

instruction not tested in radix.dis:\\
JAL, LB, LH, LHU, SH,

Instructions we should test: \\
MULH, MULHSU, MULHU


