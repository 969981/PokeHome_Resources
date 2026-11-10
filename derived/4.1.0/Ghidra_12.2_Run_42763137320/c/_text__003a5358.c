/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003a5358; name: FUN_.text__003a5358
 */


void FUN__text__003a5358(long param_1,uint param_2,long *param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  lVar6 = *param_3;
  *(long *)(param_1 + (ulong)param_2 * 8 + 0x228) = lVar6;
  if ((param_4 & 1) != 0) {
    uVar7 = (ulong)param_2;
    lVar2 = param_1 + uVar7 * 0x20;
    lVar5 = param_1 + 0x478;
    plVar1 = (long *)(lVar2 + 0x2d0);
    if (lVar6 == 0x200000000) {
      FUN__text__005e927c(&local_70,0x881d60);
      lVar6 = local_58;
      *(undefined1 *)(lVar5 + uVar7) = 0;
      *(undefined8 *)(lVar2 + 0x2b8) = local_70;
      *(undefined8 *)(lVar2 + 0x2c0) = uStack_68;
      *(undefined8 *)(lVar2 + 0x2c8) = local_60;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      lVar3 = *plVar1;
      *plVar1 = lVar6;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
      uVar4 = 0x881d60;
    }
    else {
      FUN__text__005e927c(&local_70,0x881d48);
      lVar6 = local_58;
      *(undefined1 *)(lVar5 + uVar7) = 0;
      *(undefined8 *)(lVar2 + 0x2b8) = local_70;
      *(undefined8 *)(lVar2 + 0x2c0) = uStack_68;
      *(undefined8 *)(lVar2 + 0x2c8) = local_60;
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
      }
      lVar3 = *plVar1;
      *plVar1 = lVar6;
      if (lVar3 != 0) {
        (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
      }
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
      uVar4 = 0x881d48;
    }
    FUN__text__005e927c(&local_70,uVar4);
    lVar6 = local_58;
    *(undefined1 *)(lVar5 + uVar7) = 0;
    *(undefined8 *)(lVar2 + 0x398) = local_70;
    *(undefined8 *)(lVar2 + 0x3a0) = uStack_68;
    *(undefined8 *)(lVar2 + 0x3a8) = local_60;
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x10))();
    }
    lVar5 = *(long *)(lVar2 + 0x3b0);
    *(long *)(lVar2 + 0x3b0) = lVar6;
    if (lVar5 != 0) {
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))();
    }
    if (local_58 != 0) {
      (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
    }
    *(undefined1 *)(param_1 + uVar7 + 0x478) = 1;
  }
  return;
}


