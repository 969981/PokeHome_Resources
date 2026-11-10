/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d636c; name: FUN_.text__002d636c
 */


long FUN__text__002d636c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN__text__002f0ef0();
  uVar3 = FUN__text__002cea9c(uVar2,param_2 & 0xffffffff);
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x10;
  if ((uVar3 & 1) == 0) {
    lVar1 = param_1;
  }
  return lVar1;
}


