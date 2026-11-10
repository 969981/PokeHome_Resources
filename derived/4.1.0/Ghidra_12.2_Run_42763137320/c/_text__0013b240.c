/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013b240; name: FUN_.text__0013b240
 */


void FUN__text__0013b240(long *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  long local_38;
  undefined4 local_18;
  undefined4 uStack_14;
  
  lVar3 = *param_1;
  if (*(code **)(lVar3 + 0xb10) != (code *)0x0) {
    local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(lVar3 + 0xc40));
    (**(code **)(lVar3 + 0xb10))(lVar3 + 0xb30,&local_38);
  }
  if (*(code **)(lVar3 + 0xa80) != (code *)0x0) {
    uStack_14 = *(undefined4 *)(lVar3 + 0xc40);
    local_18 = *(undefined4 *)(lVar3 + 0xc44);
    local_38 = lVar3;
    (**(code **)(lVar3 + 0xa80))(lVar3 + 0xaa0,&uStack_14,&local_18,&local_38);
  }
  if (*(int *)(lVar3 + 0x64c) == 1) {
    if (*(code **)(lVar3 + 0x9d0) == (code *)0x0) {
      uVar1 = 1;
    }
    else {
      local_38 = CONCAT44(local_38._4_4_,*(undefined4 *)(lVar3 + 0xc40));
      uVar1 = (**(code **)(lVar3 + 0x9d0))(lVar3 + 0x9f0,&local_38);
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN__text__0012cb14(lVar3 + 0x110,0x721a70);
    FUN__text__003a14c4(uVar2,uVar1 & 1);
    if (*(code **)(lVar3 + 0x9d0) == (code *)0x0) {
      uVar1 = 1;
    }
    else {
      local_38 = CONCAT44(local_38._4_4_,0xffffffff);
      uVar1 = (**(code **)(lVar3 + 0x9d0))(lVar3 + 0x9f0,&local_38);
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN__text__0012cb14(lVar3 + 0x110,0x721a78);
    FUN__text__003a14c4(uVar2,uVar1 & 1);
  }
  if (*(long *)(lVar3 + 0x4e0) != 0) {
    FUN__text__003c02e4();
  }
  return;
}


