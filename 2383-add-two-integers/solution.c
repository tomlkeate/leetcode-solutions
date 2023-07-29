__attribute__((naked)) int sum(int num1, int num2){
    __asm__(".intel_syntax noprefix;\
    lea eax, [rdi + rsi];\
    ret;\
    .att_syntax;");
}
