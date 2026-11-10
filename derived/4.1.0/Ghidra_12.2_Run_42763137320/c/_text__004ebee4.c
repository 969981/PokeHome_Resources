/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ebee4; name: FUN_.text__004ebee4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ebee4(long *param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if ((*(byte *)((long)param_1 + 0x5a) & 0xe) != 0) {
    return;
  }
  if (param_1[7] == 0) {
    if (0 < *param_2) {
      iStack_2c = param_2[1];
      local_48 = param_1 + 5;
      local_40 = 0x1000000;
      local_38 = 0x3f80000000000000;
      local_28 = 0x1c;
      local_24 = 0x100;
      local_22 = 0;
      local_30 = *param_2;
      lVar2 = FUN__text__0042f18c(*_DAT_008a4648,&local_48,0);
      param_1[7] = lVar2;
      if (lVar2 == 0) {
        (**(code **)(*param_1 + 0x60))(local_38._4_4_,param_1,local_40,1);
      }
      else if (param_2[2] != 0) {
        iVar1 = 0;
        if (_DAT_008ab03c != 0) {
          iVar1 = param_2[2] / (int)(uint)_DAT_008ab03c;
        }
        if ((iVar1 < 0) && (*(uint *)(lVar2 + 0x18) <= (uint)-iVar1)) {
          *(undefined4 *)(lVar2 + 0x18) = 0;
        }
        else {
          *(uint *)(lVar2 + 0x18) = *(uint *)(lVar2 + 0x18) + iVar1;
        }
      }
    }
  }
  else {
    FUN__text__0042f65c(0x3f800000,*_DAT_008a4648,param_1[7],0x1000000,*param_2,param_2[1],0);
  }
  (**(code **)(*param_1 + 0x68))(param_1);
  return;
}


