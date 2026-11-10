/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c32b0; name: FUN_.text__005c32b0
 */


void FUN__text__005c32b0(long *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  long local_78;
  long lStack_70;
  long local_68;
  long local_60;
  long *local_58;
  
  lVar3 = param_1[1] - *param_1 >> 5;
  uVar7 = lVar3 * 0x6fb586fb586fb587 + 1;
  if (0x253c8253c8253c < uVar7) {
    auVar8 = FUN__text__005c3568(param_1);
    lVar3 = auVar8._8_8_;
    uVar7 = tpidr_el0;
    uVar7 = uVar7 & 0xffffffffffffe000;
    if (*(long *)(uVar7 + 0x98) != 0x10) {
      *(undefined8 *)(uVar7 + *(long *)(uVar7 + 0x98) * 8 + 0x18) = *auVar8._0_8_;
      *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + 1;
      uVar4 = *(ulong *)(param_3 + 0x600);
      *(ulong *)(lVar3 + 0x600) = uVar4;
      if (uVar4 < 4) {
        lVar2 = *(long *)(param_3 + 0x600);
        if (lVar2 != 0) {
          lVar5 = param_3;
          lVar6 = lVar3;
          do {
            lVar2 = lVar2 + -1;
            FUN__text__005bff30(lVar6,lVar5);
            lVar5 = lVar5 + 0x200;
            lVar6 = lVar6 + 0x200;
          } while (lVar2 != 0);
        }
        lVar2 = *(long *)(param_3 + 0x610);
        *(long *)(lVar3 + 0x610) = lVar2;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        lVar2 = *(long *)(param_3 + 0x618);
        *(long *)(lVar3 + 0x618) = lVar2;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        *(undefined4 *)(lVar3 + 0x620) = *(undefined4 *)(param_3 + 0x620);
        lVar2 = *(long *)(param_3 + 0x628);
        *(long *)(lVar3 + 0x628) = lVar2;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        lVar2 = *(long *)(param_3 + 0x630);
        *(long *)(lVar3 + 0x630) = lVar2;
        if (lVar2 != 0) {
          (**(code **)(*(long *)(lVar2 + 0x48) + 0x10))();
        }
        memcpy((void *)(lVar3 + 0x638),(void *)(param_3 + 0x638),0xa4);
        *(long *)(uVar7 + 0x98) = *(long *)(uVar7 + 0x98) + -1;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar1 = param_1 + 3;
  lVar2 = param_1[2] - *param_1 >> 5;
  uVar4 = lVar2 * -0x2094f2094f2094f2;
  if (uVar4 <= uVar7) {
    uVar4 = uVar7;
  }
  if (0x129e4129e4129d < (ulong)(lVar2 * 0x6fb586fb586fb587)) {
    uVar4 = 0x253c8253c8253c;
  }
  local_58 = plVar1;
  if (uVar4 != 0) {
    lVar2 = (**(code **)(*(long *)*plVar1 + 0x10))((long *)*plVar1,uVar4 * 0x6e0,0x10);
    if (lVar2 != 0) goto LAB__text__005c3384;
    (**(code **)(*(long *)*plVar1 + 0xb8))();
  }
  lVar2 = 0;
LAB__text__005c3384:
  lVar6 = lVar2 + lVar3 * 0x20;
  FUN__text__005c3440(plVar1,lVar6,param_2);
  lVar5 = *param_1;
  local_78 = param_1[1];
  lVar3 = lVar6 + 0x6e0;
  if (local_78 == lVar5) {
    local_68 = local_78;
  }
  else {
    do {
      lVar6 = lVar6 + -0x6e0;
      local_78 = local_78 + -0x6e0;
      FUN__text__005c3580(plVar1,lVar6,local_78);
    } while (local_78 != lVar5);
    local_78 = *param_1;
    local_68 = param_1[1];
  }
  local_60 = param_1[2];
  param_1[2] = lVar2 + uVar4 * 0x6e0;
  *param_1 = lVar6;
  param_1[1] = lVar3;
  lStack_70 = local_78;
  FUN__text__005c36a0(&local_78);
  if (local_78 != 0) {
    (**(code **)(*(long *)*local_58 + 0x18))((long *)*local_58,local_78,local_60 - local_78,0x10);
  }
  return;
}


