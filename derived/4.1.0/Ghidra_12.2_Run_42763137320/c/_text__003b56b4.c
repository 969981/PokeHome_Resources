/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b56b4; name: FUN_.text__003b56b4
 */


void FUN__text__003b56b4(long param_1,undefined8 *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 *local_50;
  long *local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_14;
  
  *(undefined8 *)(param_1 + 0xc) = *param_2;
  auVar7 = (**(code **)(*param_3 + 0x10))(param_3,0x40,0x10);
  puVar3 = auVar7._0_8_;
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = param_3;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  puVar3[6] = 0;
  *puVar3 = param_3;
  puVar3[1] = 0xfffffffffffffff;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  lVar6 = *(long *)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x20) = puVar3;
  if (lVar6 != 0) {
    plVar1 = *(long **)(lVar6 + 0x30);
    plVar2 = (long *)(lVar6 + 0x10);
    if (plVar1 == plVar2) {
      puVar5 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__003b576c:
      (*(code *)*puVar5)(plVar2,auVar7._8_8_,puVar3);
    }
    else if (plVar1 != (long *)0x0) {
      puVar5 = (undefined8 *)(*plVar1 + 0x28);
      plVar2 = plVar1;
      goto LAB__text__003b576c;
    }
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
              (*(long **)(param_1 + 0x28),lVar6,*(undefined8 *)(param_1 + 0x30),
               *(undefined8 *)(param_1 + 0x38));
    puVar3 = *(undefined8 **)(param_1 + 0x20);
  }
  *(long **)(param_1 + 0x28) = param_3;
  *(undefined8 *)(param_1 + 0x30) = 0x40;
  *(undefined8 *)(param_1 + 0x38) = 0x10;
  local_14 = *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc);
  FUN__text__003b5900(&local_50,param_3,&local_14,puVar3);
  puVar3 = local_50;
  local_50 = (undefined8 *)0x0;
  puVar5 = *(undefined8 **)(param_1 + 0x40);
  *(undefined8 **)(param_1 + 0x40) = puVar3;
  if (puVar5 == (undefined8 *)0x0) {
    *(long **)(param_1 + 0x48) = local_48;
    *(undefined8 *)(param_1 + 0x50) = local_40;
    *(undefined8 *)(param_1 + 0x58) = local_38;
    goto LAB__text__003b58e0;
  }
  if (puVar5[10] != 0) {
    (**(code **)(*(long *)*puVar5 + 0x18))((long *)*puVar5,puVar5[8],puVar5[10] << 4,8);
  }
  plVar1 = (long *)puVar5[6];
  plVar2 = puVar5 + 2;
  if (plVar1 == plVar2) {
    puVar3 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__003b5838:
    (*(code *)*puVar3)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar3 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__003b5838;
  }
  (**(code **)(**(long **)(param_1 + 0x48) + 0x18))
            (*(long **)(param_1 + 0x48),puVar5,*(undefined8 *)(param_1 + 0x50),
             *(undefined8 *)(param_1 + 0x58));
  puVar3 = local_50;
  local_50 = (undefined8 *)0x0;
  *(undefined8 *)(param_1 + 0x58) = local_38;
  *(long **)(param_1 + 0x48) = local_48;
  *(undefined8 *)(param_1 + 0x50) = local_40;
  if (puVar3 == (undefined8 *)0x0) goto LAB__text__003b58e0;
  if (puVar3[10] != 0) {
    (**(code **)(*(long *)*puVar3 + 0x18))((long *)*puVar3,puVar3[8],puVar3[10] << 4,8);
  }
  plVar1 = (long *)puVar3[6];
  plVar2 = puVar3 + 2;
  if (plVar1 == plVar2) {
    puVar5 = (undefined8 *)(*plVar2 + 0x20);
LAB__text__003b58c0:
    (*(code *)*puVar5)(plVar2);
  }
  else if (plVar1 != (long *)0x0) {
    puVar5 = (undefined8 *)(*plVar1 + 0x28);
    plVar2 = plVar1;
    goto LAB__text__003b58c0;
  }
  (**(code **)(*local_48 + 0x18))(local_48,puVar3,local_40,local_38);
LAB__text__003b58e0:
  FUN__text__003b5ab0(param_1);
  return;
}


