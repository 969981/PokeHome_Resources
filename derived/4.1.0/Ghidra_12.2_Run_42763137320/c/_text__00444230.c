/* Recovered by Ghidra 12.2, not original Nintendo source.
 * HOME 4.1.0 original ELF SHA256: bdb558f795710a89aee1af7ed3b5de359a4ca0b4fef6dcdca62e597b9d45df7a
 * Ghidra function entry: .text::00444230; name: FUN_.text__00444230
 */


undefined8 FUN__text__00444230(long param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0xa0) != 0 && *(long *)(param_1 + 0xa0) != *(long *)(param_2 + 0x18)) {
    *(undefined4 *)(param_1 + 0xc0) = 3;
    FUN__text__00444150(param_1);
    while (uVar3 = *(uint *)(param_1 + 0x88), uVar3 != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x80) + (ulong)uVar3 * 8 + -8);
      *(uint *)(param_1 + 0x88) = uVar3 - 1;
      piVar1 = (int *)(lVar6 + 0x24);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        (**(code **)(*(long *)(lVar6 + 0x10) + 0x20))();
      }
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    if (*(long *)(param_1 + 0xa0) != 0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
      FUN__text__00445c54();
    }
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 1;
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0x28);
  FUN__text__00444304(param_1,param_2,param_3);
  return 1;
}


