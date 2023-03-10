#ifndef _INITIALIZATION_UTILS_H_
#define _INITIALIZATION_UTILS_H_

#define GICR_WAKER 0x0014
#define GICR_SIZE 0x20000
#define GICR_WAKER_CURRENT_CPU FixedPcdGet64(PcdGicRedistributorsBase) + GICR_WAKER

#define GIC_WAKER_PROCESSORSLEEP 2

VOID EarlyInitialization(VOID);

#endif /* _INITIALIZATION_UTILS_H_ */