ENTRY(_start)

SECTIONS{
	. = 0x08048000 + SIZEOF_HEADERS;
	tiny_hello : {*(.text) *(.data) *(.rodata)}
	/DISCARD/ : {*(.comment) *(.note.gnu.property)} 
	

}
