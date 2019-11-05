.data
	vetor1: .word 4, 5, 9, 6, 8, 2, 13, 14, 7, 22
	resultado_par: .ascii "resultado da soma dos valores pares eh: "
	resultado_impar: .ascii "resultado da soma dos valores impares eh: "
.text
	la $s0, vetor1 
	lw $t0, 0($s0)
	andi $t1, $t0, 1
	jal soma			
	
	lw $t0, 4($s0)
	andi $t1, $t0, 1
	jal soma
	
	lw $t0, 8($s0)
	andi $t1, $t0, 1
	jal soma

	lw $t0, 12($s0)
	andi $t1, $t0, 1
	jal soma

	lw $t0, 16($s0)
	andi $t1, $t0, 1
	jal soma

	lw $t0, 20($s0)
	andi $t1, $t0, 1
	jal soma

	lw $t0, 24($s0)
	andi $t1, $t0, 1
	jal soma

	lw $t0, 28($s0)
	andi $t1, $t0, 1
	jal soma

	lw $t0, 32($s0)
	andi $t1, $t0, 1
	jal soma
		
	sw $t2, 48($s0) 
	sw $t3, 52($s0)
	
	li $v0, 4
	la $a0, resultado_par
	syscall
	
	li $v0, 1
	move $a0, $t2
	syscall
	
	li $v0, 4
	la $a0, resultado_impar
	syscall
	
	li $v0, 1
	move $a0, $t3
	syscall
	
	li, $v0, 10
	syscall	
	
soma:
	bgtz $t1, soma_impar
	add $t2, $t0, $t2
	jr $ra
	
soma_impar:	
	add $t3, $t0, $t3
	jr $ra
