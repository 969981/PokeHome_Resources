/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002ea840; name: FUN_.text__002ea840
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002ea840(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  
  FUN__text__002eb310();
  lVar1 = _DAT_008a2850;
  plVar3 = param_1 + 0xd;
  *plVar3 = 0;
  *(undefined4 *)((long)param_1 + 0x6f) = 0;
  *param_1 = lVar1 + 0x10;
  param_1[9] = lVar1 + 0xd8;
  param_1[10] = lVar1 + 0x118;
  param_1[0xc] = lVar1 + 0x140;
  uVar4 = tpidr_el0;
  uVar4 = uVar4 & 0xffffffffffffe000;
  if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar2 = (long *)param_1[1];
  *(long **)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = plVar2;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
  lVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,0x310,8);
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
  }
  FUN__text__006374c0(lVar1,plVar2,param_2);
  *(long **)(lVar1 + 8) = plVar2;
  *(long *)(lVar1 + 0x10) = lVar1;
  *(undefined8 *)(lVar1 + 0x18) = 0x310;
  *(undefined8 *)(lVar1 + 0x20) = 8;
  *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
  (**(code **)(*(long *)(lVar1 + 0x48) + 0x10))();
  if (*plVar3 != 0) {
    (**(code **)(*(long *)(*plVar3 + 0x48) + 0x18))();
  }
  *plVar3 = lVar1;
  return;
}


