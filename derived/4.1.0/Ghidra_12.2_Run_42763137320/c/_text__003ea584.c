/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003ea584; name: FUN_.text__003ea584
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003ea584(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  ulong uVar8;
  long local_58;
  long local_38;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x48;
  }
  FUN__text__005a7b0c(param_1,lVar1,1);
  lVar5 = _DAT_008a52e0;
  *param_1 = _DAT_008a52e0 + 0x10;
  param_1[9] = lVar5 + 0x68;
  param_1[10] = lVar5 + 0xa8;
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) != 0x10) {
    plVar7 = (long *)param_1[1];
    *(long **)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8) = plVar7;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
    lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0x2f0,0x10);
    if (lVar5 == 0) {
      (**(code **)(*plVar7 + 0xb8))(plVar7);
    }
    FUN__text__005e217c(lVar5,lVar1,1);
    *(long **)(lVar5 + 8) = plVar7;
    *(long *)(lVar5 + 0x10) = lVar5;
    *(undefined8 *)(lVar5 + 0x18) = 0x2f0;
    *(undefined8 *)(lVar5 + 0x20) = 0x10;
    *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
    FUN__text__005e706c(lVar5);
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48));
    pcVar6 = *(code **)(lVar5 + 0x278);
    if (pcVar6 != (code *)0x0) {
      *(undefined8 *)(lVar5 + 0x280) = 0;
      *(undefined8 *)(lVar5 + 0x288) = 0;
      *(undefined8 *)(lVar5 + 0x270) = 0;
      *(undefined8 *)(lVar5 + 0x278) = 0;
      (*pcVar6)(lVar5 + 0x290);
    }
    uVar2 = _DAT_008a52e8;
    *(long *)(lVar5 + 0x290) = param_2;
    uVar4 = _DAT_008a52f8;
    uVar3 = _DAT_008a52f0;
    *(undefined8 *)(lVar5 + 0x270) = uVar2;
    *(undefined8 *)(lVar5 + 0x278) = uVar3;
    uVar2 = _DAT_008a5300;
    *(undefined8 *)(lVar5 + 0x280) = uVar4;
    *(undefined8 *)(lVar5 + 0x288) = uVar2;
    local_38 = lVar5;
    FUN__text__005e733c(param_1,&local_38);
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
    }
    if (*(long *)(uVar8 + 0x98) != 0x10) {
      plVar7 = (long *)param_1[1];
      *(long **)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8) = plVar7;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
      lVar5 = (**(code **)(*plVar7 + 0x10))(plVar7,0x2f0,0x10);
      if (lVar5 == 0) {
        (**(code **)(*plVar7 + 0xb8))(plVar7);
      }
      FUN__text__005e217c(lVar5,lVar1,1);
      *(long **)(lVar5 + 8) = plVar7;
      *(long *)(lVar5 + 0x10) = lVar5;
      *(undefined8 *)(lVar5 + 0x18) = 0x2f0;
      *(undefined8 *)(lVar5 + 0x20) = 0x10;
      *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
      FUN__text__005e706c(lVar5);
      (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))((long *)(lVar5 + 0x48));
      pcVar6 = *(code **)(lVar5 + 0x278);
      if (pcVar6 != (code *)0x0) {
        *(undefined8 *)(lVar5 + 0x280) = 0;
        *(undefined8 *)(lVar5 + 0x288) = 0;
        *(undefined8 *)(lVar5 + 0x270) = 0;
        *(undefined8 *)(lVar5 + 0x278) = 0;
        (*pcVar6)(lVar5 + 0x290);
      }
      uVar2 = _DAT_008a5308;
      *(long *)(lVar5 + 0x290) = param_2;
      uVar4 = _DAT_008a5318;
      uVar3 = _DAT_008a5310;
      *(undefined8 *)(lVar5 + 0x270) = uVar2;
      *(undefined8 *)(lVar5 + 0x278) = uVar3;
      uVar2 = _DAT_008a5320;
      *(undefined8 *)(lVar5 + 0x280) = uVar4;
      *(undefined8 *)(lVar5 + 0x288) = uVar2;
      local_58 = lVar5;
      FUN__text__005e7474(param_1,&local_58);
      if (local_58 != 0) {
        (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
      }
      *(undefined4 *)(param_1 + 0x4d) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN__text__00102c10();
}


