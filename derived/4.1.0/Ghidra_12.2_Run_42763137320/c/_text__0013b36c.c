/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0013b36c; name: FUN_.text__0013b36c
 */


void FUN__text__0013b36c(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_18;
  undefined4 local_14;
  
  lVar4 = *param_1;
  if (*(code **)(lVar4 + 0xba0) != (code *)0x0) {
    (**(code **)(lVar4 + 0xba0))(lVar4 + 0xbc0);
  }
  lVar1 = lVar4 + 0x110;
  uVar3 = FUN__text__0012cdb0(lVar1,0x721a58);
  FUN__text__003ae340(uVar3,*(undefined4 *)(lVar4 + 0xc40),1);
  if (*(int *)(lVar4 + 0x64c) == 1) {
    if (*(code **)(lVar4 + 0x9d0) == (code *)0x0) {
      uVar2 = 1;
    }
    else {
      local_18 = *(undefined4 *)(lVar4 + 0xc40);
      uVar2 = (**(code **)(lVar4 + 0x9d0))(lVar4 + 0x9f0,&local_18);
      uVar2 = uVar2 ^ 1;
    }
    uVar3 = FUN__text__0012cb14(lVar1,0x721a70);
    FUN__text__003a14c4(uVar3,uVar2 & 1);
    if (*(code **)(lVar4 + 0x9d0) == (code *)0x0) {
      uVar2 = 1;
    }
    else {
      local_14 = 0xffffffff;
      uVar2 = (**(code **)(lVar4 + 0x9d0))(lVar4 + 0x9f0,&local_14);
      uVar2 = uVar2 ^ 1;
    }
    uVar3 = FUN__text__0012cb14(lVar1,0x721a78);
    FUN__text__003a14c4(uVar3,uVar2 & 1);
  }
  if (*(long *)(lVar4 + 0x4e0) != 0) {
    FUN__text__003c02e4();
  }
  return;
}


