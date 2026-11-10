/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::006ed020; name: FUN_.text__006ed020
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__006ed020(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 8);
    if ((*(byte *)(param_2 + 1) & 1) == 0) {
      uVar1 = *(undefined4 *)(param_2 + 4);
      goto LAB__text__006ed058;
    }
  }
  uVar1 = FUN__text__006f2370(param_3);
LAB__text__006ed058:
                    /* WARNING: Could not recover jumptable at 0x006ed074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*_DAT_008a6e60)(*(undefined8 *)(param_1 + 0xb0),uVar2,uVar1);
  return;
}


