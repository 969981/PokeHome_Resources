/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0039bc40; name: FUN_.text__0039bc40
 */


void FUN__text__0039bc40(long param_1,ulong *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar4 = *(ulong *)(param_1 + 0x100);
  if (uVar4 != 0) {
    uVar3 = *param_2;
    uVar5 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar4 - 1 & uVar3;
    }
    else {
      uVar6 = uVar3;
      if (uVar4 <= uVar3) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar3 / uVar4;
        }
        uVar6 = uVar3 - uVar6 * uVar4;
      }
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0xf8) + uVar6 * 8);
    if ((plVar7 != (long *)0x0) && (plVar7 = (long *)*plVar7, plVar7 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar7[1] == uVar3) {
            if (plVar7[2] == uVar3) {
              return;
            }
          }
          else if ((plVar7[1] & uVar4 - 1) != uVar6) break;
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
      else {
        do {
          uVar5 = plVar7[1];
          if (uVar5 == uVar3) {
            if (plVar7[2] == uVar3) {
              return;
            }
          }
          else {
            if (uVar4 <= uVar5) {
              uVar1 = 0;
              if (uVar4 != 0) {
                uVar1 = uVar5 / uVar4;
              }
              uVar5 = uVar5 - uVar1 * uVar4;
            }
            if (uVar5 != uVar6) break;
          }
          plVar7 = (long *)*plVar7;
        } while (plVar7 != (long *)0x0);
      }
    }
  }
  plVar7 = *(long **)(param_1 + 0x98);
  lVar2 = (**(code **)(*plVar7 + 0x10))(plVar7,0x170,8);
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar7;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  FUN__text__00396650(lVar2,*(undefined8 *)(param_1 + 0x98),*param_3,param_3[1],param_3[2]);
  local_60 = 0x170;
  local_58 = 8;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  local_70 = lVar2;
  local_68 = plVar7;
  FUN__text__0039e9a0((long *)(param_1 + 0xf8),param_2,param_2,&local_70);
  lVar2 = local_70;
  local_70 = 0;
  if (lVar2 != 0) {
    FUN__text__00396980(lVar2);
    (**(code **)(*local_68 + 0x18))(local_68,lVar2,local_60,local_58);
  }
  return;
}


