/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004509b0; name: FUN_.text__004509b0
 */


void FUN__text__004509b0(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0xf0) != 0) {
    FUN__text__004dabb8();
    puVar4 = *(undefined8 **)(param_1 + 0xf0);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4);
      FUN__text__00400fc0(5,puVar4);
    }
    *(undefined8 *)(param_1 + 0xf0) = 0;
  }
  FUN__text__0044dd98(param_1 + 0x70);
  lVar2 = *(long *)(param_1 + 0x100);
  *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) & 0xfd;
  if (lVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x108);
    if (0 < iVar3) {
      lVar5 = 0;
      lVar2 = 0;
      do {
        lVar1 = *(long *)(param_1 + 0x100) + lVar5;
        if (*(char *)(lVar1 + 0x18) != '\0') {
          FUN__text__00400fc0(5,*(undefined8 *)(lVar1 + 8));
          *(undefined8 *)(*(long *)(param_1 + 0x100) + lVar5 + 8) = 0;
          iVar3 = *(int *)(param_1 + 0x108);
        }
        lVar2 = lVar2 + 1;
        lVar5 = lVar5 + 0x20;
      } while (lVar2 < iVar3);
      lVar2 = *(long *)(param_1 + 0x100);
    }
    FUN__text__00400fc0(5,lVar2);
    *(undefined8 *)(param_1 + 0x100) = 0;
  }
  *(undefined8 *)(param_1 + 0x108) = 0;
  return;
}


