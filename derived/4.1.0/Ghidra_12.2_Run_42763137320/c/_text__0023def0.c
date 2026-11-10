/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0023def0; name: FUN_.text__0023def0
 */


undefined8 * FUN__text__0023def0(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long local_30;
  long *local_28;
  
  uVar1 = FUN__text__0012559c();
  local_30 = param_1;
  FUN__text__0023e62c(&local_28,uVar1,&local_30);
  if (*(long *)(param_1 + 0x348) != 0) {
    (**(code **)(*(long *)(*(long *)(param_1 + 0x348) + 0x48) + 0x18))();
  }
  *(long **)(param_1 + 0x348) = local_28;
  (**(code **)(*local_28 + 0x10))(&local_28);
  if (local_28 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar4 = (undefined8 *)local_28[0xc];
  if (puVar4 != (undefined8 *)0x0) {
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    plVar3 = (long *)FUN__text__0023e748();
    if (plVar3 != plVar2) {
      do {
        plVar2 = (long *)*plVar2;
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
      if (plVar2 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto joined_r0x0023df90;
      }
    }
    puVar4 = puVar4 + -10;
  }
joined_r0x0023df90:
  if (local_28 != (long *)0x0) {
    (**(code **)(local_28[9] + 0x18))();
  }
  return puVar4;
}


