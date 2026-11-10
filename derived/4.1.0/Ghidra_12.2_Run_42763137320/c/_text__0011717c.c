/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0011717c; name: FUN_.text__0011717c
 */


bool FUN__text__0011717c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long local_28;
  
  FUN__text__005d84d4(&local_28);
  lVar1 = local_28;
  if (local_28 != 0) {
    lVar3 = *(long *)(local_28 + 0x70);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
    }
    lVar4 = *(long *)(lVar1 + 0x78);
    if (lVar4 != 0) {
      plVar2 = (long *)(lVar4 + 0x48);
      (**(code **)(*plVar2 + 0x10))(plVar2);
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *param_2 = lVar3;
    param_2[1] = lVar4;
    if (local_28 != 0) {
      (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    }
  }
  return lVar1 != 0;
}


