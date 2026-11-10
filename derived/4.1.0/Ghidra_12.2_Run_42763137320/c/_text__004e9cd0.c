/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004e9cd0; name: FUN_.text__004e9cd0
 */


void FUN__text__004e9cd0(long param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  plVar2 = (long *)(param_1 + 0x10);
  if ((undefined8 *)*plVar2 != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)*plVar2;
    puVar4 = (undefined8 *)0x0;
    do {
      while (puVar3 = puVar5, *(int *)(puVar3 + 3) == 1) {
        FUN__text__004e9250(puVar3[4]);
        puVar5 = (undefined8 *)puVar3[2];
        plVar1 = plVar2;
        if ((undefined8 *)*plVar2 != puVar3) {
          plVar1 = puVar4 + 2;
        }
        *plVar1 = (long)puVar5;
        (**(code **)*puVar3)(puVar3);
        FUN__text__00400fc0(0,puVar3);
        if (puVar5 == (undefined8 *)0x0) {
          return;
        }
      }
      puVar5 = (undefined8 *)puVar3[2];
      puVar4 = puVar3;
    } while ((undefined8 *)puVar3[2] != (undefined8 *)0x0);
  }
  return;
}


