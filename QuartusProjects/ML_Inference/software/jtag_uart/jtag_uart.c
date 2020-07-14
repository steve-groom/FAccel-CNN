// #include "sys/alt_stdio.h"
#include "system.h"
/*
: jtag_key? ( -- t/f ) JTAG_BASE @ dup $ff and __jtag_char ! $100 and 0<> swap ;
: jtag_send_check ( -- ) begin [ JTAG_BASE 1 + ] @ 32/ $ff and 4 > until ;
: jtag_wait_char ( -- char ) begin jtag_key? until __jtag_char @ swap ;
: jtag_send ( char -- ) swap jtag_send_check JTAG_BASE ! ;
macro emit ( char -- ) jtag_send endmacro
macro key ( -- char ) jtag_wait_char endmacro
macro key? ( -- t/f ) jtag_key? endmacro
*/

int jtag_char(void) {
	int ch;
	ch = IORD(JTAG_UART_BASE, 0);
	if (ch & (1 << 15))
		ch = (ch & 0xff) | 0x100;
	else
		ch = 0x0;
	return ch;
}
int jtag_send_busy() {
	int x;
	x = IORD(JTAG_UART_BASE, 1) >> 16;
	while (x > 4) {
		x = IORD(JTAG_UART_BASE, 1) >> 16;
	}
}
int jtag_wait_char(void) {
	int x;
	x = jtag_char();
	while ((x & 0x100)== 0x0)
		x = jtag_char();
	return (x & 0xff);
}

int jtag_send(int char) {
	jtag_send_busy();
	IOWR(JTAG_UART_BASE, 0, (ch & 0xff));
}

int main()
{
	int ch;

	while (1) {
		ch = jtag_wait_char();

	}
	return 0;
}
