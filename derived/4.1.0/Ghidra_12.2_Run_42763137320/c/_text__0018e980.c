/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0018e980; name: FUN_.text__0018e980
 */


long FUN__text__0018e980(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long local_60 [3];
  long local_48;
  
  plVar2 = *(long **)(param_1 + 0x78);
  plVar3 = *(long **)(param_1 + 0x80);
  lVar5 = *param_2;
  lVar4 = param_2[3];
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  if (plVar2 != plVar3) {
    do {
      FUN__text__005e9290(local_60,*plVar2 + 0x630);
      lVar1 = local_60[0];
      if (local_48 != 0) {
        (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
      }
      if (lVar1 == lVar5) goto LAB__text__0018ea04;
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar3);
    plVar2 = plVar3;
  }
LAB__text__0018ea04:
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  if (plVar2 != *(long **)(param_1 + 0x80)) {
    lVar4 = *plVar2;
    if (lVar4 == 0) {
      return 0;
    }
    plVar2 = (long *)(*(code *)**(undefined8 **)(lVar4 + 0x50))();
    plVar3 = (long *)FUN__text__0018ea84();
    if (plVar3 == plVar2) {
      return lVar4;
    }
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
    if (plVar2 != (long *)0x0) {
      return lVar4;
    }
  }
  return 0;
}


