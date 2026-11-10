/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e8320; name: FUN_.text__001e8320
 */


void FUN__text__001e8320(long param_1,undefined8 *param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long local_70;
  long local_68;
  undefined8 local_48;
  
  lVar8 = *(long *)(param_1 + 0x78);
  *(undefined8 *)(lVar8 + 8) = param_2[3];
  lVar5 = *(long *)(*(long *)(param_1 + 0xa8) + 0x60);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  local_48 = 0;
  if (*(long *)(param_1 + 0x68) == 0) {
LAB__text__001e83cc:
    puVar6 = (undefined8 *)0x0;
  }
  else {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar6 != (undefined8 *)0x0) {
      plVar1 = (long *)(**(code **)*puVar6)(puVar6);
      plVar2 = (long *)FUN__text__0018d6a0();
      if (plVar2 != plVar1) {
        do {
          plVar1 = (long *)*plVar1;
        } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
        if (plVar1 == (long *)0x0) goto LAB__text__001e83cc;
      }
      puVar6 = puVar6 + -10;
    }
  }
  lVar9 = puVar6[0xf];
  FUN__text__00139e64(*param_2,*(undefined4 *)(param_2 + 2));
  uVar3 = *param_2;
  if (0xb < param_3) {
    if (*(int *)(param_2 + 1) == 0) {
      FUN__text__0013a0d0(uVar3,0,*(undefined4 *)(param_2 + 2));
    }
    else {
      FUN__text__0013a1b8();
    }
    uVar3 = *(undefined8 *)(param_1 + 0x78);
    local_48 = 0xd12268633d3eed0d;
    local_68 = lVar5;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
    }
    FUN__text__001ac1fc(uVar3,param_2 + 4,&local_68,&local_48);
    if (local_68 != 0) {
      (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
      local_68 = 0;
    }
    goto LAB__text__001e8550;
  }
  if (*(int *)(param_2 + 1) == 0) {
    FUN__text__0013a0d0(uVar3,8,*(undefined4 *)(param_2 + 2));
    uVar3 = *param_2;
    uVar4 = *(undefined4 *)(param_2 + 2);
    if (*(int *)(param_2 + 1) == 0) goto LAB__text__001e85a0;
LAB__text__001e8420:
    uVar3 = FUN__text__00139c48(uVar3,5);
    lVar7 = puVar6[0x42];
  }
  else {
    FUN__text__0013a1b8(uVar3,5);
    uVar3 = *param_2;
    uVar4 = *(undefined4 *)(param_2 + 2);
    if (*(int *)(param_2 + 1) != 0) goto LAB__text__001e8420;
LAB__text__001e85a0:
    uVar3 = FUN__text__00139b48(uVar3,8,uVar4);
    lVar7 = puVar6[0x42];
  }
  if (lVar7 != 0) {
    (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
  }
  FUN__text__003d5154(lVar7,*(undefined4 *)((ulong)param_3 * 4 + 0x7261c8),uVar3,0,0);
  uVar3 = *(undefined8 *)(param_1 + 0x78);
  local_48 = 0x7871294480375274;
  local_70 = lVar5;
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN__text__001ab654(uVar3,param_2 + 5,&local_70,&local_48,0,lVar9 + (ulong)param_3 * 0x28 + 8);
  if (local_70 != 0) {
    (**(code **)(*(long *)(local_70 + 0x48) + 0x18))();
    local_70 = 0;
  }
  (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
LAB__text__001e8550:
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  *(undefined8 *)(lVar8 + 8) = 0;
  return;
}


