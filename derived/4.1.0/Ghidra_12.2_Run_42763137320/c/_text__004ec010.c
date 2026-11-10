/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ec010; name: FUN_.text__004ec010
 */


void FUN__text__004ec010(long *param_1,int *param_2,undefined4 param_3)

{
  long lVar1;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  if ((*(byte *)((long)param_1 + 0x5a) >> 4 & 1) == 0) {
    lVar1 = param_1[7];
    local_30 = *param_2;
    if (lVar1 == 0) {
      if (((*(byte *)((long)param_1 + 0x5a) & 3) != 0) && (0 < local_30)) {
        iStack_2c = param_2[1];
        local_48 = param_1 + 5;
        local_40 = 0x2000000;
        local_38 = 0x3f800000;
        local_28 = 0x1c;
        local_24 = 0x100;
        local_22 = 0;
        lVar1 = FUN__text__0042f18c(DAT_00ae9a60,&local_48,0);
        param_1[7] = lVar1;
        if (lVar1 == 0) {
          (**(code **)(*param_1 + 0x60))(local_38._4_4_,param_1,local_40,1);
          return;
        }
        return;
      }
    }
    else {
      if (local_30 != 0) {
        FUN__text__0042f65c(0,DAT_00ae9a60,lVar1,0x2000000,local_30,param_2[1],0);
        return;
      }
      FUN__text__0042f5a0(DAT_00ae9a60,lVar1,param_1 + 5);
      param_1[7] = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x004ec10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_3);
  return;
}


