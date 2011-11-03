#ifndef AAL_CPU_H
#define AAL_CPU_H

#include <list.h>

void cpu_enable_interrupt(void);
void cpu_disable_interrupt(void);
void cpu_halt(void);
void cpu_restore_interrupt(unsigned long);
void cpu_pause(void);

#define barrier()   asm volatile("" : : : "memory")

unsigned long cpu_disable_interrupt_save(void);

struct aal_mc_interrupt_handler {
	struct list_head list;
	void (*func)(void *);
	void *priv;
};
int aal_mc_register_interrupt_handler(int vector,
                                      struct aal_mc_interrupt_handler *h);
int aal_mc_unregister_interrupt_handler(int vector,
                                        struct aal_mc_interrupt_handler *h);

enum aal_mc_gv_type {
	AAL_GV_IKC = 1,
};

int aal_mc_get_vector(enum aal_mc_gv_type type);
int aal_mc_interrupt_host(int vector);

struct aal_mc_cpu_info {
	int ncpus;
	int *hw_ids;
	int *nodes;
};

struct aal_mc_cpu_info *aal_mc_get_cpu_info(void);
void aal_mc_boot_cpu(int cpuid, unsigned long pc);
int aal_mc_get_processor_id(void);
int aal_mc_get_hardware_processor_id(void);

void aal_mc_init_ap(void);

#endif

