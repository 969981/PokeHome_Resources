/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003f2afc; name: FUN_.text__003f2afc
 */


bool FUN__text__003f2afc(undefined8 *param_1,long param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = (**(code **)(*(long *)*param_1 + 0x10))
                    ((long *)*param_1,*(undefined8 *)(param_2 + 8),&local_4);
  if (iVar1 == 1) {
    *param_3 = local_4;
  }
  return iVar1 == 1;
}


