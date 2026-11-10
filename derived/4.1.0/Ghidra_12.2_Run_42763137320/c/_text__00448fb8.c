/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00448fb8; name: FUN_.text__00448fb8
 */


undefined8 FUN__text__00448fb8(undefined4 param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint in_w8;
  long *plVar3;
  long lVar4;
  
  uVar1 = 0;
  if (in_w8 != 0) {
    uVar1 = (uint)param_3 / in_w8;
  }
  plVar3 = (long *)(*(long *)(param_2 + 0x30) + (ulong)((uint)param_3 - uVar1 * in_w8) * 8);
  do {
    plVar3 = (long *)*plVar3;
    if (plVar3 == (long *)0x0) {
      return 2;
    }
  } while (plVar3[1] != param_3);
  lVar4 = *(long *)(plVar3[2] + 8);
  if (lVar4 == 0) {
    uVar2 = 2;
    lVar4 = *(long *)(plVar3[2] + 0x20);
  }
  else {
    *(undefined4 *)(lVar4 + 0x78) = param_1;
    uVar2 = 1;
    *(byte *)(lVar4 + 0x7c) = *(byte *)(lVar4 + 0x7c) | 1;
    lVar4 = *(long *)(plVar3[2] + 0x20);
  }
  if (lVar4 != 0) {
    FUN__text__0047d638(lVar4);
    uVar2 = 1;
  }
  return uVar2;
}


