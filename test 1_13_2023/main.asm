includelib kernel32.lib
includelib msvcrt.lib
ExitProcess  proto	
GetStdHandle proto
Beep proto	
.data


.code 

	beepfor proc;
	mov r8, rcx
	mov r9, rdx

	mov r8, 0 
	loop_start:
	mov rcx, 400
	mov rdx, 100;
	push r8
	push r9
	call Beep
	pop r9	
	pop r8
	cmp r8, r9
	jz lp_end
	inc r8
	jmp loop_start
	lp_end:
	
	
	ret	
	



	beepfor endp	
	end