/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011b65c; name: FUN_.text__0011b65c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0011b65c(undefined8 *param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  param_1[6] = 1;
  uVar4 = _DAT_0089ff60;
  uVar2 = _DAT_0089ff50;
  lVar1 = (ulong)(param_3 - 1U) * 8 + 0x18;
  if (4 < param_3 - 1U) {
    lVar1 = 0x10;
  }
  param_1[4] = param_2;
  param_1[5] = lVar1;
  uVar5 = _DAT_0089ff68;
  uVar3 = _DAT_0089ff58;
  *param_1 = uVar4;
  param_1[1] = uVar2;
  param_1[2] = uVar5;
  param_1[3] = uVar3;
  return;
}


