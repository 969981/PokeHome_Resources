/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005d8c7c; name: FUN_.text__005d8c7c
 */


void FUN__text__005d8c7c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *param_2;
    lVar2 = param_2[1];
    if (lVar2 != 0) {
      plVar4 = (long *)(lVar2 + 0x48);
      (**(code **)(*plVar4 + 0x10))(plVar4);
      *(undefined8 *)(param_1 + 0x160) = uVar5;
      (**(code **)(*plVar4 + 0x10))(plVar4);
      bVar3 = false;
      lVar1 = *(long *)(param_1 + 0x168);
      *(long *)(param_1 + 0x168) = lVar2;
      goto joined_r0x005d8cec;
    }
  }
  lVar2 = 0;
  bVar3 = true;
  lVar1 = *(long *)(param_1 + 0x168);
  *(undefined8 *)(param_1 + 0x160) = uVar5;
  *(undefined8 *)(param_1 + 0x168) = 0;
joined_r0x005d8cec:
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
  }
  if (bVar3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x005d8d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  return;
}


