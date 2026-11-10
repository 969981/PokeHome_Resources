/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c1e80; name: FUN_.text__004c1e80
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004c1e80(long *param_1)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  void *__dest;
  long *plVar8;
  
  pvVar3 = (void *)param_1[2];
  *param_1 = _DAT_008a4430 + 0x10;
  uVar4 = (ulong)*(uint *)(param_1 + 3);
  if (*(uint *)(param_1 + 3) != 0) {
    __dest = pvVar3;
    do {
      while (*(long *)((long)__dest + 0x20) != 0) {
        __dest = (void *)((long)__dest + 0x30);
        if (__dest == (void *)((long)pvVar3 + uVar4 * 0x30)) goto LAB__text__004c1f14;
      }
      uVar4 = (ulong)((int)uVar4 - 1);
      pvVar6 = (void *)((long)pvVar3 + uVar4 * 0x30);
      if (__dest < pvVar6) {
        memmove(__dest,(void *)((long)__dest + 0x30),(ulong)(uint)((int)pvVar6 - (int)__dest));
        uVar4 = (ulong)((int)param_1[3] - 1);
        pvVar3 = (void *)param_1[2];
      }
      *(int *)(param_1 + 3) = (int)uVar4;
    } while (__dest != (void *)((long)pvVar3 + uVar4 * 0x30));
  }
LAB__text__004c1f14:
  if (pvVar3 != (void *)0x0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN__text__00400fc0(0);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  plVar7 = param_1 + 5;
  param_1 = param_1 + 4;
  plVar2 = (long *)*plVar7;
  while (plVar2 != (long *)0x0) {
    plVar8 = (long *)*plVar2;
    lVar5 = plVar2[2];
    plVar1 = plVar7;
    if ((long *)*plVar7 != plVar2) {
      plVar1 = (long *)0x0;
    }
    *plVar1 = (long)plVar8;
    if ((long *)*param_1 == plVar2) {
      *param_1 = 0;
    }
    *(undefined8 *)(lVar5 + 0x18) = 0;
    FUN__text__00446af0(plVar2);
    FUN__text__00445db0(plVar2);
    plVar2 = plVar8;
  }
  *param_1 = 0;
  *plVar7 = 0;
  return;
}


