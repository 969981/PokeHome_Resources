/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0016f86c; name: FUN_.text__0016f86c
 */


void FUN__text__0016f86c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *local_58;
  long local_50;
  long lStack_48;
  
  plVar1 = (long *)FUN__text__0016fb8c(&local_50);
  if (plVar1 != (long *)0x0) {
    (**(code **)(plVar1[9] + 0x10))();
  }
  lVar3 = plVar1[0xe];
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  lVar4 = plVar1[0xf];
  if (lVar4 != 0) {
    plVar2 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar2 + 0x10))(plVar2);
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  local_50 = lVar3;
  lStack_48 = lVar4;
  FUN__text__0016f970(param_2,&local_50);
  (**(code **)(*plVar1 + 0x10))(&local_50,plVar1);
  local_58 = plVar1;
  FUN__text__005d87d4(param_2,&local_58);
  if (local_58 != (long *)0x0) {
    (**(code **)(local_58[9] + 0x18))();
  }
  *param_1 = local_50;
  return;
}


