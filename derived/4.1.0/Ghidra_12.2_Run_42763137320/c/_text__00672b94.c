/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00672b94; name: FUN_.text__00672b94
 */


undefined8 FUN__text__00672b94(long param_1)

{
  long lVar1;
  ushort uVar2;
  
  lVar1 = *(long *)(param_1 + 0x800);
  *(long *)(param_1 + 0x14f8) = lVar1;
  if ((lVar1 == 0) && (*(long *)(param_1 + 0xd38) == 0)) {
    uVar2 = *(ushort *)(param_1 + 0x15a4) & 0xfdff;
  }
  else {
    if ((*(ushort *)(param_1 + 0x15a4) >> 10 & 1) != 0) {
      FUN__text__006783e4(*(undefined8 *)(param_1 + 0x14f0));
      lVar1 = *(long *)(param_1 + 0x14f8);
    }
    if (lVar1 == 0) {
      lVar1 = FUN__text__00678404(*(undefined8 *)(param_1 + 0xd38));
    }
    else {
      lVar1 = FUN__text__00659a28(0x718ef6);
    }
    *(long *)(param_1 + 0x14f0) = lVar1;
    uVar2 = *(ushort *)(param_1 + 0x15a4) & 0xf800 |
            *(ushort *)(param_1 + 0x15a4) & 0x3ff | (ushort)(lVar1 != 0) << 10;
    *(ushort *)(param_1 + 0x15a4) = uVar2;
    if (lVar1 == 0) {
      return 0x1b;
    }
    uVar2 = uVar2 | 0x200;
  }
  *(ushort *)(param_1 + 0x15a4) = uVar2;
  return 0;
}


