/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00217220; name: FUN_.text__00217220
 */


byte FUN__text__00217220(long param_1,uint param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = FUN__text__002155e0();
  bVar1 = 0;
  if ((param_2 < 0xe) && ((uVar3 & 1) != 0)) {
    uVar2 = FUN__text__002156ec(param_1);
    if (uVar2 <= param_3) {
      return 0;
    }
    bVar1 = *(byte *)(*(long *)(param_1 + 0x90) + (ulong)param_2 * 0x960 + (ulong)param_3 * 0x50 +
                     0x17) >> 1 & 1;
  }
  return bVar1;
}


