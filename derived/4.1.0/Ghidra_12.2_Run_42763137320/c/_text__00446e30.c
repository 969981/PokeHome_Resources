/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00446e30; name: FUN_.text__00446e30
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN__text__00446e30(long *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)param_1[2];
  *param_1 = _DAT_008a4428 + 0x10;
  if (puVar7 != (undefined8 *)0x0) {
    iVar2 = *(int *)(puVar7 + 0xc);
    iVar5 = iVar2 + -1;
    *(int *)(puVar7 + 0xc) = iVar5;
    if (((iVar5 == 0) ||
        ((iVar5 == 1 && (iVar2 != 0 || *(char *)((long)puVar7 + 100) == '\0')) &&
         *(char *)((long)puVar7 + 100) != '\0')) &&
       (FUN__text__004473f0(puVar7), *(int *)(puVar7 + 0xc) == 0)) {
      (**(code **)*puVar7)(puVar7);
      FUN__text__00400fc0(4,puVar7);
      lVar6 = param_1[8];
      goto joined_r0x00446e98;
    }
  }
  lVar6 = param_1[8];
joined_r0x00446e98:
  if (lVar6 != 0) {
    piVar1 = (int *)(lVar6 + 0x24);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))();
    }
  }
  if (param_1[3] == 0) {
    return;
  }
  FUN__text__0040c060();
  return;
}


