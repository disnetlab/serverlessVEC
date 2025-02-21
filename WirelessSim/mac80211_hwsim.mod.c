#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xb3753869, "module_layout" },
	{ 0xededc3c3, "param_ops_bool" },
	{ 0x5ab5b891, "param_ops_int" },
	{ 0x900a5091, "simple_attr_release" },
	{ 0x17f56899, "simple_attr_write" },
	{ 0x646c9e14, "simple_attr_read" },
	{ 0x5c9f73e3, "generic_file_llseek" },
	{ 0x6bfc595c, "eth_validate_addr" },
	{ 0xaac657a4, "eth_mac_addr" },
	{ 0xc041bda5, "unregister_netdev" },
	{ 0x8f801d8d, "rhashtable_destroy" },
	{ 0x5461395b, "unregister_pernet_device" },
	{ 0x3c1a8564, "platform_driver_unregister" },
	{ 0xdf54a8f7, "netlink_unregister_notifier" },
	{ 0xaadc6c4, "free_netdev" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xebf1c21f, "register_netdevice" },
	{ 0x6b39b978, "dev_alloc_name" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xbd4ea856, "alloc_netdev_mqs" },
	{ 0x8d62ea07, "__class_create" },
	{ 0xa2fd1801, "genl_unregister_family" },
	{ 0xfa599bb2, "netlink_register_notifier" },
	{ 0xe2c901bc, "genl_register_family" },
	{ 0x33741a94, "__platform_driver_register" },
	{ 0xf5c2e7ba, "register_pernet_device" },
	{ 0x7abfca43, "rhashtable_init" },
	{ 0xcfc15f4b, "rht_bucket_nested_insert" },
	{ 0x1172d487, "rhashtable_insert_slow" },
	{ 0x921ec64f, "debugfs_create_file" },
	{ 0x40e30d71, "debugfs_create_dir" },
	{ 0x4429f6cf, "regulatory_hint" },
	{ 0x57dfe4a3, "ieee80211_register_hw" },
	{ 0x1ee7d3cd, "hrtimer_init" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x542b9402, "wiphy_apply_custom_regulatory" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd4583c9a, "device_bind_driver" },
	{ 0xc79de84d, "device_create" },
	{ 0x62952988, "ieee80211_alloc_hw_nm" },
	{ 0xffb7c514, "ida_free" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5850110, "printk" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0xf6a5dbc5, "skb_unlink" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x9d0eb539, "ieee80211_csa_finish" },
	{ 0xc4ecb109, "ieee80211_csa_is_complete" },
	{ 0xdc148689, "ieee80211_beacon_get_tim" },
	{ 0x792a74a2, "ether_setup" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6767f65a, "ieee80211_tx_status_irqsafe" },
	{ 0x9e91f0db, "ieee80211_probereq_get" },
	{ 0x4b605aa9, "ieee80211_get_tx_rates" },
	{ 0xceeb51d6, "__free_pages" },
	{ 0xd0f82e5e, "__skb_ext_put" },
	{ 0xb1ed7c62, "dst_release" },
	{ 0xcccd1cf7, "skb_add_rx_frag" },
	{ 0x69acdf38, "memcpy" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xce2398b8, "alloc_pages_current" },
	{ 0x2a18c74, "nf_conntrack_destroy" },
	{ 0x36e58bcd, "pv_ops" },
	{ 0x86887d37, "ieee80211_rx_irqsafe" },
	{ 0xe61019ca, "skb_copy" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb356c301, "class_destroy" },
	{ 0x8214ea7a, "ieee80211_free_hw" },
	{ 0x5c79622d, "device_unregister" },
	{ 0x84e2eacb, "device_release_driver" },
	{ 0xdb3b0f89, "ieee80211_unregister_hw" },
	{ 0x638c6409, "debugfs_remove_recursive" },
	{ 0x68b366b0, "netlink_broadcast" },
	{ 0x3dd1b99b, "init_net" },
	{ 0xa294efd6, "genl_notify" },
	{ 0x8b66c768, "ieee80211_remain_on_channel_expired" },
	{ 0x4e39b9d3, "skb_push" },
	{ 0xf2da47cc, "skb_copy_expand" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x744a1495, "skb_queue_tail" },
	{ 0x6d2fc5a6, "net_namespace_list" },
	{ 0x6f18b0e3, "nla_put_64bit" },
	{ 0x5833a7e0, "ieee80211_free_txskb" },
	{ 0x7ac14c46, "skb_dequeue" },
	{ 0x23518ab1, "netif_rx" },
	{ 0x21d43104, "skb_put" },
	{ 0xeaee8786, "__netdev_alloc_skb" },
	{ 0x62c7b5af, "kfree_skb" },
	{ 0xe4b60e38, "netlink_unicast" },
	{ 0x16697637, "__alloc_skb" },
	{ 0x18c692e, "skb_trim" },
	{ 0xf6807286, "genlmsg_put" },
	{ 0x754d539c, "strlen" },
	{ 0xfbdfc558, "hrtimer_start_range_ns" },
	{ 0xa0c6befa, "hrtimer_cancel" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xc136f0d8, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x84f3a3a9, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xbb9135e3, "ieee80211_scan_completed" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7f8191c5, "ieee80211_ready_on_channel" },
	{ 0xa1c079d8, "ieee80211_queue_delayed_work" },
	{ 0xa72c682d, "cfg80211_vendor_cmd_reply" },
	{ 0x91be7c4, "__cfg80211_alloc_reply_skb" },
	{ 0xd7391e51, "__cfg80211_send_event_skb" },
	{ 0x839e2ef7, "nla_put" },
	{ 0xb23a5b6e, "__cfg80211_alloc_event_skb" },
	{ 0x984ce9bd, "__nla_parse" },
	{ 0xdc21e866, "hrtimer_forward" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa3ddb06f, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0x6b7ae011, "ieee80211_radar_detected" },
	{ 0x99285c25, "simple_attr_open" },
	{ 0x4f1cd066, "__dynamic_dev_dbg" },
	{ 0xe7a02573, "ida_alloc_range" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x116c8d71, "consume_skb" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "cfg80211,mac80211");


MODULE_INFO(srcversion, "ED95876051F98B55736654B");
