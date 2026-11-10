/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004a20f0; name: FUN_.text__004a20f0
 */


void FUN__text__004a20f0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *__dest;
  ulong uVar10;
  
  if (((*(byte *)(param_2 + 0x68) >> 2 & 1) != 0) && (*(long *)(param_2 + 0x20) != 0)) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x68));
    if (*(int *)(param_2 + 0x34) != 0) {
      uVar10 = 0;
      do {
        uVar2 = *(uint *)(*(long *)(param_2 + 0x20) + uVar10 * 0xc);
        if ((uVar2 != 0) && (uVar1 = *(uint *)(param_1 + 0x98), uVar1 != 0)) {
          uVar4 = 0;
          if (uVar1 != 0) {
            uVar4 = uVar2 / uVar1;
          }
          uVar7 = (ulong)(uVar2 - uVar4 * uVar1);
          plVar8 = *(long **)(*(long *)(param_1 + 0x90) + uVar7 * 8);
          if (plVar8 != (long *)0x0) {
            if (*(uint *)(plVar8 + 1) == uVar2) {
              plVar9 = (long *)0x0;
            }
            else {
              do {
                plVar9 = plVar8;
                plVar8 = (long *)*plVar9;
                if (plVar8 == (long *)0x0) goto LAB__text__004a2170;
              } while (*(uint *)(plVar8 + 1) != uVar2);
            }
            iVar3 = (int)plVar8[4] + -1;
            *(int *)(plVar8 + 4) = iVar3;
            if (iVar3 == 0) {
              uVar5 = (ulong)*(uint *)(plVar8 + 3);
              if (*(uint *)(plVar8 + 3) != 0) {
                puVar6 = (undefined8 *)plVar8[2];
                __dest = puVar6;
                do {
                  while (*(char *)((long)__dest + 0xc) != '\x01') {
                    __dest = __dest + 3;
                    if (__dest == puVar6 + uVar5 * 3) goto LAB__text__004a226c;
                  }
                  FUN__text__00400fc0(*(undefined4 *)(__dest + 2),*__dest);
                  uVar5 = (ulong)((int)plVar8[3] - 1);
                  puVar6 = (undefined8 *)plVar8[2];
                  if (__dest < puVar6 + uVar5 * 3) {
                    memmove(__dest,__dest + 3,(ulong)(uint)((int)(puVar6 + uVar5 * 3) - (int)__dest)
                           );
                    uVar5 = (ulong)((int)plVar8[3] - 1);
                    puVar6 = (undefined8 *)plVar8[2];
                  }
                  *(int *)(plVar8 + 3) = (int)uVar5;
                } while (__dest != puVar6 + uVar5 * 3);
LAB__text__004a226c:
                if ((int)plVar8[4] != 0) goto LAB__text__004a2170;
              }
              FUN__text__004ad290(param_1 + 0x88,uVar7,plVar8,plVar9);
            }
          }
        }
LAB__text__004a2170:
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(uint *)(param_2 + 0x34));
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
    *(byte *)(param_2 + 0x68) = *(byte *)(param_2 + 0x68) & 0xfb;
  }
  return;
}


