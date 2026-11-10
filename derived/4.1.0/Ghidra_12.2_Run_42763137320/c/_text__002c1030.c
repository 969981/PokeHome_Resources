/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c1030; name: FUN_.text__002c1030
 */


uint FUN__text__002c1030(long param_1)

{
  uint uVar1;
  long lVar2;
  short *psVar3;
  short *psVar4;
  
  lVar2 = 0x388;
  uVar1 = (uint)(*(short *)(param_1 + 0x136) != 0);
  psVar3 = (short *)(param_1 + 0x136);
  psVar4 = (short *)(param_1 + 0x1e6);
  do {
    lVar2 = lVar2 + -2;
    if (psVar3[0x2c] != 0) {
      uVar1 = uVar1 + 1;
    }
    if (*psVar4 != 0) {
      uVar1 = uVar1 + 1;
    }
    psVar3 = psVar4;
    psVar4 = psVar4 + 0x58;
  } while (lVar2 != 0);
  return uVar1;
}


