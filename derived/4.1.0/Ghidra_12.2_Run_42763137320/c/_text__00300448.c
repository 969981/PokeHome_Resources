/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00300448; name: FUN_.text__00300448
 */


void FUN__text__00300448(long *param_1,long param_2,uint param_3,uint param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long local_48;
  undefined8 local_28;
  
  local_28 = param_5;
  FUN__text__002a32ac(&local_48,param_5,&local_28);
  FUN__text__002a33c8(param_1,local_28,&local_48);
  lVar4 = *param_1;
  if (lVar4 == 0) {
    if ((299 < param_3) || (0x1d < param_4)) goto LAB__text__0030055c;
LAB__text__003004e4:
    lVar5 = param_2 + (ulong)param_3 * 0x5fa0 + (ulong)param_4 * 0x330;
    FUN__text__00306b04(lVar4,lVar5 + 0x58);
    uVar1 = *(undefined8 *)(lVar5 + 0x2f8);
    *(undefined8 *)(lVar4 + 0x60) = *(undefined8 *)(lVar5 + 0x2f0);
    *(undefined8 *)(lVar4 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)(lVar5 + 0x300);
    uVar2 = *(undefined8 *)(lVar5 + 0x308);
    uVar3 = *(undefined8 *)(lVar5 + 0x318);
    *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(lVar5 + 0x310);
    *(undefined8 *)(lVar4 + 0x88) = uVar3;
    *(undefined8 *)(lVar4 + 0x70) = uVar1;
    *(undefined8 *)(lVar4 + 0x78) = uVar2;
    uVar1 = *(undefined8 *)(lVar5 + 0x328);
    uVar2 = *(undefined8 *)(lVar5 + 0x330);
    uVar3 = *(undefined8 *)(lVar5 + 0x338);
    *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(lVar5 + 800);
    *(undefined8 *)(lVar4 + 0x98) = uVar1;
    *(undefined8 *)(lVar4 + 0xa0) = uVar2;
    *(undefined8 *)(lVar4 + 0xa8) = uVar3;
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))();
  }
  else {
    plVar6 = (long *)(lVar4 + 0x48);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    if ((param_3 < 300) && (param_4 < 0x1e)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      goto LAB__text__003004e4;
    }
  }
  (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
LAB__text__0030055c:
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
  }
  return;
}


