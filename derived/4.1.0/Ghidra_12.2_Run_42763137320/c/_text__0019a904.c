/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0019a904; name: FUN_.text__0019a904
 */


void FUN__text__0019a904(undefined8 *param_1,void *param_2,void *param_3)

{
  void *pvVar1;
  long lVar2;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  
  __n = (long)param_3 - (long)param_2;
  uVar5 = param_1[10];
  uVar4 = ((long)__n >> 2) * 0x6db6db6db6db6db7;
  if (uVar5 < uVar4) {
    if ((ulong)param_1[1] < uVar4) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    pvVar1 = (void *)(**(code **)(*(long *)*param_1 + 0x10))((long *)*param_1,__n,4);
    if (param_1[8] != 0) {
      param_1[9] = 0;
      (**(code **)(*(long *)*param_1 + 0x18))((long *)*param_1,param_1[8],uVar5 * 0x1c,4);
    }
    lVar2 = 0;
    param_1[9] = 0;
    param_1[10] = uVar4;
    param_1[8] = pvVar1;
    if (((param_2 == (void *)0x0) || (param_2 == param_3)) || (pvVar1 == (void *)0x0)) {
      pvVar3 = pvVar1;
    }
    else {
      memmove(pvVar1,param_2,__n);
      lVar2 = param_1[9];
      pvVar3 = (void *)((long)pvVar1 + ((long)__n >> 2) * 4);
    }
    param_1[9] = lVar2 + ((long)pvVar3 - (long)pvVar1 >> 2) * 0x6db6db6db6db6db7;
    return;
  }
  pvVar1 = (void *)param_1[8];
  uVar5 = param_1[9];
  if (uVar4 < uVar5 || uVar4 - uVar5 == 0) {
    if (((param_3 == param_2) || (param_2 == (void *)0x0)) || (pvVar1 == (void *)0x0))
    goto LAB__text__0019aa74;
  }
  else {
    if (uVar5 != 0) {
      if ((param_2 != (void *)0x0) && (pvVar1 != (void *)0x0)) {
        memmove(pvVar1,param_2,uVar5 * 0x1c);
      }
      param_2 = (void *)((long)param_2 + uVar5 * 0x1c);
      pvVar1 = (void *)((long)pvVar1 + uVar5 * 0x1c);
    }
    if ((pvVar1 == (void *)0x0) || (param_2 == (void *)0x0)) goto LAB__text__0019aa74;
    __n = (uVar4 - uVar5) * 0x1c;
  }
  memmove(pvVar1,param_2,__n);
LAB__text__0019aa74:
  param_1[9] = uVar4;
  return;
}


