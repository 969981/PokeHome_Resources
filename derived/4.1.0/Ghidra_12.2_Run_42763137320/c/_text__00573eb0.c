/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00573eb0; name: FUN_.text__00573eb0
 */


undefined8 FUN__text__00573eb0(long param_1,long param_2,void *param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  
  plVar5 = (long *)(param_1 + 0x10);
  do {
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      return 0;
    }
  } while (plVar5[1] != param_2);
  if (param_4 != 0) {
    uVar4 = *(uint *)(plVar5 + 4);
    do {
      if (uVar4 == 0) {
        uVar2 = FUN__text__00573950(plVar5);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        uVar4 = *(uint *)(plVar5 + 4);
      }
      uVar1 = 0x20000 - uVar4;
      if (param_4 <= 0x20000 - uVar4) {
        uVar1 = param_4;
      }
      memcpy((void *)(*(long *)(plVar5[2] + (ulong)*(uint *)(plVar5 + 3) * 8 + -8) + (ulong)uVar4),
             param_3,(ulong)uVar1);
      if (*(short *)((long)plVar5 + 0x7a) == 0) {
        iVar3 = *(int *)(plVar5 + 0xe);
        *(uint *)(plVar5 + 0xe) = iVar3 + uVar1;
        iVar3 = iVar3 + uVar1 + 0x3c;
      }
      else {
        iVar3 = *(int *)(plVar5 + 0xc);
        *(uint *)(plVar5 + 0xc) = iVar3 + uVar1;
        iVar3 = iVar3 + uVar1 + 0x2c;
      }
      *(int *)((long)plVar5 + 0x34) = iVar3;
      param_3 = (void *)((long)param_3 + (ulong)uVar1);
      uVar4 = 0;
      if (*(int *)(plVar5 + 4) + uVar1 != 0x20000) {
        uVar4 = *(int *)(plVar5 + 4) + uVar1;
      }
      param_4 = param_4 - uVar1;
      *(uint *)(plVar5 + 4) = uVar4;
    } while (param_4 != 0);
  }
  return 1;
}


