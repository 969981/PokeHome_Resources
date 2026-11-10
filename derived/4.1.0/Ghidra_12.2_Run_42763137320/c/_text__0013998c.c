/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013998c; name: FUN_.text__0013998c
 */


void FUN__text__0013998c(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 local_34;
  undefined4 local_18;
  undefined4 local_14;
  
  if (*(code **)(param_1 + 0x6d0) != (code *)0x0) {
    local_34 = param_2;
    (**(code **)(param_1 + 0x6d0))(param_1 + 0x6f0,&local_34);
  }
  if (*(int *)(param_1 + 0x64c) == 1) {
    if (*(code **)(param_1 + 0x9d0) == (code *)0x0) {
      uVar1 = 1;
    }
    else {
      local_18 = *(undefined4 *)(param_1 + 0xc40);
      uVar1 = (**(code **)(param_1 + 0x9d0))(param_1 + 0x9f0,&local_18);
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN__text__0012cb14(param_1 + 0x110,0x721a70);
    FUN__text__003a14c4(uVar2,uVar1 & 1);
    if (*(code **)(param_1 + 0x9d0) == (code *)0x0) {
      uVar1 = 1;
    }
    else {
      local_14 = 0xffffffff;
      uVar1 = (**(code **)(param_1 + 0x9d0))(param_1 + 0x9f0,&local_14);
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN__text__0012cb14(param_1 + 0x110,0x721a78);
    FUN__text__003a14c4(uVar2,uVar1 & 1);
  }
  return;
}


