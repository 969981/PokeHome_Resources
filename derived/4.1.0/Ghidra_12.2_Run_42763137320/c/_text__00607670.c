/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00607670; name: FUN_.text__00607670
 */


void FUN__text__00607670(byte *param_1,undefined2 *param_2,uint param_3,undefined4 param_4,
                        byte param_5,int param_6,undefined4 param_7)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  int local_58 [2];
  
  bVar6 = 0;
  if ((param_5 & 0xfe) == 0) {
    bVar6 = param_5;
  }
  uVar3 = FUN__text__006029e4(param_3 & 0xffff);
  uVar4 = FUN__text__00602a78(param_3,param_4,param_7);
  iVar5 = FUN__text__005ff43c(uVar3,uVar4,2);
  local_58[0] = iVar5;
  local_58[1] = FUN__text__005ff554(uVar3,uVar4,2);
  iVar1 = local_58[bVar6];
  if (iVar1 != param_6) {
    if (local_58[1] == param_6) {
      bVar6 = 1;
      iVar1 = param_6;
    }
    bVar2 = 0;
    if (iVar5 != param_6) {
      param_6 = iVar1;
      bVar2 = bVar6;
    }
    bVar6 = bVar2;
  }
  *param_1 = bVar6;
  *param_2 = (short)param_6;
  return;
}


