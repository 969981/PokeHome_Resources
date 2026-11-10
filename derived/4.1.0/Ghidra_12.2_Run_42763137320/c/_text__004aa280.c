/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aa280; name: FUN_.text__004aa280
 */


void FUN__text__004aa280(long param_1,uint param_2,long *param_3)

{
  void *__dest;
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *__dest_00;
  long lVar10;
  long lVar11;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  uVar1 = *(uint *)(param_1 + 0x98);
  if (uVar1 != 0) {
    uVar4 = 0;
    if (uVar1 != 0) {
      uVar4 = param_2 / uVar1;
    }
    uVar1 = param_2 - uVar4 * uVar1;
    plVar8 = *(long **)(*(long *)(param_1 + 0x90) + (ulong)uVar1 * 8);
    if (plVar8 != (long *)0x0) {
      if (*(uint *)(plVar8 + 1) == param_2) {
        plVar9 = (long *)0x0;
      }
      else {
        do {
          plVar9 = plVar8;
          plVar8 = (long *)*plVar9;
          if (plVar8 == (long *)0x0) goto LAB__text__004aa45c;
        } while (*(uint *)(plVar8 + 1) != param_2);
      }
      if (*(uint *)(plVar8 + 3) != 0) {
        lVar10 = 0;
        lVar11 = plVar8[2];
        do {
          if (*(long *)(lVar11 + lVar10) == param_3[1]) {
            __dest = (void *)(lVar11 + lVar10);
            sVar2 = *(short *)((long)__dest + 0xe);
            if (sVar2 != 0) {
              *(short *)((long)__dest + 0xe) = sVar2 + -1;
              if ((sVar2 == 1) && (*(char *)((long)__dest + 0xd) != '\0')) {
                if (*(char *)((long)__dest + 0xc) == '\x01') {
                  FUN__text__00400fc0(*(undefined4 *)((long)__dest + 0x10));
                }
                uVar4 = (int)plVar8[3] - 1;
                pvVar6 = (void *)(plVar8[2] + (ulong)uVar4 * 0x18);
                if (__dest < pvVar6) {
                  memmove(__dest,(void *)((long)__dest + 0x18),
                          (ulong)(uint)(((int)pvVar6 - (int)lVar11) - (int)lVar10));
                  uVar4 = (int)plVar8[3] - 1;
                }
                *(uint *)(plVar8 + 3) = uVar4;
              }
              break;
            }
          }
          lVar10 = lVar10 + 0x18;
        } while ((ulong)*(uint *)(plVar8 + 3) * 0x18 != lVar10);
      }
      iVar3 = (int)plVar8[4] + -1;
      *(int *)(plVar8 + 4) = iVar3;
      if (iVar3 == 0) {
        uVar5 = (ulong)*(uint *)(plVar8 + 3);
        if (*(uint *)(plVar8 + 3) != 0) {
          puVar7 = (undefined8 *)plVar8[2];
          __dest_00 = puVar7;
          do {
            while (*(char *)((long)__dest_00 + 0xc) == '\x01') {
              FUN__text__00400fc0(*(undefined4 *)(__dest_00 + 2),*__dest_00);
              uVar5 = (ulong)((int)plVar8[3] - 1);
              puVar7 = (undefined8 *)plVar8[2];
              if (__dest_00 < puVar7 + uVar5 * 3) {
                memmove(__dest_00,__dest_00 + 3,
                        (ulong)(uint)((int)(puVar7 + uVar5 * 3) - (int)__dest_00));
                uVar5 = (ulong)((int)plVar8[3] - 1);
                puVar7 = (undefined8 *)plVar8[2];
              }
              *(int *)(plVar8 + 3) = (int)uVar5;
              if (__dest_00 == puVar7 + uVar5 * 3) goto LAB__text__004aa440;
            }
            __dest_00 = __dest_00 + 3;
          } while (__dest_00 != puVar7 + uVar5 * 3);
LAB__text__004aa440:
          if ((int)plVar8[4] != 0) goto LAB__text__004aa45c;
        }
        FUN__text__004ad290(param_1 + 0x88,uVar1,plVar8,plVar9);
      }
    }
  }
LAB__text__004aa45c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  if (*param_3 == 0) {
    return;
  }
  FUN__text__004a1bc0(*param_3,0);
  return;
}


