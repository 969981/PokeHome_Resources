/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00223094; name: FUN_.text__00223094
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00223094(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *local_68;
  long local_48;
  
  if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl();
  }
  uVar7 = tpidr_el0;
  uVar7 = uVar7 & 0xffffffffffffe000;
  if (*(long *)(uVar7 + 0x98) == 0x10) {
LAB__text__002232b8:
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar5 = *(long **)(param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0xa8);
  *(long **)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8) = plVar5;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
  plVar3 = (long *)(**(code **)(*plVar5 + 0x10))(plVar5,0x720,0x10);
  if (plVar3 == (long *)0x0) {
    (**(code **)(*plVar5 + 0xb8))(plVar5);
  }
  FUN__text__001281fc(plVar3,param_2,param_4,uVar6);
  lVar2 = _DAT_008a1900;
  plVar3[200] = 0;
  plVar3[0xc9] = 0;
  plVar3[0xca] = 0;
  plVar3[0xcb] = 0;
  plVar3[0xd8] = 0;
  plVar3[0xd9] = 0;
  plVar3[0xda] = 0;
  plVar3[0xdb] = 0;
  *param_1 = plVar3;
  plVar4 = plVar3 + 9;
  *plVar4 = lVar2 + 0xa8;
  plVar3[10] = lVar2 + 0xe8;
  *(undefined4 *)(plVar3 + 0xdc) = 9999;
  *plVar3 = lVar2 + 0x10;
  plVar3[1] = (long)plVar5;
  *(undefined8 *)((long)plVar3 + 0x6e4) = 0;
  *(undefined8 *)((long)plVar3 + 0x6ec) = 0;
  *(undefined8 *)((long)plVar3 + 0x6f4) = 0;
  *(undefined8 *)((long)plVar3 + 0x6fc) = 0;
  *(undefined8 *)((long)plVar3 + 0x704) = 0;
  *(undefined8 *)((long)plVar3 + 0x70c) = 0;
  *(undefined8 *)((long)plVar3 + 0x712) = 0;
  plVar3[4] = 0x10;
  plVar3[2] = (long)plVar3;
  plVar3[3] = 0x720;
  *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
  (**(code **)(*plVar4 + 0x10))(plVar4);
  local_48 = *param_3;
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x10))();
  }
  FUN__text__00128598(plVar3,&local_48);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  local_68 = plVar3;
  (**(code **)(plVar3[9] + 0x10))(plVar4);
  puVar1 = *(undefined8 **)(param_2 + 0x80);
  if (puVar1 < *(undefined8 **)(param_2 + 0x88)) {
    if (*(long *)(uVar7 + 0x98) == 0x10) goto LAB__text__002232b8;
    *(undefined8 *)(uVar7 + 0x18 + *(long *)(uVar7 + 0x98) * 8) = *(undefined8 *)(param_2 + 0x90);
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
    *puVar1 = local_68;
    *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
    *(undefined8 **)(param_2 + 0x80) = puVar1 + 1;
  }
  else {
    FUN__text__00130fb0(param_2 + 0x78,&local_68);
    if (local_68 != (long *)0x0) {
      (**(code **)(local_68[9] + 0x18))();
    }
  }
  *(undefined1 *)(param_2 + 0xc0) = 0;
  return;
}


