/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002494b8; name: FUN_.text__002494b8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002494b8(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *local_70;
  long local_68;
  
  if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
LAB__text__00249704:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar5 = *(long **)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  *(long **)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8) = plVar5;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  plVar3 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,&LAB__text__003f0c70,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN__text__001281fc(plVar3,param_2,param_4,uVar6);
  lVar2 = _DAT_008a1bb0;
  *(undefined4 *)(plVar3 + 0xca) = 3;
  plVar3[200] = 0;
  plVar3[0xc9] = 0;
  plVar4 = plVar3 + 9;
  *plVar4 = lVar2 + 0xa8;
  *plVar3 = lVar2 + 0x10;
  plVar3[10] = lVar2 + 0xe8;
  memset(plVar3 + 0xcb,0,0x3d0a3a);
  memset((void *)((long)plVar3 + 0x3d1094),0,50000);
  memset(plVar3 + 0x7ba7d,0,80000);
  plVar3[1] = (long)plVar5;
  plVar3[2] = (long)plVar3;
  *param_1 = plVar3;
  plVar3[3] = (long)&LAB__text__003f0c70;
  plVar3[4] = 0x10;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  (**(code **)(*plVar4 + 0x10))(plVar4);
  local_68 = *param_3;
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x10))();
  }
  FUN__text__00128598(plVar3,&local_68);
  if (local_68 != 0) {
    (**(code **)(*(long *)(local_68 + 0x48) + 0x18))();
    local_68 = 0;
  }
  local_70 = plVar3;
  (**(code **)(plVar3[9] + 0x10))(plVar4);
  puVar1 = *(undefined8 **)(param_2 + 0x80);
  if (puVar1 < *(undefined8 **)(param_2 + 0x88)) {
    if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__00249704;
    *(undefined8 *)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8) = *(undefined8 *)(param_2 + 0x90);
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    *puVar1 = local_70;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    *(undefined8 **)(param_2 + 0x80) = puVar1 + 1;
  }
  else {
    FUN__text__00130fb0(param_2 + 0x78,&local_70);
    if (local_70 != (long *)0x0) {
      (**(code **)(local_70[9] + 0x18))();
    }
  }
  *(undefined1 *)(param_2 + 0xc0) = 0;
  return;
}


