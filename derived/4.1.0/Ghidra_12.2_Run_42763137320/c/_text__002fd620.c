/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002fd620; name: FUN_.text__002fd620
 */


void FUN__text__002fd620(long *param_1)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  void *__src;
  void *__dest;
  void *pvVar5;
  void *pvVar6;
  
  lVar3 = *param_1;
  lVar2 = param_1[1] - lVar3;
  uVar4 = lVar2 >> 0xc;
  if ((ulong)(param_1[2] - lVar3 >> 0xc) <= uVar4) {
    return;
  }
  if (param_1[1] == lVar3) {
LAB__text__002fd73c:
    pvVar1 = (void *)0x0;
    pvVar5 = (void *)(uVar4 << 0xc);
    pvVar6 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src == pvVar6) {
LAB__text__002fd750:
      lVar2 = param_1[2];
      *param_1 = (long)pvVar5;
      param_1[1] = (long)pvVar5;
      param_1[2] = (long)pvVar5;
      goto joined_r0x002fd760;
    }
  }
  else {
    pvVar1 = (void *)(**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],lVar2,0x1000);
    if (pvVar1 == (void *)0x0) {
      (**(code **)(*(long *)param_1[3] + 0xb8))();
      goto LAB__text__002fd73c;
    }
    pvVar5 = (void *)((long)pvVar1 + uVar4 * 0x1000);
    pvVar6 = (void *)*param_1;
    __src = (void *)param_1[1];
    if (__src == pvVar6) goto LAB__text__002fd750;
  }
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  lVar2 = *(long *)(uVar4 + 0x98);
  __dest = pvVar5;
  do {
    if (lVar2 == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10(pvVar1);
    }
    __src = (void *)((long)__src + -0x1000);
    __dest = (void *)((long)__dest + -0x1000);
    *(long *)((uVar4 | 0x18) + lVar2 * 8) = param_1[3];
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    pvVar1 = memcpy(__dest,__src,0x1000);
    lVar2 = *(long *)(uVar4 + 0x98) + -1;
    *(long *)(uVar4 + 0x98) = lVar2;
  } while (__src != pvVar6);
  __src = (void *)*param_1;
  lVar2 = param_1[2];
  *param_1 = (long)__dest;
  param_1[1] = (long)pvVar5;
  param_1[2] = (long)pvVar5;
joined_r0x002fd760:
  if (__src == (void *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002fd728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],__src,lVar2 - (long)__src,0x1000);
  return;
}


