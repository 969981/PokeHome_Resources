/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0047d924; name: FUN_.text__0047d924
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0047d924(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 uStack_11;
  
  lVar3 = *(long *)(param_1 + 0x98);
  if (lVar3 != param_2) {
    if (lVar3 != 0) {
      FUN__text__0044b5f0(*(undefined8 *)(lVar3 + 8),*(undefined8 *)(*(long *)(param_1 + 8) + 0x58))
      ;
      puVar4 = *(undefined8 **)(param_1 + 0x98);
      iVar2 = *(int *)(puVar4 + 0xc);
      iVar1 = iVar2 + -1;
      *(int *)(puVar4 + 0xc) = iVar1;
      if (((iVar1 == 0) ||
          (((iVar1 == 1 && (iVar2 != 0 || *(char *)((long)puVar4 + 100) == '\0')) &&
           (*(char *)((long)puVar4 + 100) != '\0')))) &&
         (FUN__text__004473f0(puVar4), *(int *)(puVar4 + 0xc) == 0)) {
        (**(code **)*puVar4)(puVar4);
        FUN__text__00400fc0(4,puVar4);
      }
    }
    *(long *)(param_1 + 0x98) = param_2;
    if (param_2 != 0) {
      iVar2 = FUN__text__0044b5b4(*(undefined8 *)(param_2 + 8),
                                  *(undefined8 *)(*(long *)(param_1 + 8) + 0x58));
      if (iVar2 == 1) {
        lVar3 = *(long *)(param_1 + 0x98);
        iVar2 = *(int *)(lVar3 + 0x60);
        *(int *)(lVar3 + 0x60) = iVar2 + 1;
        if ((iVar2 == 1) && (*(char *)(lVar3 + 100) != '\0')) {
          FUN__text__004473d0();
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x98) = 0;
      }
    }
    FUN__text__0044b8a0(_DAT_008a4480,*(undefined8 *)(*(long *)(param_1 + 8) + 0x58),&uStack_11);
  }
  return;
}


