/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::0043d9f0; name: FUN_.text__0043d9f0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__0043d9f0(long *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = _DAT_008a45f0;
  iVar3 = (int)param_1[1];
  if (0 < iVar3) {
    lVar4 = 0;
    lVar5 = 4;
    do {
      cVar1 = *(char *)(*param_1 + lVar5);
      if (cVar1 == '\x04' || cVar1 == '\x02') {
        FUN__text__00435810(*puVar2,*(undefined8 *)(*param_1 + lVar4 * 8),param_2);
        iVar3 = (int)param_1[1];
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (lVar4 < iVar3);
    if (0 < iVar3) {
      lVar4 = 0;
      lVar5 = 4;
      do {
        cVar1 = *(char *)(*param_1 + lVar5);
        if (cVar1 != '\x02' && cVar1 != '\x04') {
          FUN__text__00435810(*puVar2,*(undefined8 *)(*param_1 + lVar4 * 8),param_2);
          iVar3 = (int)param_1[1];
        }
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 8;
      } while (lVar4 < iVar3);
    }
  }
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}


