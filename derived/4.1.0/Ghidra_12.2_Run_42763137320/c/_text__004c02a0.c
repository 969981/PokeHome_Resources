/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::004c02a0; name: FUN_.text__004c02a0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN__text__004c02a0(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_2 + 0x40);
  if (*(ushort *)(param_1 + 0x34) - 0x304 < 2) {
    FUN__text__004bd3c8(param_1,2,uVar7,*(undefined4 *)(param_2 + 0x38));
    FUN__text__004b7020(*_DAT_008a45c0,uVar7,param_1 + 0x38,*(byte *)(param_1 + 0x48) & 1,
                        *(undefined4 *)(param_2 + 0x38));
  }
  else if ((*(ushort *)(param_1 + 0x34) - 0x302 < 2) &&
          (lVar6 = FUN__text__004ba560(param_1), lVar6 != 0)) {
    uVar5 = FUN__text__004bd0b0(param_1,2,uVar7,*(undefined4 *)(param_2 + 0x38));
    FUN__text__004b5510(*_DAT_008a45c0,lVar6,uVar7,*(byte *)(param_1 + 0x48) & 1,
                        *(undefined4 *)(param_2 + 0x38));
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
      (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))((long *)(lVar6 + 0x10));
    }
    return uVar5;
  }
  return 1;
}


