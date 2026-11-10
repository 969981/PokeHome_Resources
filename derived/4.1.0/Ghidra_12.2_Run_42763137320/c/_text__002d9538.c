/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::002d9538; name: FUN_.text__002d9538
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__002d9538(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  
  uVar3 = tpidr_el0;
  uVar3 = uVar3 & 0xffffffffffffe000;
  if (*(long *)(uVar3 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
    FUN__text__00102c10();
  }
  plVar2 = *(long **)(param_1 + 8);
  *(long **)(uVar3 + 0x18 + *(long *)(uVar3 + 0x98) * 8) = plVar2;
  *(long *)(uVar3 + 0x98) = *(long *)(uVar3 + 0x98) + 1;
  puVar1 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x60,8);
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
    _DAT_00000058 = 0;
    uRam0000000000000000 = 0;
    _DAT_00000050 = 0;
    _DAT_00000048 = 0;
    _DAT_00000040 = 0;
    _DAT_00000038 = 0;
    _DAT_00000030 = 0;
    _DAT_00000028 = 0;
    _DAT_00000020 = 0;
    _DAT_00000018 = 0;
    _DAT_00000010 = 0;
    _DAT_00000008 = 0;
                    /* WARNING: Subroutine does not return */
    FUN__text__00110090();
  }
  *puVar1 = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[9] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
                    /* WARNING: Subroutine does not return */
  FUN__text__00110090();
}


