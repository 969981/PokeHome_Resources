/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006f5584; name: FUN_.text__006f5584
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN__text__006f5584(long param_1,undefined4 *param_2,long param_3,long param_4)

{
  int iVar1;
  
  iVar1 = (*(code *)*_DAT_008a7250)
                    (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_3 + 8),param_2);
  *(undefined4 *)(param_1 + 0x194) = *param_2;
  if (param_4 != 0) {
    *(undefined8 *)(param_4 + 8) = *(undefined8 *)(param_3 + 8);
  }
  *(byte *)(param_1 + 0x191) = *(byte *)(param_1 + 0x191) | 2;
  return iVar1 != 0;
}


