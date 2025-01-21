%include "../../include/raylib.inc"

section .rodata
title db "Window example", 0x00
msg   db "Congrats! You created your first window!"

section .text

global main:function
main:
    push rbp
    mov rbp, rsp
    sub rsp, 16

    mov rdi, 800
    mov rsi, 600
    mov rdx, title
    call InitWindow

    mov rdi, 60
    call SetTargetFPS

.loopy:
    call WindowShouldClose
    cmp rax, 0
    jne .end

    call BeginDrawing

    mov rdi, [RAYWHITE]
    call ClearBackground

    mov rdi, msg
    mov rsi, 190
    mov rdx, 200
    mov rcx, 20
    mov r8, [LIGHTGRAY]
    call DrawText

    call EndDrawing

    jmp .loopy
.end

    call CloseWindow

    mov rax, 1
    xor rbx, rbx
    int 0x80