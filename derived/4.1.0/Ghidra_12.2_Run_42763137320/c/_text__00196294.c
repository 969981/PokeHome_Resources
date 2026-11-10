/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00196294; name: FUN_.text__00196294
 */


undefined8 FUN__text__00196294(long *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  
  if ((*param_1 == 0) || (uVar3 = FUN__text__00306588(), (uVar3 & 1) != 0)) {
    return 0;
  }
  uVar3 = FUN__text__0016b200(param_2);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  if (param_2 == 0) {
    uVar1 = FUN__text__003065f8(*param_1);
    uVar2 = FUN__text__00306600(*param_1);
    uVar3 = FUN__text__0016b090(uVar1,uVar2);
    if ((uVar3 & 1) != 0) {
      return 0;
    }
  }
  return 1;
}


