/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003adb0c; name: FUN_.text__003adb0c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__003adb0c(long param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  
  local_44 = 0;
  plVar6 = *(long **)(param_1 + 8);
  local_48 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x84c));
  local_38 = 0;
  local_34 = 0;
  local_3c = 0x3d23d70a;
  local_40 = (float)*(int *)(*(long *)(param_1 + 0x800) + 0xc);
  uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,0x1f0,0x10);
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = plVar6;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  FUN__text__003b90e4(uVar4,&local_48);
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
  puVar9 = *(undefined8 **)(param_1 + 0x748);
  *(undefined8 *)(param_1 + 0x748) = uVar4;
  if (puVar9 != (undefined8 *)0x0) {
    (**(code **)*puVar9)(puVar9);
    (**(code **)(**(long **)(param_1 + 0x750) + 0x18))
              (*(long **)(param_1 + 0x750),puVar9,*(undefined8 *)(param_1 + 0x758),
               *(undefined8 *)(param_1 + 0x760));
  }
  *(long **)(param_1 + 0x750) = plVar6;
  *(undefined8 *)(param_1 + 0x758) = 0x1f0;
  lVar7 = *(long *)(param_1 + 0x748);
  *(undefined8 *)(param_1 + 0x760) = 0x10;
  uVar3 = _DAT_008a35b8;
  pcVar2 = _DAT_008a35b0;
  pcVar1 = _DAT_008a35a8;
  uVar4 = _DAT_008a35a0;
  local_a0 = 0;
  pcVar5 = *(code **)(lVar7 + 0x128);
  uStack_a8 = _DAT_008a3598;
  local_b0 = param_1;
  if (pcVar5 != (code *)0x0) {
    *(undefined8 *)(lVar7 + 0x130) = 0;
    *(undefined8 *)(lVar7 + 0x138) = 0;
    *(undefined8 *)(lVar7 + 0x120) = 0;
    *(undefined8 *)(lVar7 + 0x128) = 0;
    (*pcVar5)(lVar7 + 0x140);
    if (pcVar2 == (code *)0x0) goto LAB__text__003adc84;
  }
  (*pcVar2)(&local_b0,lVar7 + 0x140);
  *(undefined8 *)(lVar7 + 0x120) = uVar4;
  *(code **)(lVar7 + 0x128) = pcVar1;
  *(code **)(lVar7 + 0x130) = pcVar2;
  *(undefined8 *)(lVar7 + 0x138) = uVar3;
LAB__text__003adc84:
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(&local_b0);
  }
  return;
}


