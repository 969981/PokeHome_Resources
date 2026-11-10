/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00187800; name: FUN_.text__00187800
 */


void FUN__text__00187800(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  long local_18;
  
  local_38 = 0x1000101;
  local_48 = 0;
  local_40 = 0;
  local_34 = 1;
  puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar1 = (long *)(**(code **)*puVar3)(puVar3);
  plVar2 = (long *)FUN__text__0012615c();
  if (plVar2 != plVar1) {
    do {
      plVar1 = (long *)*plVar1;
    } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
  }
  FUN__text__001156d0(&local_18,*(undefined8 *)(puVar3[0xaf] + 0xb0),0);
  lVar4 = *(long *)(local_18 + 0x60);
  if ((lVar4 == 0) || ((**(code **)(*(long *)(lVar4 + 0x48) + 0x10))(), local_18 != 0)) {
    (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
  }
  local_18 = 0x9f05bfc15443881;
  FUN__text__005f2d98(lVar4,&local_18,*(undefined8 *)(param_1 + 0x118));
  local_48 = *(undefined8 *)(param_1 + 0x118);
  local_38 = CONCAT31(local_38._1_3_,1);
  local_40 = CONCAT44(local_40._4_4_,1);
  FUN__text__00131da0(*(undefined8 *)(param_1 + 0x110),&local_48);
  FUN__text__00128ec0(*(undefined8 *)(param_1 + 0x110),0);
  *(undefined1 *)(param_1 + 0x120) = 1;
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


