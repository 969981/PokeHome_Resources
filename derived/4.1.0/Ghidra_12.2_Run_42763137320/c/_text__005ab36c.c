/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005ab36c; name: FUN_.text__005ab36c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__005ab36c(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar8 = tpidr_el0;
  uVar8 = uVar8 & 0xffffffffffffe000;
  if (*(long *)(uVar8 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar8 + *(long *)(uVar8 + 0x98) * 8 + 0x18) = param_1;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + 1;
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,0x58,8);
  if (plVar4 == (long *)0x0) {
    lVar5 = (**(code **)(*param_1 + 0xb8))(param_1);
    uVar6 = 0;
    if (*(long *)(lVar5 + 0x50) != 0) {
      uVar6 = (**(code **)(*(long *)(*(long *)(lVar5 + 0x50) + 0x48) + 0x18))();
      *(undefined8 *)(lVar5 + 0x50) = 0;
    }
    return uVar6;
  }
  *_DAT_008a56f0 = 1;
  lVar5 = _DAT_008a56f8;
  plVar4[6] = 0;
  plVar4[7] = 0;
  plVar4[10] = 0;
  plVar4[8] = 0;
  plVar4[9] = lVar5 + 0x40;
  *plVar4 = lVar5 + 0x10;
  plVar4[1] = (long)param_1;
  plVar4[2] = (long)plVar4;
  plVar4[3] = 0x58;
  plVar4[4] = 8;
  plVar4[5] = 0;
  puVar3 = _DAT_0089fd80;
  *(long *)(uVar8 + 0x98) = *(long *)(uVar8 + 0x98) + -1;
  puVar7 = (undefined8 *)*puVar3;
  *puVar3 = plVar4;
  if (puVar7 != (undefined8 *)0x0) {
    plVar4 = (long *)puVar7[1];
    uVar6 = puVar7[2];
    uVar2 = puVar7[3];
    uVar9 = puVar7[4];
    (**(code **)*puVar7)(puVar7);
    (**(code **)(*plVar4 + 0x18))(plVar4,uVar6,uVar2,uVar9);
    plVar4 = (long *)*puVar3;
  }
  plVar1 = (long *)0x0;
  if (plVar4 != (long *)0x0) {
    plVar1 = plVar4 + 9;
  }
  FUN__text__005e914c(plVar1);
  return *puVar3;
}


