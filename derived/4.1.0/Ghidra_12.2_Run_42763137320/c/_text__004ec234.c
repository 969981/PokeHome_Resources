/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ec234; name: FUN_.text__004ec234
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ec234(long *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  long lVar2;
  long *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  int iStack_30;
  int local_2c;
  undefined4 uStack_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if (((param_3 & 1) == 0) &&
     (iVar1 = *(ushort *)(param_1 + 0xb) - 1, *(ushort *)(param_1 + 0xb) != 0 && iVar1 != 0)) {
    *(short *)(param_1 + 0xb) = (short)iVar1;
    return;
  }
  *(undefined2 *)(param_1 + 0xb) = 0;
  if (param_1[8] == 0) {
    if (*param_2 < 1) {
      *(undefined4 *)(param_1 + 10) = 0x3f800000;
      (**(code **)(*param_1 + 0x28))(0x3f800000,param_1);
    }
    else {
      local_38 = (undefined4)param_1[10];
      local_48 = param_1 + 5;
      local_2c = param_2[1];
      local_40 = 0x8000000;
      local_34 = 0x3f800000;
      uStack_28 = 0x1c;
      local_24 = 0x100;
      local_22 = 0;
      iStack_30 = *param_2;
      lVar2 = FUN__text__0042f18c(*_DAT_008a4648,&local_48,0);
      param_1[8] = lVar2;
      if (lVar2 == 0) {
        (**(code **)(*param_1 + 0x60))(local_34,param_1,local_40,1);
      }
    }
  }
  else {
    FUN__text__0042f65c(0x3f800000,*_DAT_008a4648,param_1[8],0x8000000,*param_2,param_2[1],0);
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}


