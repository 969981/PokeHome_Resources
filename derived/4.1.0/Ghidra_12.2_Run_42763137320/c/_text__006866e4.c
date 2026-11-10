/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006866e4; name: FUN_.text__006866e4
 */


undefined8 FUN__text__006866e4(long param_1,undefined8 param_2,int param_3,int param_4)

{
  long lVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  int local_14;
  
  if (param_4 < 0) {
    return 0xfffffe0b;
  }
  if (param_3 == 0) {
    local_14 = param_4 - *(int *)(param_1 + 0x95c);
    if (local_14 == 0) {
      return 0;
    }
    piVar3 = (int *)(param_1 + 0x95c);
    lVar1 = param_1 + 0x950;
    lVar2 = param_1 + 0x958;
  }
  else {
    lVar2 = FUN__text__00679f80(param_1,param_3);
    if (lVar2 == 0) {
      return 0;
    }
    piVar3 = (int *)(lVar2 + 0xcc);
    local_14 = param_4 - *piVar3;
    if (local_14 == 0) {
      return 0;
    }
    lVar1 = lVar2 + 0xc0;
    lVar2 = lVar2 + 200;
  }
  if (local_14 < 0) {
    uVar4 = FUN__text__006799f8(piVar3,lVar1,lVar2,&local_14);
    return uVar4;
  }
  uVar4 = FUN__text__00679ae8();
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (local_14 < 1) {
    return 0;
  }
  uVar4 = FUN__text__0067f9fc(param_1,0,param_3);
  return uVar4;
}


