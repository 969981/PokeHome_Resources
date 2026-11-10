/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005f68e0; name: FUN_.text__005f68e0
 */


undefined8 FUN__text__005f68e0(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 < 9) {
    param_3 = 8;
  }
  uVar1 = param_3;
  if (0xfff < param_3) {
    uVar1 = 0x1000;
  }
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = param_2 / uVar1;
  }
  lVar5 = param_2 - uVar2 * uVar1;
  lVar4 = 0;
  if (lVar5 != 0) {
    lVar4 = uVar1 - lVar5;
  }
  lVar4 = lVar4 + param_2;
  lVar5 = FUN__text__005f5f04(param_1,lVar4,param_3,0);
  if (lVar5 == 0) {
    lVar5 = FUN__text__005f5f04(param_1,lVar4 + param_3,param_3,1);
    if (((lVar5 == 0) && (lVar5 = FUN__text__005f626c(param_1,lVar4,param_3,0), lVar5 == 0)) &&
       (lVar5 = FUN__text__005f626c(param_1,lVar4 + param_3,param_3,1), lVar5 == 0)) {
      return 0;
    }
  }
  uVar3 = FUN__text__005f597c(lVar5);
  FUN__text__005f59c4(lVar5,param_3);
  *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
  lVar4 = FUN__text__005f599c(lVar5);
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + lVar4;
  return uVar3;
}


