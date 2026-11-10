/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00165300; name: FUN_.text__00165300
 */


void FUN__text__00165300(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 0x1a0) != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      *(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar2 + 8) = 0;
      FUN__text__005f33f0(*(undefined8 *)(*(long *)(param_1 + 0x1a8) + lVar2));
      uVar3 = uVar3 + 1;
      lVar1 = *(long *)(param_1 + 0x1a8) + lVar2;
      lVar2 = lVar2 + 0x18;
      *(ushort *)(lVar1 + 0x12) = *(ushort *)(lVar1 + 0x12) & 0xfffe;
    } while (uVar3 < *(uint *)(param_1 + 0x1a0));
  }
  return;
}


