/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001321b4; name: FUN_.text__001321b4
 */


void FUN__text__001321b4(long param_1,long param_2)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  code *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  long alStack_a0 [12];
  undefined8 local_28;
  
  alStack_a0[0] = param_1;
  if ((param_2 == 0) || (*(long *)(param_1 + 0x670) != 0)) {
    if (*(long *)(param_1 + 0x650) != 0) {
      return;
    }
    plVar6 = *(long **)(param_1 + 8);
    local_c0 = FUN__text__001327ec;
    local_b8 = FUN__text__00132830;
    local_b0 = &LAB__text__00132834;
    local_a8 = &LAB__text__00132840;
    plVar2 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x110,0x10);
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) goto LAB__text__001324e8;
    *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar6;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *(undefined4 *)(plVar2 + 0x1c) = 0;
    plVar2[0x1d] = 0;
    plVar2[10] = 0;
    plVar2[2] = param_1 + 0x110;
    plVar2[3] = 0;
    *(undefined1 *)(plVar2 + 0xb) = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    *(undefined8 *)((long)plVar2 + 0x5c) = 0;
    plVar2[8] = 0;
    plVar2[9] = 0;
    *(undefined8 *)((long)plVar2 + 100) = 0;
    *(undefined8 *)((long)plVar2 + 0x6c) = 0;
    *(undefined8 *)((long)plVar2 + 0x74) = 0;
    *(undefined4 *)((long)plVar2 + 0x7c) = 0;
    *(undefined4 *)((long)plVar2 + 0xf6) = 0;
    plVar2[0x20] = 0;
    plVar2[0x21] = 0;
    *plVar2 = 0x8697e0;
    plVar2[1] = param_1;
    *(undefined4 *)(plVar2 + 0x1e) = 4;
    *(undefined1 *)((long)plVar2 + 0xf4) = 1;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    (**(code **)(*plVar2 + 0x10))();
    puVar7 = *(undefined8 **)(param_1 + 0x650);
    *(long **)(param_1 + 0x650) = plVar2;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
      (**(code **)(**(long **)(param_1 + 0x658) + 0x18))
                (*(long **)(param_1 + 0x658),puVar7,*(undefined8 *)(param_1 + 0x660),
                 *(undefined8 *)(param_1 + 0x668));
      plVar2 = *(long **)(param_1 + 0x650);
    }
    *(long **)(param_1 + 0x658) = plVar6;
    *(undefined8 *)(param_1 + 0x660) = 0x110;
    *(undefined8 *)(param_1 + 0x668) = 0x10;
    FUN__text__00133038(plVar2,&local_c0);
    pcVar1 = local_b8;
  }
  else {
    plVar6 = *(long **)(param_1 + 8);
    local_c0 = FUN__text__0013278c;
    local_b8 = FUN__text__001327d0;
    local_b0 = &LAB__text__001327d4;
    local_a8 = &LAB__text__001327e0;
    plVar2 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6,0x110,0x10);
    uVar4 = tpidr_el0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    if (*(long *)(uVar4 + 0x98) == 0x10) {
LAB__text__001324e8:
                    /* WARNING: Subroutine does not return */
      FUN__text__00102c10();
    }
    *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar6;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
    *(undefined4 *)((long)plVar2 + 0x54) = 0;
    plVar2[0xc] = 0;
    plVar2[0xd] = 0;
    plVar2[0xe] = 0;
    plVar2[0xf] = 0;
    *(undefined4 *)(plVar2 + 0x1c) = 0;
    plVar2[2] = param_1 + 0x110;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    *(undefined1 *)(plVar2 + 10) = 0;
    plVar2[6] = 0;
    plVar2[7] = 0;
    *(undefined4 *)((long)plVar2 + 0xe6) = 0;
    plVar2[0x1e] = 0;
    plVar2[8] = 0;
    plVar2[9] = 0;
    plVar2[0x1f] = 0;
    plVar2[0x20] = 0;
    *plVar2 = 0x869808;
    plVar2[1] = param_1;
    *(undefined1 *)((long)plVar2 + 0xe4) = 1;
    *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
    (**(code **)(*plVar2 + 0x10))();
    puVar7 = *(undefined8 **)(param_1 + 0x670);
    *(long **)(param_1 + 0x670) = plVar2;
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7);
      (**(code **)(**(long **)(param_1 + 0x678) + 0x18))
                (*(long **)(param_1 + 0x678),puVar7,*(undefined8 *)(param_1 + 0x680),
                 *(undefined8 *)(param_1 + 0x688));
      plVar2 = *(long **)(param_1 + 0x670);
    }
    *(long **)(param_1 + 0x678) = plVar6;
    *(undefined8 *)(param_1 + 0x680) = 0x110;
    *(undefined8 *)(param_1 + 0x688) = 0x10;
    FUN__text__00133ab8(plVar2,&local_c0);
    lVar5 = *(long *)(param_1 + 0x670);
    FUN__text__00109fd4(&local_28,param_2);
    lVar3 = *(long *)(lVar5 + 0x100);
    if (lVar3 != 0) {
      (**(code **)(*(long *)(lVar3 + 0x48) + 0x18))();
    }
    *(undefined8 *)(lVar5 + 0x100) = local_28;
    pcVar1 = local_b8;
  }
  if (pcVar1 == (code *)0x0) {
    return;
  }
  local_b0 = (undefined1 *)0x0;
  local_a8 = (undefined1 *)0x0;
  local_c0 = (code *)0x0;
  local_b8 = (code *)0x0;
  (*pcVar1)(alStack_a0);
  return;
}


