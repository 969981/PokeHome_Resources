/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015536c; name: FUN_.text__0015536c
 */


bool FUN__text__0015536c(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((piVar1 == (int *)0x0 || *(int *)(param_1 + 1) == -1) ||
     (*(ushort *)((long)piVar1 - (long)*piVar1) < 5)) {
    return false;
  }
  return ((ushort *)((long)piVar1 - (long)*piVar1))[2] != 0;
}


