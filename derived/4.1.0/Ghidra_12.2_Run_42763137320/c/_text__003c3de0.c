/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003c3de0; name: FUN_.text__003c3de0
 */


void FUN__text__003c3de0(long *param_1)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_28;
  undefined1 uStack_21;
  
  local_28 = 2000;
  FUN__text__00163d7c(&local_80,param_1[0xd],&local_28);
  if (param_1[0x11] != 0) {
    (**(code **)(*(long *)(param_1[0x11] + 0x48) + 0x18))();
  }
  param_1[0x11] = CONCAT44(uStack_7c,local_80);
  FUN__text__00163d7c(&local_80,param_1[0xd],&local_28);
  if (param_1[0x12] != 0) {
    (**(code **)(*(long *)(param_1[0x12] + 0x48) + 0x18))();
  }
  param_1[0x12] = CONCAT44(uStack_7c,local_80);
  FUN__text__00163d7c(&local_80,param_1[0xd],&local_28);
  if (param_1[0x13] != 0) {
    (**(code **)(*(long *)(param_1[0x13] + 0x48) + 0x18))();
  }
  plVar1 = param_1 + 0x18;
  lVar6 = param_1[0xd];
  param_1[0x13] = CONCAT44(uStack_7c,local_80);
  local_80 = (**(code **)(*param_1 + 0x48))(param_1);
  lVar6 = FUN__text__003c4dd8(&uStack_21,lVar6,plVar1,&local_80);
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))();
  }
  if (param_1[0x14] != 0) {
    (**(code **)(*(long *)(param_1[0x14] + 0x48) + 0x18))();
  }
  param_1[0x14] = lVar6;
  *(long *)(lVar6 + 0x118) = param_1[0x1b];
  if (param_1[0x14] != 0) {
    FUN__text__0015dcf0(param_1[0x14],1);
    if (param_1[0x14] != 0) {
      FUN__text__0015ca10(param_1[0x14],2,0);
      lVar6 = param_1[0x14];
      goto LAB__text__003c3f20;
    }
  }
  lVar6 = 0;
LAB__text__003c3f20:
  (**(code **)(param_1[9] + 0x10))();
  lVar4 = *(long *)(lVar6 + 400);
  *(long **)(lVar6 + 400) = param_1;
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  iVar2 = (**(code **)(*param_1 + 0x48))(param_1);
  if (iVar2 != 0) {
    uVar5 = 0;
    do {
      snprintf((char *)&local_80,0x3f,(char *)0x71f5e7,(ulong)uVar5);
      lVar6 = FUN__text__003e96a0(*plVar1,&local_80);
      if (lVar6 == 0) {
        snprintf((char *)&local_80,0x3f,(char *)0x71dc19,(ulong)uVar5);
        lVar6 = FUN__text__003e96a0(*plVar1,&local_80);
      }
      (**(code **)(*(long *)param_1[0x14] + 0x30))((long *)param_1[0x14],lVar6);
      uVar5 = uVar5 + 1;
      uVar3 = (**(code **)(*param_1 + 0x48))(param_1);
    } while (uVar5 < uVar3);
  }
  return;
}


