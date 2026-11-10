/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e1750; name: FUN_.text__001e1750
 */


void FUN__text__001e1750(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  long local_18;
  
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x60) + 0x60);
  plVar2 = (long *)(**(code **)*puVar6)(puVar6);
  plVar3 = (long *)FUN__text__0012615c();
  if (plVar3 != plVar2) {
    do {
      plVar2 = (long *)*plVar2;
    } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
  }
  local_50 = 0x753f74378b49da9c;
  uStack_48 = 0x7167d4;
  local_40 = 8;
  local_38 = 0;
  uVar4 = FUN__text__0018e980(puVar6[0xaf],&local_50);
  if (local_38 != 0) {
    (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
  }
  FUN__text__00128db0(uVar4,0,1);
  if ((*(long *)(param_1 + 0x68) == 0) ||
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar6 == (undefined8 *)0x0)) {
    puVar5 = (undefined8 *)0x0;
    iVar1 = iRam00000000000001a4;
  }
  else {
    plVar2 = (long *)(**(code **)*puVar6)(puVar6);
    plVar3 = (long *)FUN__text__0018d6a0();
    if (plVar3 != plVar2) {
      do {
        plVar2 = (long *)*plVar2;
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
      if (plVar2 == (long *)0x0) {
        puVar5 = (undefined8 *)0x0;
        iVar1 = iRam00000000000001a4;
        goto joined_r0x001e18ec;
      }
    }
    puVar5 = puVar6 + -10;
    iVar1 = *(int *)((long)puVar6 + 0x154);
  }
joined_r0x001e18ec:
  if (iVar1 == 4) {
    local_18 = puVar5[0x52];
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x10))();
    }
    local_50 = puVar5[0x11];
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x10))();
    }
    FUN__text__00196fbc(&local_18,&local_50);
    if (local_50 != 0) {
      (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
    }
    if (local_18 != 0) {
      (**(code **)(*(long *)(local_18 + 0x48) + 0x18))();
    }
  }
  return;
}


