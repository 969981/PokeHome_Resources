/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004ec14c; name: FUN_.text__004ec14c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004ec14c(long *param_1,undefined4 *param_2)

{
  long lVar1;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined1 local_22;
  
  lVar1 = param_1[0xb];
  *(short *)(param_1 + 0xb) = (short)lVar1 + 1;
  if ((short)lVar1 == 0) {
    if (param_1[8] != 0) {
      FUN__text__0042f65c(0,*_DAT_008a4648,param_1[8],0x4000000,*param_2,param_2[1],0);
      return;
    }
    local_30 = *param_2;
    uStack_2c = param_2[1];
    local_48 = param_1 + 5;
    local_40 = 0x4000000;
    local_38 = 0x3f800000;
    local_28 = 0x1c;
    local_24 = 0x100;
    local_22 = 0;
    lVar1 = FUN__text__0042f18c(*_DAT_008a4648,&local_48,0);
    param_1[8] = lVar1;
    if (lVar1 == 0) {
      (**(code **)(*param_1 + 0x60))(local_38._4_4_,param_1,local_40,1);
      return;
    }
  }
  return;
}


