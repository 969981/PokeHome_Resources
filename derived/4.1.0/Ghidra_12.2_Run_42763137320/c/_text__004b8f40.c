/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b8f40; name: FUN_.text__004b8f40
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN__text__004b8f40(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  *(long *)(param_1 + 0xd8) = param_3;
  puVar1 = _DAT_008a4648;
  if ((param_3 != 0) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN__text__0042f5a0(*_DAT_008a4648);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  if ((param_2 == 0) ||
     (uVar2 = FUN__text__0042f400(*puVar1,param_2,*(undefined8 *)(param_1 + 0xd8)), (int)uVar2 == 1)
     ) {
    uVar2 = 1;
    *(long *)(param_1 + 0x48) = param_2;
  }
  return uVar2;
}


