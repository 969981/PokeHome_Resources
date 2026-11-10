/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003e9ef0; name: FUN_.text__003e9ef0
 */


undefined4 FUN__text__003e9ef0(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_2 < *(uint *)(param_1 + 0x2b8)) {
    uVar1 = FUN__text__003eb460(*(long *)(param_1 + 0x298) + (ulong)param_2 * 0x40);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN__text__003eb744(*(long *)(param_1 + 0x298) + (ulong)param_2 * 0x40);
      uVar3 = *(undefined4 *)(lVar2 + 0x20);
    }
  }
  return uVar3;
}


