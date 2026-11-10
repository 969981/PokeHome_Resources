/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004f4de4; name: FUN_.text__004f4de4
 */


undefined4
FUN__text__004f4de4(long *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                   undefined4 *param_5,uint param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  int local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 auStack_34 [4];
  
  *param_5 = 0;
  iVar1 = FUN__text__004f4810(param_1[0x12]);
  iVar2 = FUN__text__004f47f4(param_1[0x12]);
  if ((param_4 < iVar2 + iVar1) &&
     (lVar4 = FUN__text__004f3f10(param_1[0x12],param_1,param_2,param_3,param_6 & 1), lVar4 != 0)) {
    lVar5 = FUN__text__004f55c8(param_1,0,lVar4);
    FUN__text__004eb980(lVar4);
    if (lVar5 != 0) {
      param_1[0xd] = 0;
      local_5c = 0;
      local_58 = 0;
      local_54 = 0;
      local_60 = param_4;
      iVar1 = (**(code **)(*param_1 + 0xb0))(param_1,0,0,&local_60,param_5,auStack_34,0,0);
      if (iVar1 != 0) {
        iVar1 = FUN__text__004f4810(param_1[0x12]);
        iVar2 = FUN__text__004f47f4(param_1[0x12]);
        FUN__text__004e9dd4(lVar5,0,4,iVar2 + iVar1);
        uVar3 = FUN__text__004f4810(param_1[0x12]);
        lVar4 = FUN__text__004f55c8(param_1,uVar3,0);
        uVar3 = 1;
        if (lVar4 == 0) {
          uVar3 = 2;
        }
        return uVar3;
      }
    }
  }
  return 2;
}


