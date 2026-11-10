/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::001e3e20; name: FUN_.text__001e3e20
 */


bool FUN__text__001e3e20(long param_1)

{
  char cVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  
  cVar1 = *(char *)(param_1 + 0x80);
  if (cVar1 != '\0') {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    plVar3 = (long *)FUN__text__0018d6a0();
    if (plVar3 != plVar2) {
      do {
        plVar2 = (long *)*plVar2;
      } while (plVar2 != plVar3 && plVar2 != (long *)0x0);
    }
    *(undefined4 *)(puVar4 + 0x6a) = 6;
  }
  return cVar1 != '\0';
}


