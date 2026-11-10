/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::005e268c; name: FUN_.text__005e268c
 */


void FUN__text__005e268c(long *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  long *local_28;
  
  if (param_1[0x4c] == 0) {
    bVar2 = true;
    local_28 = (long *)0x0;
    cVar1 = *(char *)((long)param_1 + 0x26c);
  }
  else {
    FUN__text__005e34e0(&local_28);
    bVar2 = local_28 == (long *)0x0;
    cVar1 = *(char *)((long)param_1 + 0x26c);
  }
  if ((cVar1 == '\0') || (!bVar2)) {
    FUN__text__005e2890(param_1 + 0x2b,param_2);
    (**(code **)(*param_1 + 0x40))(param_1,param_2);
    if (local_28 != (long *)0x0) {
      (**(code **)(*local_28 + 0x18))();
      return;
    }
  }
  return;
}


