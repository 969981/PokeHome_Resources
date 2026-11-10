/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0021e74c; name: FUN_.text__0021e74c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN__text__0021e74c(undefined8 param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long local_48;
  long local_28;
  
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  *(long **)(uVar3 + *(long *)(uVar3 + 0x98) * 8 + 0x18) = param_2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  plVar2 = (long *)(**(code **)(*param_2 + 0x10))(param_2,0x1f8,8);
  if (plVar2 == (long *)0x0) {
    (**(code **)(*param_2 + 0xb8))(param_2);
  }
  local_28 = *param_3;
  *param_3 = 0;
  local_48 = *param_4;
  *param_4 = 0;
  FUN__text__0012566c(plVar2,&local_28,&local_48);
  lVar1 = _DAT_008a18b8;
  *(undefined4 *)(plVar2 + 0x11) = 0;
  plVar2[0xf] = 0;
  plVar2[0x10] = 0;
  plVar2[0x12] = 0;
  plVar2[0x13] = 0;
  *(undefined4 *)(plVar2 + 0x14) = 0;
  *(undefined4 *)(plVar2 + 0x17) = 0;
  *(undefined4 *)(plVar2 + 0x1a) = 0;
  *(undefined4 *)(plVar2 + 0x1d) = 0;
  *plVar2 = lVar1 + 0x10;
  plVar2[0x15] = 0;
  plVar2[0x16] = 0;
  plVar2[9] = lVar1 + 0x78;
  plVar2[10] = lVar1 + 0xb8;
  plVar2[0x18] = 0;
  plVar2[0x19] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1c] = 0;
  memset(plVar2 + 0x1e,0,0x104);
  if (local_48 != 0) {
    (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
    local_48 = 0;
  }
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
  }
  plVar2[1] = (long)param_2;
  plVar2[2] = (long)plVar2;
  plVar2[3] = 0x1f8;
  plVar2[4] = 8;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + -1;
  return plVar2;
}


