#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x14522340, "module_layout" },
	{ 0x609f1c7e, "synchronize_net" },
	{ 0x7ca65271, "single_open" },
	{ 0x950ffff2, "cpu_online_mask" },
	{ 0xc1d878fa, "single_release" },
	{ 0x77e93f6f, "seq_printf" },
	{ 0xac72743f, "kallsyms_on_each_symbol" },
	{ 0x55f2580b, "__alloc_percpu" },
	{ 0xb72ec8a3, "seq_read" },
	{ 0x2141f740, "proc_net_fops_create" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x9629486a, "per_cpu__cpu_number" },
	{ 0xea147363, "printk" },
	{ 0xf3da885e, "proc_net_remove" },
	{ 0xb4390f9a, "mcount" },
	{ 0x2a362011, "seq_putc" },
	{ 0xd5ad92fc, "ipv4_specific" },
	{ 0x1c740bd6, "init_net" },
	{ 0x758e2721, "inet_stream_ops" },
	{ 0x6f83b81a, "inet_getname" },
	{ 0x581b3a8f, "tcp_v4_syn_recv_sock" },
	{ 0x32047ad5, "__per_cpu_offset" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x8b9200fd, "lookup_address" },
	{ 0x5ca8e4f6, "seq_lseek" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "CB1A4580A3295FA6F74AEE2");

static const struct rheldata _rheldata __used
__attribute__((section(".rheldata"))) = {
	.rhel_major = 6,
	.rhel_minor = 5,
};
