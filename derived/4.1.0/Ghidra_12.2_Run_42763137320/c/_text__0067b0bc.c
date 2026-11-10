/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0067b0bc; name: FUN_.text__0067b0bc
 */


undefined8 FUN__text__0067b0bc(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x988);
  if (uVar4 == 0xffffffff) {
    uVar4 = *(uint *)(param_1 + 0x9a0);
  }
  lVar3 = *(long *)(param_1 + 0x908);
  if (lVar3 != 0) {
    do {
      if ((ulong)(*(long *)(param_1 + 0x8f0) + lVar3) <= (ulong)uVar4) {
        return 0;
      }
      lVar3 = *(long *)(*(long *)(param_1 + 0x8c0) + 0x98);
      uVar2 = FUN__text__0067b054(param_1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(long *)(param_1 + 0x8c0) = lVar3;
      puVar1 = (undefined8 *)(param_1 + 0x8c8);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0x90);
      }
      *puVar1 = 0;
      lVar3 = *(long *)(param_1 + 0x908) + -1;
      *(long *)(param_1 + 0x908) = lVar3;
    } while (lVar3 != 0);
  }
  return 0;
}


