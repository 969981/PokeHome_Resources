/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a9ef0; name: FUN_.text__004a9ef0
 */


void FUN__text__004a9ef0(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *__dest;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  uVar1 = *(uint *)(param_1 + 0x98);
  if (uVar1 != 0) {
    uVar3 = 0;
    if (uVar1 != 0) {
      uVar3 = param_2 / uVar1;
    }
    uVar1 = param_2 - uVar3 * uVar1;
    plVar6 = *(long **)(*(long *)(param_1 + 0x90) + (ulong)uVar1 * 8);
    if (plVar6 != (long *)0x0) {
      if (*(uint *)(plVar6 + 1) == param_2) {
        plVar7 = (long *)0x0;
      }
      else {
        do {
          plVar7 = plVar6;
          plVar6 = (long *)*plVar7;
          if (plVar6 == (long *)0x0) goto LAB__text__004aa018;
        } while (*(uint *)(plVar6 + 1) != param_2);
      }
      iVar2 = (int)plVar6[4] + -1;
      *(int *)(plVar6 + 4) = iVar2;
      if (iVar2 == 0) {
        uVar4 = (ulong)*(uint *)(plVar6 + 3);
        if (*(uint *)(plVar6 + 3) != 0) {
          puVar5 = (undefined8 *)plVar6[2];
          __dest = puVar5;
          do {
            while (*(char *)((long)__dest + 0xc) == '\x01') {
              FUN__text__00400fc0(*(undefined4 *)(__dest + 2),*__dest);
              uVar4 = (ulong)((int)plVar6[3] - 1);
              puVar5 = (undefined8 *)plVar6[2];
              if (__dest < puVar5 + uVar4 * 3) {
                memmove(__dest,__dest + 3,(ulong)(uint)((int)(puVar5 + uVar4 * 3) - (int)__dest));
                uVar4 = (ulong)((int)plVar6[3] - 1);
                puVar5 = (undefined8 *)plVar6[2];
              }
              *(int *)(plVar6 + 3) = (int)uVar4;
              if (__dest == puVar5 + uVar4 * 3) goto LAB__text__004a9ffc;
            }
            __dest = __dest + 3;
          } while (__dest != puVar5 + uVar4 * 3);
LAB__text__004a9ffc:
          if ((int)plVar6[4] != 0) goto LAB__text__004aa018;
        }
        FUN__text__004ad290(param_1 + 0x88,uVar1,plVar6,plVar7);
      }
    }
  }
LAB__text__004aa018:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return;
}


