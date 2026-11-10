/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002437e4; name: FUN_.text__002437e4
 */


void FUN__text__002437e4(long param_1,long param_2,long param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_50 [3];
  long local_38;
  
  if (*(int *)(*(long *)(param_1 + 0x640) + 0xf0) != 0) {
    local_50[0] = 0xae55050415d68330;
    plVar1 = (long *)FUN__text__0012cdb0(param_1 + 0x110,local_50);
    if ((*(int *)(param_2 + 4) == 0) && (0 < *(int *)(param_3 + 4))) {
      (**(code **)(*plVar1 + 0x50))();
      *(undefined4 *)(param_1 + 0x708) = 0;
      FUN__text__005e927c(local_50,0x8740c0);
      FUN__text__003c1e4c(local_50);
      if (local_38 != 0) {
        (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      }
      lVar3 = *(long *)(param_1 + 0x640);
      uVar2 = FUN__text__003ae458(plVar1);
      FUN__text__00244e30(param_1,*(undefined4 *)
                                   (*(long *)(lVar3 + 0xe0) + (uVar2 & 0xffffffff) * 8));
    }
  }
  return;
}


