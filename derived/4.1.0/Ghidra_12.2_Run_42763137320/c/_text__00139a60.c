/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00139a60; name: FUN_.text__00139a60
 */


void FUN__text__00139a60(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long local_38;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (*(code **)(param_1 + 0xa80) != (code *)0x0) {
    uStack_14 = *(undefined4 *)(param_1 + 0xc40);
    local_18 = *(undefined4 *)(param_1 + 0xc44);
    local_38 = param_1;
    (**(code **)(param_1 + 0xa80))(param_1 + 0xaa0,&uStack_14,&local_18,&local_38);
  }
  if (*(int *)(param_1 + 0x64c) == 1) {
    if (*(code **)(param_1 + 0x9d0) == (code *)0x0) {
      uVar1 = 1;
    }
    else {
      local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(param_1 + 0xc40));
      uVar1 = (**(code **)(param_1 + 0x9d0))(param_1 + 0x9f0,&local_38);
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN__text__0012cb14(param_1 + 0x110,0x721a70);
    FUN__text__003a14c4(uVar2,uVar1 & 1);
    if (*(code **)(param_1 + 0x9d0) == (code *)0x0) {
      uVar1 = 1;
    }
    else {
      local_38 = CONCAT44(local_38._4_4_,0xffffffff);
      uVar1 = (**(code **)(param_1 + 0x9d0))(param_1 + 0x9f0,&local_38);
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN__text__0012cb14(param_1 + 0x110,0x721a78);
    FUN__text__003a14c4(uVar2,uVar1 & 1);
  }
  return;
}


