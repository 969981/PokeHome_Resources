/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005c6ff8; name: FUN_.text__005c6ff8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__005c6ff8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  ulong uVar9;
  long local_28;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_2 + 0x48;
  }
  FUN__text__005a7b0c(param_1,lVar1,1);
  lVar6 = _DAT_008a58b8;
  *param_1 = _DAT_008a58b8 + 0x10;
  param_1[9] = lVar6 + 0x68;
  param_1[10] = lVar6 + 0xa8;
  uVar9 = tpidr_el0;
  uVar9 = uVar9 & 0xffffffffffffe000;
  if (*(long *)(uVar9 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar8 = (long *)param_1[1];
  *(long **)(uVar9 + *(long *)(uVar9 + 0x98) * 8 + 0x18) = plVar8;
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + 1;
  lVar6 = (**(code **)(*plVar8 + 0x10))(plVar8,0x2f0,0x10);
  if (lVar6 == 0) {
    (**(code **)(*plVar8 + 0xb8))(plVar8);
  }
  FUN__text__005e217c(lVar6,lVar1,1);
  *(long **)(lVar6 + 8) = plVar8;
  *(long *)(lVar6 + 0x10) = lVar6;
  *(undefined8 *)(lVar6 + 0x18) = 0x2f0;
  *(undefined8 *)(lVar6 + 0x20) = 0x10;
  *(long *)(uVar9 + 0x98) = *(long *)(uVar9 + 0x98) + -1;
  FUN__text__005e706c(lVar6);
  (**(code **)(*(long *)(lVar6 + 0x48) + 0x10))((long *)(lVar6 + 0x48));
  pcVar7 = *(code **)(lVar6 + 0x278);
  if (pcVar7 != (code *)0x0) {
    *(undefined8 *)(lVar6 + 0x280) = 0;
    *(undefined8 *)(lVar6 + 0x288) = 0;
    *(undefined8 *)(lVar6 + 0x270) = 0;
    *(undefined8 *)(lVar6 + 0x278) = 0;
    (*pcVar7)(lVar6 + 0x290);
  }
  uVar3 = _DAT_008a58c8;
  uVar2 = _DAT_008a58c0;
  *(long **)(lVar6 + 0x290) = param_1;
  uVar4 = _DAT_008a58d0;
  *(undefined8 *)(lVar6 + 0x2a0) = 0;
  uVar5 = _DAT_008a58d8;
  *(undefined8 *)(lVar6 + 0x298) = uVar2;
  *(undefined8 *)(lVar6 + 0x270) = uVar3;
  *(undefined8 *)(lVar6 + 0x278) = uVar4;
  uVar2 = _DAT_008a58e0;
  *(undefined8 *)(lVar6 + 0x280) = uVar5;
  *(undefined4 *)(lVar6 + 0x268) = 0;
  *(undefined8 *)(lVar6 + 0x288) = uVar2;
  local_28 = lVar6;
  FUN__text__005e733c(param_1,&local_28);
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  return;
}


