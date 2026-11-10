/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00509710; name: FUN_.text__00509710
 */


void FUN__text__00509710(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = (undefined8 *)*param_1;
  if ((int)param_1[1] == 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    do {
      puVar4 = (undefined8 *)*puVar3;
      iVar1 = *(int *)(puVar4 + 0xc);
      iVar2 = iVar1 + -1;
      *(int *)(puVar4 + 0xc) = iVar2;
      if (((iVar2 == 0) ||
          ((iVar2 == 1 && (iVar1 != 0 || *(char *)((long)puVar4 + 100) == '\0')) &&
           *(char *)((long)puVar4 + 100) != '\0')) &&
         (FUN__text__004473f0(puVar4), *(int *)(puVar4 + 0xc) == 0)) {
        (**(code **)*puVar4)(puVar4);
        FUN__text__00400fc0(4,puVar4);
      }
      puVar3 = puVar3 + 2;
    } while (puVar3 != (undefined8 *)*param_1 + (ulong)*(uint *)(param_1 + 1) * 2);
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    puVar3 = (undefined8 *)*param_1;
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN__text__00400fc0(9,puVar3);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1 + 3) = 0;
    FUN__text__00400fc0(9);
    param_1[2] = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
  }
  return;
}


