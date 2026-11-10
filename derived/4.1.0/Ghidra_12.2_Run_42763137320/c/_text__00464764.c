/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00464764; name: FUN_.text__00464764
 */


void FUN__text__00464764(undefined4 param_1,undefined4 param_2,long *param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  uVar1 = (**(code **)(*param_3 + 0x1f0))();
  if ((uVar1 & 1) != 0) {
    uStack_40 = (undefined4)param_3[4];
    local_3c = 0;
    local_44 = param_4;
    local_38 = param_2;
    uStack_34 = param_1;
    (**(code **)(*param_3 + 0xb8))(param_3,&local_44);
  }
  return;
}


