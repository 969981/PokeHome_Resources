/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0014b880; name: FUN_.text__0014b880
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0014b880(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_250 [65];
  long local_48;
  long local_28;
  
  lVar3 = *(long *)(*_DAT_0089f4f0 + 0x78);
  if (lVar3 != 0) {
    (**(code **)(*(long *)(lVar3 + 0x48) + 0x10))();
  }
  FUN__text__00145f44(&local_28,lVar3);
  FUN__text__00145f88(&local_48,lVar3);
  lVar6 = *(long *)(param_1 + 0x68);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
    if (local_28 != 0) {
      plVar1 = (long *)(local_28 + 0x48);
      local_28 = lVar6;
      (**(code **)(*plVar1 + 0x18))();
      lVar6 = local_28;
    }
    local_28 = lVar6;
    lVar6 = local_48;
    local_48 = 0;
    if (lVar6 != 0) {
      (**(code **)(*(long *)(lVar6 + 0x48) + 0x18))();
    }
  }
  FUN__text__0014d64c(local_250,param_2);
  if (*(long *)(param_1 + 0x1f0) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x1f0) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x1f0) = local_250[0];
  FUN__text__0014ef94(local_250[0],*(undefined8 *)(param_1 + 0x60));
  lVar6 = local_28;
  lVar4 = *(long *)(param_1 + 0x1f0);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x10))();
  }
  lVar2 = *(long *)(lVar4 + 0xb0);
  if (lVar2 != 0) {
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
  }
  lVar2 = local_48;
  *(long *)(lVar4 + 0xb0) = lVar6;
  lVar6 = *(long *)(param_1 + 0x1f0);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  lVar4 = *(long *)(lVar6 + 0x130);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  *(long *)(lVar6 + 0x130) = lVar2;
  uVar5 = *(undefined8 *)(param_1 + 0x1f0);
  if (*(char *)(param_1 + 0xd1) == '\0') {
    lVar6 = *(long *)(param_1 + 0xf0);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x188);
  }
  FUN__text__0014953c(local_250,*(undefined8 *)(lVar6 + 0xb0));
  FUN__text__0014eecc(uVar5,local_250);
  FUN__text__0014821c(local_250);
  uVar5 = *(undefined8 *)(param_1 + 0x1f0);
  FUN__text__005a7908(local_250,*(undefined8 *)(*(long *)(param_1 + 0x108) + 0x130));
  FUN__text__0014ef30(uVar5,local_250);
  FUN__text__0014821c(local_250);
  (**(code **)(**(long **)(param_1 + 0x1f0) + 0x70))(*(long **)(param_1 + 0x1f0),1,0);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))((long *)(lVar3 + 0x48));
  return;
}


