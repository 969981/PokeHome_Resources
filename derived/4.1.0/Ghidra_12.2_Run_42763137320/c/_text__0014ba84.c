/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014ba84; name: FUN_.text__0014ba84
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014ba84(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_250 [65];
  long local_48;
  
  lVar4 = *(long *)(*_DAT_0089f4f0 + 0x78);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0xf0) + 0xb0);
  FUN__text__00145f88(&local_48,lVar4);
  lVar6 = local_48;
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0xf0) + 0xb0);
    lVar6 = *(long *)(*(long *)(param_1 + 0xf0) + 0x130);
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    }
    if (local_48 != 0) {
      plVar1 = (long *)(local_48 + 0x48);
      local_48 = lVar6;
      (**(code **)(*plVar1 + 0x18))();
      lVar6 = local_48;
    }
  }
  local_48 = lVar6;
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x1f8) + 0xb0);
  FUN__text__0014d854(local_250,param_2);
  if (*(long *)(param_1 + 0x200) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x200) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x200) = local_250[0];
  FUN__text__001539d4(local_250[0],*(undefined8 *)(param_1 + 0x60),uVar7);
  *(undefined1 *)(*(long *)(param_1 + 0x200) + 0x208) = 1;
  lVar6 = *(long *)(param_1 + 0x200);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar6 + 0xb0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = local_48;
  *(long *)(lVar6 + 0xb0) = lVar5;
  lVar6 = *(long *)(param_1 + 0x200);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  lVar3 = *(long *)(lVar6 + 0x130);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
  }
  *(long *)(lVar6 + 0x130) = lVar2;
  uVar7 = *(undefined8 *)(param_1 + 0x200);
  FUN__text__0014953c(local_250,lVar5);
  FUN__text__00153970(uVar7,local_250);
  FUN__text__0014821c(local_250);
  (**(code **)(**(long **)(param_1 + 0x200) + 0x70))(*(long **)(param_1 + 0x200),1,0);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  return;
}


