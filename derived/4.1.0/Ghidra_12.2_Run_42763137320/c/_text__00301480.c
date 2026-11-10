/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00301480; name: FUN_.text__00301480
 */


bool FUN__text__00301480(long param_1,uint param_2,uint param_3,undefined8 param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long local_58;
  long local_50;
  undefined8 local_48;
  
  local_48 = param_4;
  FUN__text__002a32ac(&local_50,param_4,&local_48);
  FUN__text__002a33c8(&local_58,local_48,&local_50);
  lVar2 = local_58;
  if (local_58 == 0) {
    lVar8 = param_1 + (ulong)param_2 * 0x5fa0 + 0x58;
    iVar1 = *(int *)(lVar8 + (ulong)param_3 * 0x330 + 0x2e8);
    if ((-1 < iVar1) && ((param_5 & 1) != 0)) {
      bVar3 = iVar1 != 0;
      goto LAB__text__00301648;
    }
LAB__text__00301590:
    lVar8 = lVar8 + (ulong)param_3 * 0x330;
    FUN__text__00306b04(lVar2,lVar8);
    uVar5 = *(undefined8 *)(lVar8 + 0x2a0);
    *(undefined8 *)(lVar2 + 0x60) = *(undefined8 *)(lVar8 + 0x298);
    *(undefined8 *)(lVar2 + 0x68) = uVar5;
    uVar5 = *(undefined8 *)(lVar8 + 0x2a8);
    uVar6 = *(undefined8 *)(lVar8 + 0x2b0);
    uVar7 = *(undefined8 *)(lVar8 + 0x2c0);
    *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(lVar8 + 0x2b8);
    *(undefined8 *)(lVar2 + 0x88) = uVar7;
    *(undefined8 *)(lVar2 + 0x70) = uVar5;
    *(undefined8 *)(lVar2 + 0x78) = uVar6;
    uVar5 = *(undefined8 *)(lVar8 + 0x2d0);
    uVar6 = *(undefined8 *)(lVar8 + 0x2d8);
    uVar7 = *(undefined8 *)(lVar8 + 0x2e0);
    *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(lVar8 + 0x2c8);
    *(undefined8 *)(lVar2 + 0x98) = uVar5;
    *(undefined8 *)(lVar2 + 0xa0) = uVar6;
    *(undefined8 *)(lVar2 + 0xa8) = uVar7;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
LAB__text__003015f0:
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
    uVar4 = FUN__text__00306588(lVar2);
    if (((uVar4 & 1) == 0) &&
       (((param_5 & 1) != 0 || (uVar4 = FUN__text__00306a08(lVar2,2), (uVar4 & 1) == 0)))) {
      bVar3 = true;
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
    else {
      bVar3 = false;
      (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
    }
  }
  else {
    plVar9 = (long *)(local_58 + 0x48);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    lVar8 = param_1 + (ulong)param_2 * 0x5fa0 + 0x58;
    iVar1 = *(int *)(lVar8 + (ulong)param_3 * 0x330 + 0x2e8);
    if ((iVar1 < 0) || ((param_5 & 1) == 0)) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      if ((param_2 < 300) && (param_3 < 0x1e)) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
        goto LAB__text__00301590;
      }
      goto LAB__text__003015f0;
    }
    bVar3 = iVar1 != 0;
    (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))((long *)(lVar2 + 0x48));
  }
  if (local_58 != 0) {
    (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
  }
LAB__text__00301648:
  if (local_50 != 0) {
    (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
  }
  return bVar3;
}


