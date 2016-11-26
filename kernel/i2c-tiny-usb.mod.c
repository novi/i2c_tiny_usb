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
};

static const struct modversion_info ____versions[]
__attribute_used__
__attribute__((section("__versions"))) = {
	{ 0x89fac617, "struct_module" },
	{ 0x89b301d4, "param_get_int" },
	{ 0x98bd6f46, "param_set_int" },
	{ 0xdf3d84b8, "i2c_add_adapter" },
	{ 0x25da070, "snprintf" },
	{ 0xd7402074, "usb_get_dev" },
	{ 0xc5767ca0, "kmem_cache_zalloc" },
	{ 0xc7552a84, "malloc_sizes" },
	{ 0xfbcc22bb, "usb_register_driver" },
	{ 0x1b7d4074, "printk" },
	{ 0x4dc3f663, "dev_driver_string" },
	{ 0x5a47c89c, "usb_control_msg" },
	{ 0x3238aa7c, "i2c_del_adapter" },
	{ 0x37a0cba, "kfree" },
	{ 0xf34396f0, "usb_put_dev" },
	{ 0x93d45caf, "usb_deregister" },
};

static const char __module_depends[]
__attribute_used__
__attribute__((section(".modinfo"))) =
"depends=i2c-core,usbcore";

MODULE_ALIAS("usb:v0403pC631d*dc*dsc*dp*ic*isc*ip*");

MODULE_INFO(srcversion, "A582467E3C5C32809902A69");
