/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00601750; name: FUN_.text__00601750
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00601750(long *param_1,long *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar1 = _DAT_008a5d60;
  plVar5 = param_1 + 1;
  *plVar5 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(char *)(param_1 + 5) = (char)param_3;
  *(undefined1 *)((long)param_1 + 0x29) = 0;
  *param_1 = lVar1 + 0x10;
  lVar1 = (**(code **)(*param_2 + 0x10))(param_2,(ulong)param_3 * 0x1a0,8);
  uVar6 = tpidr_el0;
  uVar6 = uVar6 & 0xffffffffffffe000;
  if (*(long *)(uVar6 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar6 + *(long *)(uVar6 + 0x98) * 8 + 0x18) = param_2;
  lVar2 = *(long *)(uVar6 + 0x98);
  *(long *)(uVar6 + 0x98) = lVar2 + 1;
  if (param_3 != 0) {
    uVar7 = (ulong)param_3;
    lVar2 = lVar1;
    do {
      FUN__text__006014f0(lVar2);
      uVar7 = uVar7 - 1;
      lVar2 = lVar2 + 0x1a0;
    } while (uVar7 != 0);
    lVar2 = *(long *)(uVar6 + 0x98) + -1;
  }
  *(long *)(uVar6 + 0x98) = lVar2;
  puVar4 = (undefined8 *)*plVar5;
  *plVar5 = lVar1;
  if (puVar4 != (undefined8 *)0x0) {
    uVar6 = param_1[3];
    if (0x19f < uVar6) {
      uVar6 = uVar6 / 0x1a0;
      puVar3 = puVar4;
      do {
        (**(code **)*puVar3)(puVar3);
        uVar6 = uVar6 - 1;
        puVar3 = puVar3 + 0x34;
      } while (uVar6 != 0);
      uVar6 = param_1[3];
    }
    (**(code **)(*(long *)param_1[2] + 0x18))((long *)param_1[2],puVar4,uVar6,param_1[4]);
  }
  param_1[2] = (long)param_2;
  param_1[3] = (ulong)param_3 * 0x1a0;
  param_1[4] = 8;
  return;
}


