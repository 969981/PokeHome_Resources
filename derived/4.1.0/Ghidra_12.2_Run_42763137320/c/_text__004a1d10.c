/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a1d10; name: FUN_.text__004a1d10
 */


void FUN__text__004a1d10(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  void *__dest;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *__dest_00;
  
  if (*(long *)(param_2 + 0x20) == 0) {
    return;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  iVar3 = *(int *)(param_2 + 0x34);
  if (iVar3 != 0) {
    do {
      *(uint *)(param_2 + 0x34) = iVar3 - 1U;
      uVar5 = *(uint *)(*(long *)(param_2 + 0x20) + (ulong)(iVar3 - 1U) * 0xc);
      if ((uVar5 != 0) && (uVar1 = *(uint *)(param_1 + 0x98), uVar1 != 0)) {
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = uVar5 / uVar1;
        }
        uVar9 = (ulong)(uVar5 - uVar2 * uVar1);
        plVar10 = *(long **)(*(long *)(param_1 + 0x90) + uVar9 * 8);
        if (plVar10 != (long *)0x0) {
          if (*(uint *)(plVar10 + 1) == uVar5) {
            plVar11 = (long *)0x0;
          }
          else {
            do {
              plVar11 = plVar10;
              plVar10 = (long *)*plVar11;
              if (plVar10 == (long *)0x0) goto LAB__text__004a1d74;
            } while (*(uint *)(plVar10 + 1) != uVar5);
          }
          uVar5 = *(uint *)(plVar10 + 3);
          uVar4 = (ulong)uVar5;
          if (uVar5 == 0) {
            iVar3 = (int)plVar10[4] + -1;
            *(int *)(plVar10 + 4) = iVar3;
            if (iVar3 == 0) goto LAB__text__004a1d60;
          }
          else {
            uVar5 = uVar5 - 1;
            uVar7 = (ulong)uVar5 * 0x18;
            lVar8 = uVar4 * 0x18;
            __dest = (void *)plVar10[2];
            do {
              if ((*(char *)((long)__dest + 0xc) == '\x02') &&
                 (*(long *)((long)__dest + 0x10) == param_2)) {
                if (__dest < (void *)(plVar10[2] + (ulong)uVar5 * 0x18)) {
                  memmove(__dest,(void *)((long)__dest + 0x18),uVar7 & 0xffffffff);
                  uVar5 = (int)plVar10[3] - 1;
                }
                *(uint *)(plVar10 + 3) = uVar5;
                uVar4 = (ulong)uVar5;
                break;
              }
              __dest = (void *)((long)__dest + 0x18);
              uVar7 = uVar7 - 0x18;
              lVar8 = lVar8 + -0x18;
            } while (lVar8 != 0);
            iVar3 = (int)plVar10[4] + -1;
            *(int *)(plVar10 + 4) = iVar3;
            if (iVar3 == 0) {
              if ((int)uVar4 != 0) {
                puVar6 = (undefined8 *)plVar10[2];
                __dest_00 = puVar6;
                do {
                  while (*(char *)((long)__dest_00 + 0xc) != '\x01') {
                    __dest_00 = __dest_00 + 3;
                    if (__dest_00 == puVar6 + uVar4 * 3) goto LAB__text__004a1edc;
                  }
                  FUN__text__00400fc0(*(undefined4 *)(__dest_00 + 2),*__dest_00);
                  uVar4 = (ulong)((int)plVar10[3] - 1);
                  puVar6 = (undefined8 *)plVar10[2];
                  if (__dest_00 < puVar6 + uVar4 * 3) {
                    memmove(__dest_00,__dest_00 + 3,
                            (ulong)(uint)((int)(puVar6 + uVar4 * 3) - (int)__dest_00));
                    uVar4 = (ulong)((int)plVar10[3] - 1);
                    puVar6 = (undefined8 *)plVar10[2];
                  }
                  *(int *)(plVar10 + 3) = (int)uVar4;
                } while (__dest_00 != puVar6 + uVar4 * 3);
LAB__text__004a1edc:
                if ((int)plVar10[4] != 0) goto LAB__text__004a1d74;
              }
LAB__text__004a1d60:
              FUN__text__004ad290(param_1 + 0x88,uVar9,plVar10,plVar11);
            }
          }
        }
      }
LAB__text__004a1d74:
      iVar3 = *(int *)(param_2 + 0x34);
    } while (iVar3 != 0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return;
}


