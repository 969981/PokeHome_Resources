/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00524420; name: FUN_.text__00524420
 */


undefined8 FUN__text__00524420(long param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  undefined1 uStack_21;
  
  uVar2 = 0xfffffffffffffffc;
  if (*(ulong *)(param_1 + 0x78) != 0xffffffffffffffff) {
    uVar2 = *(ulong *)(param_1 + 0x78);
  }
  uVar7 = *(uint *)(param_2 + 0x28);
  if (uVar7 != 0) {
    iVar8 = 0;
    do {
      iVar1 = iVar8 + (uVar7 >> 1);
      uVar9 = *(ulong *)(*(long *)(param_2 + 0x20) + (long)iVar1 * 0x10 + 8);
      if (uVar9 == uVar2) {
        return 0;
      }
      if (uVar9 < uVar2) {
        iVar8 = iVar1 + 1;
      }
      uVar3 = uVar7 - (uVar9 < uVar2);
      uVar7 = uVar3 >> 1;
    } while (1 < uVar3);
  }
  puVar4 = (undefined8 *)
           FUN__text__00523030(param_1,uVar2,*(undefined4 *)(param_1 + 0x98),
                               *(undefined8 *)(*(long *)(param_2 + 8) + 0x58));
  uVar6 = 0;
  if (puVar4 != (undefined8 *)0x0) {
    plVar5 = (long *)FUN__text__00528570((long *)(param_2 + 0x20),puVar4[0xb],&uStack_21);
    if (plVar5 != (long *)0x0) {
      *plVar5 = (long)puVar4;
      iVar8 = *(int *)(puVar4 + 0xc);
      *(int *)(puVar4 + 0xc) = iVar8 + 1;
      if (iVar8 == 1 && *(char *)((long)puVar4 + 100) != '\0') {
        FUN__text__004473d0(puVar4);
      }
    }
    iVar8 = *(int *)(puVar4 + 0xc);
    iVar1 = iVar8 + -1;
    *(int *)(puVar4 + 0xc) = iVar1;
    if (((iVar1 == 0) ||
        ((iVar1 == 1 && (iVar8 != 0 || *(char *)((long)puVar4 + 100) == '\0')) &&
         *(char *)((long)puVar4 + 100) != '\0')) &&
       (FUN__text__004473f0(puVar4), *(int *)(puVar4 + 0xc) == 0)) {
      (**(code **)*puVar4)(puVar4);
      FUN__text__00400fc0(4,puVar4);
    }
    uVar6 = 1;
  }
  return uVar6;
}


