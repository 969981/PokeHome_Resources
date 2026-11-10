/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0027fd14; name: FUN_.text__0027fd14
 */


void FUN__text__0027fd14(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long local_40;
  long local_38;
  undefined1 uStack_11;
  
  uVar1 = FUN__text__0012559c();
  (**(code **)(*param_2 + 0x10))(&local_38,param_2);
  (**(code **)(*(long *)param_2[0x69] + 0x10))(&local_40);
  lVar2 = FUN__text__00282360(&uStack_11,uVar1,&local_38,&local_40);
  *param_1 = lVar2;
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  return;
}


