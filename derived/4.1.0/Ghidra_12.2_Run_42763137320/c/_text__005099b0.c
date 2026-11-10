/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005099b0; name: FUN_.text__005099b0
 */


void FUN__text__005099b0(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x48) = 0;
    FUN__text__00400fc0(9);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    FUN__text__00400fc0(9);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
    FUN__text__00400fc0(9);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  FUN__text__00507b30(param_1 + 0x78);
  plVar1 = *(long **)(param_1 + 0x108);
  uVar2 = (ulong)*(uint *)(param_1 + 0x110);
  if (*(uint *)(param_1 + 0x110) != 0) {
    plVar4 = plVar1;
    do {
      lVar3 = *plVar4;
      if (lVar3 != 0) {
        FUN__text__00507a78(lVar3);
        FUN__text__00400fc0(0xb,lVar3);
        plVar1 = *(long **)(param_1 + 0x108);
        uVar2 = (ulong)*(uint *)(param_1 + 0x110);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1 + uVar2);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x110) = 0;
    FUN__text__00400fc0(9);
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  return;
}


