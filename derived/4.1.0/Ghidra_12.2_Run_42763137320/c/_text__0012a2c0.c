/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0012a2c0; name: FUN_.text__0012a2c0
 */


void FUN__text__0012a2c0(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  *(long *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  puVar3 = (undefined8 *)0x0;
  if (*(long *)(param_2 + 0x70) != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_2 + 0x70) + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
LAB__text__0012a33c:
      *(undefined8 *)(param_1 + 0x18) = 0;
      return;
    }
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    plVar2 = (long *)FUN__text__0012d4b4();
    if (plVar2 != plVar1) {
      do {
        plVar1 = (long *)*plVar1;
      } while (plVar1 != plVar2 && plVar1 != (long *)0x0);
      if (plVar1 == (long *)0x0) goto LAB__text__0012a33c;
    }
    puVar3 = puVar3 + -10;
  }
  *(undefined8 **)(param_1 + 0x18) = puVar3;
  return;
}


