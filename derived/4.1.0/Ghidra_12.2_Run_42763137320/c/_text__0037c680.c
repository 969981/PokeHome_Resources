/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0037c680; name: FUN_.text__0037c680
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0037c680(long param_1)

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
  puVar1 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,200,8);
  if (puVar1 == (undefined8 *)0x0) {
    (**(code **)(*plVar2 + 0xb8))(plVar2);
    _DAT_000000c0 = 0;
    uRam0000000000000000 = 0;
    _DAT_000000b8 = 0;
    _DAT_000000b0 = 0;
    _DAT_000000a8 = 0;
    _DAT_000000a0 = 0;
    _DAT_00000098 = 0;
    _DAT_00000090 = 0;
    _DAT_00000088 = 0;
    _DAT_00000080 = 0;
    _DAT_00000078 = 0;
    _DAT_00000070 = 0;
    _DAT_00000068 = 0;
    _DAT_00000060 = 0;
    _DAT_00000058 = 0;
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
  puVar1[10] = 0;
  puVar1[0x17] = 0;
  puVar1[0x18] = 0;
  *puVar1 = 0;
  puVar1[9] = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
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


