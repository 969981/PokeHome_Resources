/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::003b5ab0; name: FUN_.text__003b5ab0
 */


void FUN__text__003b5ab0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 local_40;
  ulong local_38;
  undefined1 auStack_18 [8];
  
  *(undefined8 *)(*(long *)(param_1 + 0x40) + 0x48) = 0;
  if (0 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc)) {
    uVar4 = tpidr_el0;
    iVar3 = 0;
    uVar4 = uVar4 & 0xffffffffffffe000;
    do {
      while( true ) {
        local_38 = local_38 & 0xfffffffffffffffe;
        puVar2 = *(undefined8 **)(param_1 + 0x40);
        local_40 = 0;
        puVar1 = (undefined8 *)(puVar2[8] + puVar2[9] * 0x10);
        if (puVar2[9] == puVar2[10]) break;
        if (*(long *)(uVar4 + 0x98) == 0x10) {
                    /* WARNING: Subroutine does not return */
          FUN__text__00102c10();
        }
        *(undefined8 *)(uVar4 + *(long *)(uVar4 + 0x98) * 8 + 0x18) = *puVar2;
        *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + 1;
        *puVar1 = 0;
        puVar1[1] = local_38;
        *(long *)(uVar4 + 0x98) = *(long *)(uVar4 + 0x98) + -1;
        puVar2[9] = puVar2[9] + 1;
        iVar3 = iVar3 + 1;
        if (*(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc) <= iVar3) {
          return;
        }
      }
      FUN__text__003b6410(auStack_18,puVar2,puVar1,1,&local_40);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x10) * *(int *)(param_1 + 0xc));
  }
  return;
}


