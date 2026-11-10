/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c6280; name: FUN_.text__004c6280
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN__text__004c6280(long *param_1,long param_2,undefined4 param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long local_48;
  undefined4 local_34;
  long local_18;
  
  local_34 = param_3;
  iVar2 = (**(code **)(*param_1 + 0x80))();
  if (iVar2 == 3) {
    local_18 = param_2 + 4;
    uVar4 = FUN__text__004aa918(&local_18,&local_34,auStack_60);
    if ((int)uVar4 == 1) {
      if (local_48 == 0) {
        FUN__text__004c5960(param_1 + 0x1e,local_5c,CONCAT44(uStack_54,local_58),uStack_50);
      }
      else {
        FUN__text__004c5a3c(param_1 + 0x1e,local_58);
      }
      uVar4 = FUN__text__004684a0(param_1,&local_18,&local_34,param_5 & 1);
      return uVar4;
    }
  }
  else {
    lVar1 = param_1[4];
    uVar4 = *_DAT_008a4630;
    uVar3 = (**(code **)(*param_1 + 0x80))(param_1);
    FUN__text__004aab84(uVar4,(int)lVar1,3,uVar3);
    uVar4 = 0x5b;
  }
  return uVar4;
}


