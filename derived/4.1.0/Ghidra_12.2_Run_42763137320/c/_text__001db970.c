/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001db970; name: FUN_.text__001db970
 */


void FUN__text__001db970(long param_1,ulong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_48;
  
  if ((param_2 & 1) == 0) {
    uVar3 = 2;
  }
  else {
    if (*(char *)(param_1 + 0x8ba0) == '\0') {
      (**(code **)(**(long **)(param_1 + 0x89c8) + 0x50))();
      lVar4 = *(long *)(param_1 + 8);
      iVar1 = *(int *)(param_1 + 0x8ba8);
      lVar5 = *(long *)(lVar4 + 0x2d0);
      if (lVar5 != 0) {
        (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
      }
      local_48 = 0xaa81ed4081cc46c5;
      uVar2 = FUN__text__0012ce7c(lVar4 + 0x110,&local_48);
      FUN__text__003a14e8(uVar2,iVar1 != 0);
      FUN__text__003c7c60(lVar5,param_1 + 0x8b08,iVar1 != 0);
      if (iVar1 == 0) {
        FUN__text__001ddbc4(param_1);
      }
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
    }
    uVar3 = 1;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x30) + 0x34) = uVar3;
  *(undefined4 *)(param_1 + 0x89d8) = 0;
  return;
}


