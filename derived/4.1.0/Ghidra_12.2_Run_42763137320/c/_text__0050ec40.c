/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0050ec40; name: FUN_.text__0050ec40
 */


void FUN__text__0050ec40(long param_1)

{
  long *__dest;
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  uVar3 = (ulong)*(uint *)(param_1 + 0x60);
  plVar1 = *(long **)(param_1 + 0x58);
  if (*(uint *)(param_1 + 0x60) != 0) {
    plVar6 = plVar1;
    do {
      lVar7 = *plVar6;
      uVar2 = *(uint *)(lVar7 + 0x60);
      if (uVar2 != 0) {
        lVar5 = (ulong)uVar2 << 3;
        uVar4 = (ulong)(uVar2 - 1) << 3;
        __dest = *(long **)(lVar7 + 0x58);
        do {
          if (*__dest == param_1) {
            uVar2 = uVar2 - 1;
            if (__dest < *(long **)(lVar7 + 0x58) + uVar2) {
              memmove(__dest,__dest + 1,uVar4 & 0xfffffff8);
              uVar2 = *(int *)(lVar7 + 0x60) - 1;
            }
            *(uint *)(lVar7 + 0x60) = uVar2;
            *(undefined1 *)(lVar7 + 0x68) = 1;
            plVar1 = *(long **)(param_1 + 0x58);
            uVar3 = (ulong)*(uint *)(param_1 + 0x60);
            break;
          }
          __dest = __dest + 1;
          uVar4 = uVar4 - 8;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1 + uVar3);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0x68) = 1;
  if (plVar1 != (long *)0x0) {
    FUN__text__00400fc0(9);
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
  }
  if ((*(long *)(param_1 + 0x48) != 0) && (*(char *)(param_1 + 0x50) != '\0')) {
    FUN__text__00400fc0(9);
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}


