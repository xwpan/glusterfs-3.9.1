cmd_init.o = gcc -Wp,-MD,./.init.o.d.tmp  -m64 -pthread  -march=native -DRTE_MACHINE_CPUFLAG_SSE -DRTE_MACHINE_CPUFLAG_SSE2 -DRTE_MACHINE_CPUFLAG_SSE3 -DRTE_MACHINE_CPUFLAG_SSSE3 -DRTE_MACHINE_CPUFLAG_SSE4_1 -DRTE_MACHINE_CPUFLAG_SSE4_2 -DRTE_MACHINE_CPUFLAG_AES -DRTE_MACHINE_CPUFLAG_PCLMULQDQ -DRTE_MACHINE_CPUFLAG_AVX -DRTE_COMPILE_TIME_CPUFLAGS=RTE_CPUFLAG_SSE,RTE_CPUFLAG_SSE2,RTE_CPUFLAG_SSE3,RTE_CPUFLAG_SSSE3,RTE_CPUFLAG_SSE4_1,RTE_CPUFLAG_SSE4_2,RTE_CPUFLAG_AES,RTE_CPUFLAG_PCLMULQDQ,RTE_CPUFLAG_AVX  -I/home/dcslab/pxw/glusterfs-3.9.1/mtcp/dpdk-16.11/examples/quota_watermark/qw/quota_watermark/qw/x86_64-native-linuxapp-gcc/include -I/home/dcslab/pxw/glusterfs-3.9.1/mtcp/dpdk-16.11/x86_64-native-linuxapp-gcc/include -include /home/dcslab/pxw/glusterfs-3.9.1/mtcp/dpdk-16.11/x86_64-native-linuxapp-gcc/include/rte_config.h -O3 -DQW_SOFTWARE_FC -W -Wall -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations -Wold-style-definition -Wpointer-arith -Wcast-align -Wnested-externs -Wcast-qual -Wformat-nonliteral -Wformat-security -Wundef -Wwrite-strings    -o init.o -c /home/dcslab/pxw/glusterfs-3.9.1/mtcp/dpdk-16.11/examples/quota_watermark/qw/init.c 