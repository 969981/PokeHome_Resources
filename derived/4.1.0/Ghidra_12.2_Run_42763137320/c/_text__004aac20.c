/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004aac20; name: FUN_.text__004aac20
 */


void FUN__text__004aac20(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *__dest;
  ulong uVar5;
  long *plVar6;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar5 = 0;
    do {
      lVar2 = *(long *)(param_1 + 8);
      plVar4 = *(long **)(lVar2 + uVar5 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          plVar6 = (long *)*plVar4;
          uVar3 = (ulong)*(uint *)(plVar4 + 3);
          puVar1 = (undefined8 *)plVar4[2];
          if (*(uint *)(plVar4 + 3) != 0) {
            __dest = puVar1;
            do {
              while (*(char *)((long)__dest + 0xc) != '\x01') {
                __dest = __dest + 3;
                if (__dest == puVar1 + uVar3 * 3) goto LAB__text__004aad1c;
              }
              FUN__text__00400fc0(*(undefined4 *)(__dest + 2),*__dest);
              uVar3 = (ulong)((int)plVar4[3] - 1);
              puVar1 = (undefined8 *)plVar4[2];
              if (__dest < puVar1 + uVar3 * 3) {
                memmove(__dest,__dest + 3,(ulong)(uint)((int)(puVar1 + uVar3 * 3) - (int)__dest));
                uVar3 = (ulong)((int)plVar4[3] - 1);
                puVar1 = (undefined8 *)plVar4[2];
              }
              *(int *)(plVar4 + 3) = (int)uVar3;
            } while (__dest != puVar1 + uVar3 * 3);
          }
LAB__text__004aad1c:
          if (puVar1 != (undefined8 *)0x0) {
            *(undefined4 *)(plVar4 + 3) = 0;
            FUN__text__00400fc0(0);
            plVar4[2] = 0;
            *(undefined4 *)((long)plVar4 + 0x1c) = 0;
          }
          FUN__text__00400fc0(0,plVar4);
          plVar4 = plVar6;
        } while (plVar6 != (long *)0x0);
        lVar2 = *(long *)(param_1 + 8);
      }
      *(undefined8 *)(lVar2 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x10));
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}


