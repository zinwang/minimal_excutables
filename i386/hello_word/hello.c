char *str = "h3110 w0r1d!!\n";

void print(){
	__asm__("movl $14, %%edx \n\t"
		"movl %0, %%ecx \n\t"
		"movl $0, %%ebx \n\t"
		"movl $4, %%eax \n\t"
		"int $0x80 \n\t"
		::"r" (str):"edx","ecx","ebx");

}


void exit(){
	__asm__("movl $42, %ebx \n\t"
		"movl $1, %eax \n\t"
		"int $0x80 \n\t");
}

void not_main(){
	print();
	exit();
}
