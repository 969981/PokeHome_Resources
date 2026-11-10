/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0015935c; name: FUN_.text__0015935c
 */


void FUN__text__0015935c(long param_1)

{
  long lVar1;
  undefined8 local_28;
  undefined8 local_8;
  
  lVar1 = *(long *)(param_1 + 0x78);
  if ((((lVar1 == 0) || (*(char *)(lVar1 + 0x170) == '\0')) &&
      ((*(long *)(param_1 + 0x188) == 0 || (*(char *)(*(long *)(param_1 + 0x188) + 0x170) == '\0')))
      ) || (*(long *)(param_1 + 0x60) != 0)) {
    return;
  }
  local_28 = *(undefined8 *)(lVar1 + 400);
  FUN__text__001594b4(&local_8,*(undefined8 *)(param_1 + 8),&local_28);
  if (*(long *)(param_1 + 0x60) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x60) + 0x48) + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x60) = local_8;
  FUN__text__005f2c98(local_8,param_1 + 0x180);
  return;
}


