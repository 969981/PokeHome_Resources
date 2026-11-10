/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002c50e4; name: FUN_.text__002c50e4
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002c50e4(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  lVar2 = _DAT_0089f690;
  uVar1 = tpidr_el0;
  uVar1 = uVar1 & 0xffffffffffffe000;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = lVar2 + 0x10;
  lVar2 = _DAT_008a2558;
  if (uVar1 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = 0;
    if (*(long *)(uVar1 + 0x98) != 0) {
      lVar4 = *(long *)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x10);
    }
  }
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  plVar6 = param_1 + 0xb;
  *plVar6 = 0;
  param_1[0xe] = 0;
  *param_1 = lVar2 + 0x10;
  param_1[1] = lVar4;
  param_1[9] = lVar2 + 0x48;
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x48,8);
  if (*(long *)(uVar1 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar1 + *(long *)(uVar1 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + 1;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[8] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  *puVar3 = 0x87ac40;
  puVar3[1] = 0;
  *(long *)(uVar1 + 0x98) = *(long *)(uVar1 + 0x98) + -1;
  puVar5 = (undefined8 *)*plVar6;
  *plVar6 = (long)puVar3;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5);
    (**(code **)(*(long *)param_1[0xc] + 0x18))
              ((long *)param_1[0xc],puVar5,param_1[0xd],param_1[0xe]);
  }
  param_1[0xc] = (long)param_2;
  param_1[0xd] = 0x48;
  param_1[0xe] = 8;
  return;
}


