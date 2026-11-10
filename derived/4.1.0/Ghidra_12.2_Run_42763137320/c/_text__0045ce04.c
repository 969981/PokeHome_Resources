/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0045ce04; name: FUN_.text__0045ce04
 */


undefined8 * FUN__text__0045ce04(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)param_1[2];
  if (puVar3 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar3 + 0xc);
    iVar2 = iVar1 + -1;
    *(int *)(puVar3 + 0xc) = iVar2;
    if (((iVar2 == 0) ||
        ((iVar2 == 1 && (iVar1 != 0 || *(char *)((long)puVar3 + 100) == '\0')) &&
         *(char *)((long)puVar3 + 100) != '\0')) &&
       (FUN__text__004473f0(puVar3), *(int *)(puVar3 + 0xc) == 0)) {
      (**(code **)*puVar3)(puVar3);
      FUN__text__00400fc0(4,puVar3);
    }
  }
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_1;
}


