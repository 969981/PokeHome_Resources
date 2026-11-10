/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0030ded4; name: FUN_.text__0030ded4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0030ded4(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8) = param_2;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  plVar5 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0xf000a8,8);
  if (plVar5 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  lVar6 = *param_3;
  lVar1 = *param_4;
  lVar2 = param_4[1];
  plVar5[7] = 0;
  *(undefined4 *)(plVar5 + 8) = 0;
  lVar3 = _DAT_0089f690;
  *(undefined4 *)(plVar5 + 6) = 0;
  plVar5[2] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  plVar5[5] = 0;
  *plVar5 = lVar3 + 0x10;
  lVar3 = _DAT_008a2b90;
  if (uVar8 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if (*(long *)(uVar8 + 0x98) != 0) {
      lVar7 = *(long *)(uVar8 + 0x18 + *(long *)(uVar8 + 0x98) * 8 + -8);
    }
  }
  plVar5[0xb] = 0;
  puVar4 = _DAT_008a2b98;
  *(undefined4 *)(plVar5 + 0xc) = 0;
  plVar5[0xd] = lVar1;
  plVar5[0xe] = lVar2;
  *puVar4 = 1;
  *plVar5 = lVar3 + 0x10;
  plVar5[1] = lVar7;
  plVar5[9] = lVar3 + 0x40;
  plVar5[10] = lVar6;
  nn::os::InitializeLightEvent(plVar5 + 0xf,0,1);
  nn::os::InitializeLightEvent((long)plVar5 + 0x84,0,1);
  memset(plVar5 + 0x12,0,0xf00002);
  *(undefined8 *)((long)plVar5 + 0xf00094) = 0;
  *(undefined8 *)((long)plVar5 + 0xf0009c) = 0;
  plVar5[1] = (long)param_2;
  plVar5[2] = (long)plVar5;
  plVar5[3] = 0xf000a8;
  plVar5[4] = 8;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
  return plVar5;
}


