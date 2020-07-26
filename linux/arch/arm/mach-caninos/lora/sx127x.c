#include <linux/module.h>

static int __init sx127x_init(void)
{
	pr_err("YEAAAAAAAAAH \o/\n");
	return 0;
}

static void __exit sx127x_exit(void)
{
}

module_init(sx127x_init);
module_exit(sx127x_exit);

MODULE_LICENSE("GPL");
