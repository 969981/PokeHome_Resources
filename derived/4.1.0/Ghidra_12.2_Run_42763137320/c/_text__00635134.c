/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00635134; name: FUN_.text__00635134
 */


uint FUN__text__00635134(long param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = FUN__text__006351c4();
  if (((int)param_2 < 6) &&
     (uVar2 = FUN__text__00622cc0(*(undefined8 *)(param_1 + 0x2f0)),
     ((uVar2 & 0xff) >> (ulong)(param_2 & 0x1f) & 1) != 0)) {
    uVar4 = 3;
  }
  else {
    uVar3 = FUN__text__0063152c(param_1,param_2);
    uVar2 = 2;
    if (uVar3 < 0x1a) {
      uVar2 = (uint)(0x13 < uVar3);
    }
    uVar4 = 3;
    if (uVar3 < 0x1f) {
      uVar4 = uVar2;
    }
  }
  uVar4 = iVar1 + uVar4;
  if (9 < uVar4) {
    uVar4 = 10;
  }
  return uVar4;
}


