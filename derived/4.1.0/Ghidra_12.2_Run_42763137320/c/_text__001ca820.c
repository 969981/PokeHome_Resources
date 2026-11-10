/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001ca820; name: FUN_.text__001ca820
 */


undefined8 FUN__text__001ca820(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar1 = *(long *)(lVar4 + 0x2d0);
  if (lVar1 != 0) {
    uVar2 = FUN__text__003c7ec0(lVar1,param_1 + 0x4a8);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    lVar1 = *(long *)(lVar4 + 0x2d0);
    if (lVar1 != 0) {
      uVar3 = FUN__text__003c7ec0(lVar1,param_1 + 0x4b0);
      return uVar3;
    }
  }
  return 1;
}


