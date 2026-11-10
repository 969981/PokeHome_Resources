/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001caa54; name: FUN_.text__001caa54
 */


void FUN__text__001caa54(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(lVar3 + 0x2d0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  uVar1 = FUN__text__0012cb14(lVar3 + 0x110,param_1 + 0x1b0);
  if (param_2 == 0) {
    uVar2 = 0x86dfa8;
  }
  else {
    uVar2 = 0x86dfc0;
  }
  FUN__text__005e927c(auStack_50,uVar2);
  FUN__text__003a1de4(uVar1,auStack_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  FUN__text__003c7c60(lVar4,param_1 + 0x1c8,param_2 == 0);
  FUN__text__003c7c60(lVar4,param_1 + 0x230,param_2 != 0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


