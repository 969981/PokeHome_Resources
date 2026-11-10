/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004b7a90; name: FUN_.text__004b7a90
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__004b7a90(long *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)param_1[8];
  *param_1 = _DAT_008a46c0 + 0x10;
  if (puVar4 != (undefined8 *)0x0) {
    iVar1 = *(int *)(puVar4 + 0xc);
    iVar2 = iVar1 + -1;
    *(int *)(puVar4 + 0xc) = iVar2;
    if (((iVar2 == 0) ||
        ((iVar2 == 1 && (iVar1 != 0 || *(char *)((long)puVar4 + 100) == '\0')) &&
         *(char *)((long)puVar4 + 100) != '\0')) &&
       (FUN__text__004473f0(puVar4), *(int *)(puVar4 + 0xc) == 0)) {
      (**(code **)*puVar4)(puVar4);
      FUN__text__00400fc0(4,puVar4);
      lVar3 = *(long *)((long)param_1 + 0x1c);
      goto joined_r0x004b7b28;
    }
  }
  lVar3 = *(long *)((long)param_1 + 0x1c);
joined_r0x004b7b28:
  if (lVar3 == 0) {
    return;
  }
  FUN__text__0040c060();
  return;
}


