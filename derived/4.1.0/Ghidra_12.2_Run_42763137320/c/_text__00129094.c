/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00129094; name: FUN_.text__00129094
 */


void FUN__text__00129094(long param_1,long *param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  long local_40;
  long local_38;
  
  lVar1 = *(long *)(param_1 + 0x610);
  if (param_2 == (long *)0x0) {
    return;
  }
  FUN__text__00129400(param_2[0xc2]);
  (**(code **)(*param_2 + 0x10))(&local_40,param_2);
  lVar6 = local_40;
  local_40 = 0;
  local_38 = lVar6;
  plVar2 = *(long **)(lVar1 + 0x20);
  if (plVar2 < *(long **)(lVar1 + 0x28)) {
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *(undefined8 *)(lVar1 + 0x30);
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    local_38 = 0;
    *plVar2 = lVar6;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    *(long **)(lVar1 + 0x20) = plVar2 + 1;
  }
  else {
    FUN__text__00129a80(lVar1 + 0x18,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
  }
  if (local_40 != 0) {
    (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
  }
  lVar6 = param_2[0xc2];
  lVar1 = *(long *)(lVar1 + 8);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))((long *)(lVar1 + 0x48));
    puVar5 = *(undefined8 **)(lVar1 + 0x60);
    if (puVar5 != (undefined8 *)0x0) {
      plVar2 = (long *)(**(code **)*puVar5)(puVar5);
      plVar3 = (long *)FUN__text__001280e4();
      if (plVar3 != plVar2) {
        do {
          plVar2 = (long *)*plVar2;
        } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
        if (plVar2 == (long *)0x0) goto LAB__text__00129210;
      }
      (**(code **)(puVar5[-10] + 0x10))(&local_38,puVar5 + -10);
      if (*(long *)(lVar6 + 0x10) != 0) {
        (**(code **)(*(long *)(*(long *)(lVar6 + 0x10) + 0x48) + 0x18))();
      }
      *(long *)(lVar6 + 0x10) = local_38;
      goto joined_r0x00129228;
    }
  }
LAB__text__00129210:
  if (*(long *)(lVar6 + 0x10) != 0) {
    (**(code **)(*(long *)(*(long *)(lVar6 + 0x10) + 0x48) + 0x18))();
  }
  *(undefined8 *)(lVar6 + 0x10) = 0;
joined_r0x00129228:
  if (lVar1 != 0) {
    (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))((long *)(lVar1 + 0x48));
  }
  return;
}


