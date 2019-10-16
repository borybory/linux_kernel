#include <linux/kernel.h>

asmlinkage long sys_mycall(void) {
	printk("System Call Exmaple!\n");
	return 0;
}
